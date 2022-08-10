var bleno = require('bleno');
var fs = require('fs');
const vioPath = "vioData.csv";
const devicePath = "deviceinfo.csv";


var start = true;
const timer = ms => new Promise(res => setTimeout(res, ms))
const wait = (ms) => new Promise(resolve => setTimeout(resolve, ms))

var dict = {}


var state = "Not Scanning"


var codemode="0"
// Writing vio into a csv file
function writeData1(vio) {
     if (fs.existsSync(vioPath) && start == false) {
          fs.appendFile(vioPath, vio)
     } else {
          fs.writeFile(vioPath, "date and time,x location,y location,z location")
          fs.appendFile(vioPath, vio)
     }
}
function serializeFile(devicePath) {
     var text = fs.readFileSync(devicePath);
     return text; 
     
}

 var Descriptor = bleno.Descriptor;
 var descriptor = new Descriptor({
    uuid: '2901',
    value: 'value' // static value, must be of type Buffer or string if set
 });



 
 var Characteristic = bleno.Characteristic;



 const {exec} = require("child_process");
 var characteristic = new Characteristic({
      uuid: 'fff1',
      properties: [ 'read', 'write', 'writeWithoutResponse','notify'],
      descriptors: [ descriptor ],
      onSubscribe: function(maxValueSize, updateValueCallback) {
          console.log('NotifyOnlyCharacteristic subscribe');
        
          this.counter = 0;
          this._updateValueCallback = updateValueCallback

           this.changeInterval = setInterval(function() {
             var data = new Buffer(32);
                state1="ST:"+state+" "+this.counter
                data.write(state1)

             console.log('NotifyOnlyCharacteristic update value: ' + data);
             updateValueCallback(data);
             this.counter++;
           }.bind(this), 500);
        },
      onReadRequest: function(offset, callback) {
              console.log('We got an onReadRequest!');


          var result = this.RESULT_SUCCESS;
          
            var data = serializeFile(devicePath);
            console.log('[+] Sending back: ', data);
            console.log('[+] Sending back: ', devicePath);

            if (offset > data.length) {
            result = this.RESULT_INVALID_OFFSET;
            data = null;
            } else {
            console.log('cut');
            data = data.slice(offset);
            }
            console.log('success');
            callback(result, data);




         },
     onWriteRequest : function(newData, offset, withoutResponse, callback) {

               var res = newData.toString('utf8')
               var mode = res.includes("Instruction")

               var data = new Buffer(32);

               state="Scanning"
               data.write(state)


               if(mode ==1){
                    if(res.includes("StartSSID"))
                    {

                    state = "Scanning"
                    console.log('got newInstruction: ' + newData.toString('utf8')); // + new data (dont need I think)
                    exec("sudo python3 ssid_capture.py", (error, stdout, stderr) => {
                    if(error) {
                         console.log("h1");
                         console.log(error.message);
                         return;
                    }
                    if(stderr) {
                         console.log("h2");

                         console.log('stderr: ${stderr}');
                    }

                         console.log("h3");

                    console.log(stdout);
 
                    var exec = require('child_process').exec;
                    var counter=0
                    var fs = require('fs');
                    filePath = "ssid_list.csv";
                    fileBuffer =  fs.readFileSync(filePath);
                    to_string = fileBuffer.toString();
                    split_lines = to_string.split("\n");
                    counter= split_lines.length-1
                    console.log(split_lines.length-1);
                    state="Finished Scanning, Found " + counter

                 



               });



               }
               else if(res.includes("FetchSSID"))
               {
                    clearInterval(this.changeInterval);

                    var dict={}
                    console.log("Cleared Interval, launched new")

                    console.log('got newInstruction: ' + newData.toString('utf8')); // + new data (dont need I think)

                    var result = this.RESULT_SUCCESS;
                    codemode = "fetch"


                    const allFileContents = fs.readFileSync('ssid_list1.csv', 'utf-8');

                    var i= 1
                    allFileContents.split(/\r?\n/).forEach(line =>  {
                    console.log(`Line from file: ${line}`);
                    var value = "Ins!"+i+"!"+line
                    var data = new Buffer(128);
                    data.write(value);
                    dict[i] = data
                    i = i+1
                    });
                    const used = process.memoryUsage().heapUsed / 1024 / 1024;
                    console.log(`The script uses approximately ${Math.round(used * 100) / 100} MB`);
                    console.log(dict)
                    var iend = i
                    var i =1
                    this.newInterval = setInterval(function() {
                         var data = new Buffer(32);
                            state1=dict[i]
                            i=i+1
            
                         console.log('NotifyOnlyCharacteristic update value: ' + state1);
                         this._updateValueCallback(state1);
                         if(i>=iend)
                         {
                              clearInterval(this.newInterval);
                              this.counter = 0
                              this.changeInterval = setInterval(function() {
                                   var data = new Buffer(32);
                                      state1=state+" "+this.counter
                                      data.write(state1)                      
                                   console.log('NotifyOnlyCharacteristic update value: ' + data);
                                   this._updateValueCallback(data);
                                   this.counter++;
                                 }.bind(this), 5000);
                         }

                       }.bind(this), 500);
                    
               }
               

               }
               else if(res.includes("startCapture"))
               {
                    console.log("Started Packet Capturing")
                    exec("sudo pkill -f python3", (error, stdout, stderr) => {});
                    exec("sudo rm rssi.txt", (error, stdout, stderr) => {});
                    
                    clearInterval(this.changeInterval);
                    clearInterval(this.newInterval);

                    this.newInterval = setInterval(function() {
                         var data = new Buffer(32);
                         exec("tail -n 1 rssi.txt",  (error, stdout, stderr) => {
                              var state1 = stdout
                         const chars = state1.split(',');
                         var state1=chars[2]

                         var val  = Number(state1)
                         state1 = String(val)
                         console.log(state1)
                         console.log(chars)
                         console.log(val)
                         var data = new Buffer(32);
                          state1="RS:" +val
                          data.write(state1)
                         console.log('NotifyOnlyCharacteristic update value2: ' + state1);
                         this._updateValueCallback(data);

                         })
                                   
                    
                       }.bind(this), 500);


                    exec("sudo python3 localize.py", (error, stdout, stderr) => {
                         if(error) {
                              console.log('error: ${error.message}',error);
                              clearInterval(this.newInterval);
                              var data = serializeFile(devicePath);
                              console.log('NotifyOnlyCharacteristic update value2: ' + data);
                              this._updateValueCallback(data);

                              return;
                         }
                         if(stderr) {
                              console.log('stderr: ${stderr}');
                              return;
                         }
                         
                         
                         console.log(stdout);
                    });
                   


               }
               else
               {

               console.log('got newData: ' + newData.toString('utf8')); // + new data (dont need I think)
               callback(bleno.Characteristic.RESULT_SUCCESS);
               console.log(newData);
               writeData1((newData.toString('utf8')));
               start = false;
               console.log('new data' ); 
          }
     },
     
 });
 var PrimaryService = bleno.PrimaryService;
 var primaryService = new PrimaryService({
      uuid: 'fffffffffffffffffffffffffffffff0',
      characteristics: [ characteristic ]
 });
 var services = [ primaryService ];
 bleno.on('advertisingStart', function(error) {
      bleno.setServices( services );
 });
 bleno.on('stateChange', function(state) {
      var cdd = new Date().toISOString()
      console.log('BLE stateChanged to: ' + state);
      if (state === 'poweredOn') {
         bleno.startAdvertising('MyNewDevice',['fffffffffffffffffffffffffffffff0']);
      } else {
         bleno.stopAdvertising();
      }
 });