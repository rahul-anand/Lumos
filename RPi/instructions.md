Changes to make to run the code in your environment:

In Prototype.xcodeproj:
	Change ‘Header Search Paths’ and ‘Library Search Paths’ to
		$<PATH TO SWIFT FOLDER>/SwiftFolder/Prototype/PrefixHeader.pch

For Raspberry Pi:

Install the following:
  
  
	nodejs:
		curl -sL https://deb.nodesource.com/setup_8.x | sudo -E bash -
		sudo apt-get install -y nodejs
	
  
	npm:
		sudo apt-get -f install npm
  
  
	Bleno:
		sudo npm install Bleno
	change the version of nodejs:
		sudo npm install -g n
		sudo n 8.9.0	
  
  
	bluetooth-hci-socket:
		sudo npm install bluetooth-chi-socket —unsafe-perm 
	
