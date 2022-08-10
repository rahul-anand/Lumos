#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2BF5C828331510A60F01770EDA23C238D9AE8057;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t77B961C60C3D2BD1A9D9382BB753022A4AADE677;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27;
// UnityEngine.SocialPlatforms.IScore
struct IScore_tE3BDDCDC8FB888BD6AF13EE00EF6AE225DDF2B3B;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tBE239C94BA41C72261407718E0EA66072945F54C;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t7570552C35A220ADB9666809E4D57E4C10713634;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769;

IL2CPP_EXTERN_C RuntimeClass* AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0;
IL2CPP_EXTERN_C String_t* _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral410946CD131353B68F194902EF06C27382525682;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152;
IL2CPP_EXTERN_C String_t* _stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8;
IL2CPP_EXTERN_C String_t* _stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5;
IL2CPP_EXTERN_C String_t* _stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC;
IL2CPP_EXTERN_C String_t* _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241;
IL2CPP_EXTERN_C String_t* _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFFE2B018FE9C481B67387513F728E577370086;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278;
IL2CPP_EXTERN_C String_t* _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE257927B32DAB50508A3C86C95CE80E50F47A280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4DEA4ABF8AEB43CC9635DAFBD0DBBD013187BD3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCB5492B7D56FAAF15A6463839B9A80DD16DA33B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCB024BFF593508BA9B77C381B20D0942F0F533AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFBB409A3035BA1C75E9E4982F2E1BE5A1914141F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6D8BF4BBA01F07B5A1439CF1CD3F9264423B1F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m48A6C9D0E3E9E9FA4529980A32F48C3AF5520CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m4B82E8613D69236F6B072A688C556241D1CA9E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AchievementDescription_ToString_m48909B3814359ED0FAF88F29F3B80C024F0C5D36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Achievement_ToString_m443278D0F151B7B9BAF041785378EFEAC98E6052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Achievement__ctor_m570954380BDC68F860E558D037369D03269C72A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Achievement__ctor_m8E491BFB569F645FC9BF4CC8F58F5718C54901E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_AchievementCallbackWrapper_m752E3607DDB87BD4D46C63005991FA059EB34A34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_AuthenticateCallbackWrapper_m589656EB520DF6FDBD4A01FEF3C81E01F5AAE2AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ClearAchievementDescriptions_mA72C2A90928D81926EF8BCAB66F7150DE0E489CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ClearFriends_m9B33314190B858DB062C30278B9588351B2424BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ClearUsers_m242535F1ED28589D2C91D12CB1FB3330BBE116A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_CreateAchievement_mC8BE646E6BB63CCF284C62FABEE712BF7590DB1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_CreateLeaderboard_mC2B336F8C9569B3FD7059ED7861B208DD44B0EAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_GetLoading_m06F9588A6143126F03D9C0AAEAA853EC1C9FC3C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_LeaderboardCallbackWrapper_m1D0797D04EBCFC94424E7033C9E02D3DA4A8A4B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_LoadAchievementDescriptions_m72A5167A9328B903358163FC83A800B9FCEB9AD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_LoadAchievements_m63737CE0EF90F20A31DD1F43EE3D39D79836DF7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_LoadScores_m54BF2C6FAB4A19BC80B168F3BB985BDBAFA96A1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_LoadScores_mC191ABA1B69A13CC88A44AF25BD89E1D289CBF52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_LoadUsers_m10FB18D65C6C997E1AB6F0BEB27891B0C1A4923C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_PopulateLocalUser_m06D6DF4CD813CC6AB95B84289871700D99C4EF42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ProgressCallbackWrapper_m936927D783018BF2401D54CA92F8B968C2E3D2B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ReportProgress_mD284779838DA024C5CA4EC40D1B2ECA25569D5C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ReportScore_m2ACB935864BC415729EF552832518FA3FF890171_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ResetAllAchievements_m0D1E0F3E02F0F8F11B2BC6259032DACD60C95E93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SafeClearArray_m3A96AB8175D512B8EECD0EB25B80769914D34D07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SafeSetUserImage_m346275823D7FDD78D062A4E746AE1C6D2A82F849_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ScoreCallbackWrapper_m7F03AD845F9F4969A3ABCE49518FCBCFEB8D1F6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ScoreLoaderCallbackWrapper_m8E18C1133A5C05CF4449F9D3FADE430BEBBF0DA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SetAchievementDescriptionImage_mF30697C06E102BA695C5C0A8F1CA7DF665DA592C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SetAchievementDescription_mC153A5A1641CD0ACD697FCA5F8AE700E3AC5D556_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SetFriendImage_m0345E60955A58236E7FAF8AFEB97609976891A27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SetFriends_m2C5398BD94DE525FC80494D147F1A66B134511D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SetUserImage_m36FDEC3247298B1308E85BA4BFD1F8AAAD0E9E7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_SetUser_m67E0DEED2E11D8B4E1EFFB03AB95573F1418903C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ShowAchievementsUI_m425068FBB95E73A5E2C34A8045394F9583F27728_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ShowDefaultAchievementCompletionBanner_mF2DF755184E4F2608334418643FD5FB1767B2825_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ShowLeaderboardUI_m22ADB2F97963833741FE633EE2D9B332077A3458_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_ShowLeaderboardUI_m25410C4C825818ABC415F3231AFD4C0B3D80100C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_TriggerAchievementDescriptionCallback_m2B6DE7A6A44E667D121C17D2F00EC3126E4F83FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_TriggerFriendsCallbackWrapper_mAAC5526F5A3C56F30959252B475576C305BB7D1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_TriggerResetAchievementCallback_m2E643A3EF41033D83DB9C85BE1090B88735209B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_TriggerUsersCallbackWrapper_mBF798F547F7094681E0B5B5FFEEE221DD7E4CC33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m1906287A9BD6679297200FD68303DA2CA9BB4EFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3ACFDDBE3CD2501B919983BEDF89463CE33572BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m1DFD532E0674BB256884F22C83495D9FFBB66CB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform__cctor_mE88589D1A6F81068B6E9E2E837C61535E74B4D72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameCenterPlatform_get_localUser_m7E985071FAA0B7393A5B2A056917DF06B41BD0A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcLeaderboard_Dispose_m54F8C8544A7F65898B6444B3EE11916153C20B6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcLeaderboard_SetScores_m0FE1B289E42EAF2415193FFA1BEAE3FE38AA6B4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Leaderboard_ToString_mE59DCCF117736269AF0C6CD21876DB3448BD14ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Leaderboard__ctor_mC09955DEF2101303E698FC13E1BBFFA90B3365F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score_ToString_mBE1B8E8846C633AAA58A0680C888F21915454FC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Score__ctor_m88494757EDE00B4CA1BE7027A1F84C82E09EC958_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m4B82E8613D69236F6B072A688C556241D1CA9E5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserProfile_ToString_mE86E8A99DF0EE73C93A55624E890806213567924_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7;
struct GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D;
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1;
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226;
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
struct IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E;
struct AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2;
struct AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8;
struct ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127;
struct UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFAA9E074DCFFF466D21223A3D56A3524B4C3F69C 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct  List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400, ____items_1)); }
	inline GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC* get__items_1() const { return ____items_1; }
	inline GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400_StaticFields, ____emptyArray_5)); }
	inline GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GcLeaderboardU5BU5D_t3E539E0A1B8F4CF18CC53AFAE91826EB07AE08DC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AuthenticateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_adCache_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_friends_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_users_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ResetAchievements_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalUser_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GcBoards_6), (void*)value);
	}
};


// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform_<>c__DisplayClass21_0::callback
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A, ___callback_0)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___m_Image_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AchievedDescription_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnachievedDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_6), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct  Enumerator_t0CE4A07F744981B45029535658492977F0C12721 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0CE4A07F744981B45029535658492977F0C12721, ___list_0)); }
	inline List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * get_list_0() const { return ___list_0; }
	inline List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0CE4A07F744981B45029535658492977F0C12721, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0CE4A07F744981B45029535658492977F0C12721, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0CE4A07F744981B45029535658492977F0C12721, ___current_3)); }
	inline GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * get_current_3() const { return ___current_3; }
	inline GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_Image_2)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AchievedDescription_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnachievedDescription_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Category_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FormattedValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlayerID_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::teamID
	String_t* ___teamID_1;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::gameID
	String_t* ___gameID_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_4;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userName_0), (void*)value);
	}

	inline static int32_t get_offset_of_teamID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D, ___teamID_1)); }
	inline String_t* get_teamID_1() const { return ___teamID_1; }
	inline String_t** get_address_of_teamID_1() { return &___teamID_1; }
	inline void set_teamID_1(String_t* value)
	{
		___teamID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teamID_1), (void*)value);
	}

	inline static int32_t get_offset_of_gameID_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D, ___gameID_2)); }
	inline String_t* get_gameID_2() const { return ___gameID_2; }
	inline String_t** get_address_of_gameID_2() { return &___gameID_2; }
	inline void set_gameID_2(String_t* value)
	{
		___gameID_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameID_2), (void*)value);
	}

	inline static int32_t get_offset_of_isFriend_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D, ___isFriend_3)); }
	inline int32_t get_isFriend_3() const { return ___isFriend_3; }
	inline int32_t* get_address_of_isFriend_3() { return &___isFriend_3; }
	inline void set_isFriend_3(int32_t value)
	{
		___isFriend_3 = value;
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D, ___image_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_image_4() const { return ___image_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___teamID_1;
	char* ___gameID_2;
	int32_t ___isFriend_3;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___teamID_1;
	Il2CppChar* ___gameID_2;
	int32_t ___isFriend_3;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image_4;
};

// UnityEngine.SocialPlatforms.Range
struct  Range_t70C133E51417BC822E878050C90A577A69B671DC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	intptr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72, ___m_InternalLeaderboard_0)); }
	inline intptr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline intptr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(intptr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GenericLeaderboard_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___m_GenericLeaderboard_1;
};

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565, ___m_LastReportedDate_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_Date_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FormattedValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserID_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleaderboardIDU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserState
struct  UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t70C133E51417BC822E878050C90A577A69B671DC  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalUserScore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_Scores_3)); }
	inline IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_UserIDs_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserIDs_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t70C133E51417BC822E878050C90A577A69B671DC  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Image_4;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_gameID
	String_t* ___m_gameID_5;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ID_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_Image_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_gameID_5() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_gameID_5)); }
	inline String_t* get_m_gameID_5() const { return ___m_gameID_5; }
	inline String_t** get_address_of_m_gameID_5() { return &___m_gameID_5; }
	inline void set_m_gameID_5(String_t* value)
	{
		___m_gameID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameID_5), (void*)value);
	}
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct  Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct  Action_1_t7570552C35A220ADB9666809E4D57E4C10713634  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct  Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct  Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Boolean,System.String>
struct  Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D  : public UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* ___m_Friends_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_7;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_8;

public:
	inline static int32_t get_offset_of_m_Friends_6() { return static_cast<int32_t>(offsetof(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D, ___m_Friends_6)); }
	inline IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* get_m_Friends_6() const { return ___m_Friends_6; }
	inline IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E** get_address_of_m_Friends_6() { return &___m_Friends_6; }
	inline void set_m_Friends_6(IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* value)
	{
		___m_Friends_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Friends_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Authenticated_7() { return static_cast<int32_t>(offsetof(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D, ___m_Authenticated_7)); }
	inline bool get_m_Authenticated_7() const { return ___m_Authenticated_7; }
	inline bool* get_address_of_m_Authenticated_7() { return &___m_Authenticated_7; }
	inline void set_m_Authenticated_7(bool value)
	{
		___m_Authenticated_7 = value;
	}

	inline static int32_t get_offset_of_m_Underage_8() { return static_cast<int32_t>(offsetof(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D, ___m_Underage_8)); }
	inline bool get_m_Underage_8() const { return ___m_Underage_8; }
	inline bool* get_address_of_m_Underage_8() { return &___m_Underage_8; }
	inline void set_m_Underage_8(bool value)
	{
		___m_Underage_8 = value;
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * m_Items[1];

public:
	inline AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * m_Items[1];

public:
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24  m_Items[1];

public:
	inline GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Identifier_0), (void*)NULL);
	}
	inline GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Identifier_0), (void*)NULL);
	}
};
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * m_Items[1];

public:
	inline Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC  m_Items[1];

public:
	inline GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Category_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FormattedValue_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PlayerID_5), (void*)NULL);
		#endif
	}
	inline GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Category_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FormattedValue_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PlayerID_5), (void*)NULL);
		#endif
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * m_Items[1];

public:
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_m16A4091CBC207FB287FEFF608C5F45D9D21106A0_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mD433F22DBB60B94FD45CC2A73C9A22C93B0CB9CB_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m8E491BFB569F645FC9BF4CC8F58F5718C54901E0 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m39931C0B44D8A4948E12527FDE77C9211028267B_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_m864BBAA8D955D724A506E62F6741B52D43F38F9D_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m26C3793203BC368F6A44678FEB4E8B94976DC66F (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m732D2ED47F705384C1A8CA28E40AADE16944CD11 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Achievement_get_lastReportedDate_m0C90E0EB0392E57E70D62D2FB182527613BB285C (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m61C4DA5B9AD3353518524A8E34723CE7836D432E_inline (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mD5FEE2DBF0C88887C99E3EDCD9BC65C32EFBAD4A_inline (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_mF4E46C1A1BBF0087858BE6046604D00DB130E81F (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4901EFA817B61139B1A5284CAF14378A531B7537 (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_m90706792FD9A6FD0BC4975E41E531F91AEC3F33C (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_mCBD1A433E28AC73B7AECBE3E41FFDB6B335031AF (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_m8FDE6EBDC27F05F8D04B53B4F044B5B06F2EDA0A (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86 (GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_SetImage_mB1653A512095EE6A795031B009513071A559C248 (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * __this, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 *, IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_PopulateLocalUser_m06D6DF4CD813CC6AB95B84289871700D99C4EF42 (const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeClearArray_m3A96AB8175D512B8EECD0EB25B80769914D34D07 (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, int32_t ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2 (GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D * __this, UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, int32_t ___number1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeSetUserImage_m346275823D7FDD78D062A4E746AE1C6D2A82F849 (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, int32_t ___number2, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m54CD46805170EDB993E87E0A9FA3BF82A910E489 (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* ___friends0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E (GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3 (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * __this, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 *, IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49 (GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 *, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadFriends_mF485A93E33F5672A6EDDC74B856AD432FBF12803 (RuntimeObject * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mEAC1B8E5722EF1563CE164CE0A2C2EF061A3B65B (U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mAC24FA5902DAAC2873D8C570991B04EC720C74B1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Authenticate_mB8E4AEEB9851A5F0545980B87B72181CFF0B550C (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D (const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_mCAFB7406BCB0A184B405E25695F280DA52EFE582 (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserName_m7C31CCEE889F1F57D3B6670E15B269C341201F8A (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m25580633F0CE2894355406F1F8C86CCEA3E79BBA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserID_m6824E492EA2AB9A62D41799A4B1867E3BD0D2FD2 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_mD1A6F3DEE1C2887A8EDF41444C1D13A2835DF719 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserGameID_mBA46211C39FE80D6AA3861101144FADD41A5D04E (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserGameID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserGameID_mF610AEAED6A05E06A24F1C2DC82EC8BD5CAAB4E0 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetIsUnderage_m7776069236A4DAC99BCFE0920155F901A18B1EC4 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_mA767EE5BC8615E452A6CC57376CA9B9DA601386E (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GameCenterPlatform_GetUserImage_mA57365C677E0CB5B1C1B6B8E20361C9D58DA73C5 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_m756E17B9BFE41D572C76A506E2BDA81A2D7D9605 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievementDescriptions_mEF3BDD5E9E1C4B53A18B2C848D526E695CDB94E4 (RuntimeObject * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_mE347276319A49E97397DEAA0726B6156746CD2D0 (String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievements_mC483E963DB55E8CE904297B7A7D08BA872C8C5F0 (RuntimeObject * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_mAEE46DC335CB58B4B60855A1C0F417D0A2337FB7 (int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_m782C2E75372DB95426C859CA5BE221FFFE9787CF (String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard__ctor_mC6DCBFD1A415763A634A19381C936254D8B2F4E7 (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___board0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0)
inline void List_1_Add_mFBB409A3035BA1C75E9E4982F2E1BE5A1914141F (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * __this, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 *, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Leaderboard_GetUserFilter_m229A294CB0ED73326836FABAC438E517F6517550 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Internal_LoadScores_mDFC3A947F5DC0FC7EF83B6C5B605D93BC959675F (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
inline Enumerator_t0CE4A07F744981B45029535658492977F0C12721  List_1_GetEnumerator_m6D8BF4BBA01F07B5A1439CF1CD3F9264423B1F73 (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0CE4A07F744981B45029535658492977F0C12721  (*) (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
inline GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * Enumerator_get_Current_mCB024BFF593508BA9B77C381B20D0942F0F533AA_inline (Enumerator_t0CE4A07F744981B45029535658492977F0C12721 * __this, const RuntimeMethod* method)
{
	return ((  GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * (*) (Enumerator_t0CE4A07F744981B45029535658492977F0C12721 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Contains_m599B4319BA3FD351DC157B5E23D0489D8186279C (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___board0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Loading_m825936D6AB51CC355DAB8DAAF6177AC4ABBC78B2 (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::MoveNext()
inline bool Enumerator_MoveNext_mCB5492B7D56FAAF15A6463839B9A80DD16DA33B4 (Enumerator_t0CE4A07F744981B45029535658492977F0C12721 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0CE4A07F744981B45029535658492977F0C12721 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Dispose()
inline void Enumerator_Dispose_m4DEA4ABF8AEB43CC9635DAFBD0DBBD013187BD3C (Enumerator_t0CE4A07F744981B45029535658492977F0C12721 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0CE4A07F744981B45029535658492977F0C12721 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_get_localUser_m7E985071FAA0B7393A5B2A056917DF06B41BD0A4 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowAchievementsUI_mC48635E42795B0F70BA5EAC29CDD5F3FEECF80D0 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowLeaderboardUI_m1902CC112F48CC4A35F3E0C170957D48016D8BF5 (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0)
inline void Action_1_Invoke_mE257927B32DAB50508A3C86C95CE80E50F47A280 (Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * __this, IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 *, IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LoadUsers_m59FCA59D1367C1AA3B73768481CAF37DD189B9E6 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mC09955DEF2101303E698FC13E1BBFFA90B3365F4 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m570954380BDC68F860E558D037369D03269C72A4 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_mE9D28FB583D98AA4088C5F343547F0D6417CEFE1 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementBanner_mF87D9C8A302CF0AD0A3111427040B689B5B613BE (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_m1D82E3387839C941131D76AB186E98F48B5043EB (String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
inline void List_1__ctor_m48A6C9D0E3E9E9FA4529980A32F48C3AF5520CD8 (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m0FFFFEA32E380156E1FB4224D50CD0B16707E61C (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m6BFE0E7DB18B35A485855AC3B1C0D4E25AB56C0C (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastReportedDate4, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_m5EA1DE335B7A97FCDE944FBFD2B979D870D3F37A (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Dispose_m54F8C8544A7F65898B6444B3EE11916153C20B6F (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m2DB8C9FB943AD849B23FCEB56D76FAE4E11C2084 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___scores0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetLocalUserScore_m17939BC032AC6FDCC1152234807C50E97A72D600 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, RuntimeObject* ___score0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetMaxRange_m5D699FC22BC5BED04386C4B6D4661663B49FD3B4 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, uint32_t ___maxRange0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_m5FE6EFFE4099E7BA2B7F1F6644B0A9E1C5A93627 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, String_t* ___title0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_mE4F307604F265C0C0EBB3D4F73C69CDDCD0C33EA (RuntimeObject * ___self0, String_t* ___category1, int32_t ___from2, int32_t ___count3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIDs4, int32_t ___playerScope5, int32_t ___timeScope6, RuntimeObject * ___callback7, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_GcLeaderboard_Loading_m75421046282EED69E844C5A137EB4D1322934C1C (intptr_t ___leaderboard0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_GcLeaderboard_Dispose_m45FAF5CB809CC8AA14C925CB11F23D6AD4DF407C (intptr_t ___leaderboard0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m82A71921E766018566AFB09BCE3091C8F1055F39 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___name0, String_t* ___teamId1, String_t* ___gameId2, bool ___friend3, int32_t ___state4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image5, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24 (GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_mC863AFBCE6B992935BCE9E8B567CDA40CCD94B42_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_mD7BBA6A816E8FBFDDC618308BC5D5882297443F8 (Range_t70C133E51417BC822E878050C90A577A69B671DC * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_m29352D47548D750E0E42EC9627C861C69D084444_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, Range_t70C133E51417BC822E878050C90A577A69B671DC  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m66BBCC760CDAF1C44639BD10E4D901EFD7C3F778_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m36122610C955D05BD7FC713415CA78076986B901_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m88494757EDE00B4CA1BE7027A1F84C82E09EC958 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_t70C133E51417BC822E878050C90A577A69B671DC  Leaderboard_get_range_mB9C6C91869423F791E017B71FCDB17A354585519_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m8304E736582482D0E5705C109D95F0CEDF2EE54C_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mE1F4CBEBE4B2E1E6BD245E3BE518680F13BBF276_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mB127337E5455C94299C39FB66C2965FF3421142E (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m7ACC8963AD01FB384D215AF8C215DD93CB5322EA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF93F969F5923A0A3528923E5A452138D00D4E248 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m6BFE0E7DB18B35A485855AC3B1C0D4E25AB56C0C (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastReportedDate4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_m16A4091CBC207FB287FEFF608C5F45D9D21106A0_inline(__this, L_0, /*hidden argument*/NULL);
		double L_1 = ___percentCompleted1;
		Achievement_set_percentCompleted_mD433F22DBB60B94FD45CC2A73C9A22C93B0CB9CB_inline(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___completed2;
		__this->set_m_Completed_0(L_2);
		bool L_3 = ___hidden3;
		__this->set_m_Hidden_1(L_3);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = ___lastReportedDate4;
		__this->set_m_LastReportedDate_2(L_4);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m8E491BFB569F645FC9BF4CC8F58F5718C54901E0 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement__ctor_m8E491BFB569F645FC9BF4CC8F58F5718C54901E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_m16A4091CBC207FB287FEFF608C5F45D9D21106A0_inline(__this, L_0, /*hidden argument*/NULL);
		double L_1 = ___percent1;
		Achievement_set_percentCompleted_mD433F22DBB60B94FD45CC2A73C9A22C93B0CB9CB_inline(__this, L_1, /*hidden argument*/NULL);
		__this->set_m_Hidden_1((bool)0);
		__this->set_m_Completed_0((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		__this->set_m_LastReportedDate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m570954380BDC68F860E558D037369D03269C72A4 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement__ctor_m570954380BDC68F860E558D037369D03269C72A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Achievement__ctor_m8E491BFB569F645FC9BF4CC8F58F5718C54901E0(__this, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_m443278D0F151B7B9BAF041785378EFEAC98E6052 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement_ToString_m443278D0F151B7B9BAF041785378EFEAC98E6052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = Achievement_get_id_m39931C0B44D8A4948E12527FDE77C9211028267B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		double L_5 = Achievement_get_percentCompleted_m864BBAA8D955D724A506E62F6741B52D43F38F9D_inline(__this, /*hidden argument*/NULL);
		double L_6 = L_5;
		RuntimeObject * L_7 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		bool L_10 = Achievement_get_completed_m26C3793203BC368F6A44678FEB4E8B94976DC66F(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		bool L_14 = Achievement_get_hidden_m732D2ED47F705384C1A8CA28E40AADE16944CD11(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_16;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_18 = Achievement_get_lastReportedDate_m0C90E0EB0392E57E70D62D2FB182527613BB285C(__this, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_19 = L_18;
		RuntimeObject * L_20 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_17, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_0077;
	}

IL_0077:
	{
		String_t* L_22 = V_1;
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m39931C0B44D8A4948E12527FDE77C9211028267B (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_id_m16A4091CBC207FB287FEFF608C5F45D9D21106A0 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_m864BBAA8D955D724A506E62F6741B52D43F38F9D (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CpercentCompletedU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mD433F22DBB60B94FD45CC2A73C9A22C93B0CB9CB (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CpercentCompletedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m26C3793203BC368F6A44678FEB4E8B94976DC66F (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Completed_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m732D2ED47F705384C1A8CA28E40AADE16944CD11 (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Achievement_get_lastReportedDate_m0C90E0EB0392E57E70D62D2FB182527613BB285C (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_LastReportedDate_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_m5EA1DE335B7A97FCDE944FBFD2B979D870D3F37A (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		AchievementDescription_set_id_m61C4DA5B9AD3353518524A8E34723CE7836D432E_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		__this->set_m_Title_0(L_1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___image2;
		__this->set_m_Image_1(L_2);
		String_t* L_3 = ___achievedDescription3;
		__this->set_m_AchievedDescription_2(L_3);
		String_t* L_4 = ___unachievedDescription4;
		__this->set_m_UnachievedDescription_3(L_4);
		bool L_5 = ___hidden5;
		__this->set_m_Hidden_4(L_5);
		int32_t L_6 = ___points6;
		__this->set_m_Points_5(L_6);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_ToString_m48909B3814359ED0FAF88F29F3B80C024F0C5D36 (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AchievementDescription_ToString_m48909B3814359ED0FAF88F29F3B80C024F0C5D36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = AchievementDescription_get_id_mD5FEE2DBF0C88887C99E3EDCD9BC65C32EFBAD4A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		String_t* L_5 = AchievementDescription_get_title_mF4E46C1A1BBF0087858BE6046604D00DB130E81F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		String_t* L_8 = AchievementDescription_get_achievedDescription_m4901EFA817B61139B1A5284CAF14378A531B7537(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		String_t* L_11 = AchievementDescription_get_unachievedDescription_m90706792FD9A6FD0BC4975E41E531F91AEC3F33C(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		int32_t L_14 = AchievementDescription_get_points_mCBD1A433E28AC73B7AECBE3E41FFDB6B335031AF(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		bool L_19 = AchievementDescription_get_hidden_m8FDE6EBDC27F05F8D04B53B4F044B5B06F2EDA0A(__this, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_18, /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_22 = V_1;
		return L_22;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_SetImage_mB1653A512095EE6A795031B009513071A559C248 (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___image0;
		__this->set_m_Image_1(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mD5FEE2DBF0C88887C99E3EDCD9BC65C32EFBAD4A (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m61C4DA5B9AD3353518524A8E34723CE7836D432E (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_mF4E46C1A1BBF0087858BE6046604D00DB130E81F (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Title_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4901EFA817B61139B1A5284CAF14378A531B7537 (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_AchievedDescription_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_m90706792FD9A6FD0BC4975E41E531F91AEC3F33C (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UnachievedDescription_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_m8FDE6EBDC27F05F8D04B53B4F044B5B06F2EDA0A (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_mCBD1A433E28AC73B7AECBE3E41FFDB6B335031AF (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Points_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearAchievementDescriptions_mA72C2A90928D81926EF8BCAB66F7150DE0E489CD (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearAchievementDescriptions_mA72C2A90928D81926EF8BCAB66F7150DE0E489CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_1 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_1);
		int32_t L_2 = ___size0;
		G_B3_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___size0;
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_5 = (AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)SZArrayNew(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2_il2cpp_TypeInfo_var, (uint32_t)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_adCache_1(L_5);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetAchievementDescription_mC153A5A1641CD0ACD697FCA5F8AE700E3AC5D556 (GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetAchievementDescription_mC153A5A1641CD0ACD697FCA5F8AE700E3AC5D556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		int32_t L_1 = ___number1;
		AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * L_2 = GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86((GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D *)(&___data0), /*hidden argument*/NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 *)L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetAchievementDescriptionImage_mF30697C06E102BA695C5C0A8F1CA7DF665DA592C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetAchievementDescriptionImage_mF30697C06E102BA695C5C0A8F1CA7DF665DA592C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_0);
		int32_t L_1 = ___number1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number1;
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_4 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		int32_t L_5 = ___number1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___texture0;
		NullCheck(L_7);
		AchievementDescription_SetImage_mB1653A512095EE6A795031B009513071A559C248(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerAchievementDescriptionCallback_m2B6DE7A6A44E667D121C17D2F00EC3126E4F83FE (Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerAchievementDescriptionCallback_m2B6DE7A6A44E667D121C17D2F00EC3126E4F83FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_1 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		G_B3_0 = ((!(((RuntimeObject*)(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_3 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		NullCheck(L_3);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9, /*hidden argument*/NULL);
	}

IL_002c:
	{
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_5 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_6 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_adCache_1();
		V_2 = (IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)L_6;
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_7 = V_2;
		NullCheck(L_5);
		Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F(L_5, L_7, /*hidden argument*/Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_AuthenticateCallbackWrapper_m589656EB520DF6FDBD4A01FEF3C81E01F5AAE2AB (int32_t ___result0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_AuthenticateCallbackWrapper_m589656EB520DF6FDBD4A01FEF3C81E01F5AAE2AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B3_0 = NULL;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * G_B4_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m06D6DF4CD813CC6AB95B84289871700D99C4EF42(/*hidden argument*/NULL);
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_AuthenticateCallback_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_2 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_AuthenticateCallback_0();
		int32_t L_3 = ___result0;
		G_B2_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B3_0 = L_2;
			goto IL_0020;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0021:
	{
		String_t* L_4 = ___error1;
		NullCheck(G_B4_1);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(G_B4_1, (bool)G_B4_0, L_4, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_AuthenticateCallback_0((Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearFriends_m9B33314190B858DB062C30278B9588351B2424BC (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearFriends_m9B33314190B858DB062C30278B9588351B2424BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m3A96AB8175D512B8EECD0EB25B80769914D34D07((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)(((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetFriends_m2C5398BD94DE525FC80494D147F1A66B134511D6 (GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetFriends_m2C5398BD94DE525FC80494D147F1A66B134511D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2((GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D *)(&___data0), (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)(((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetFriendImage_m0345E60955A58236E7FAF8AFEB97609976891A27 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetFriendImage_m0345E60955A58236E7FAF8AFEB97609976891A27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_m346275823D7FDD78D062A4E746AE1C6D2A82F849((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)(((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_address_of_s_friends_2()), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Action`1<System.Boolean>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerFriendsCallbackWrapper_mAAC5526F5A3C56F30959252B475576C305BB7D1B (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, int32_t ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerFriendsCallbackWrapper_mAAC5526F5A3C56F30959252B475576C305BB7D1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* V_1 = NULL;
	bool V_2 = false;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B5_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B6_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_friends_2();
		V_0 = (bool)((!(((RuntimeObject*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_2 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_3 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_friends_2();
		V_1 = (IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E*)L_3;
		IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* L_4 = V_1;
		NullCheck(L_2);
		LocalUser_SetFriends_m54CD46805170EDB993E87E0A9FA3BF82A910E489(L_2, L_4, /*hidden argument*/NULL);
	}

IL_001f:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = ___callback0;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = ___callback0;
		int32_t L_8 = ___result1;
		G_B4_0 = L_7;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			G_B5_0 = L_7;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0030:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B6_1, (bool)G_B6_0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>,UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_AchievementCallbackWrapper_m752E3607DDB87BD4D46C63005991FA059EB34A34 (Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * ___callback0, GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_AchievementCallbackWrapper_m752E3607DDB87BD4D46C63005991FA059EB34A34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* V_5 = NULL;
	{
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7* L_2 = ___result1;
		NullCheck(L_2);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC, /*hidden argument*/NULL);
	}

IL_001e:
	{
		GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7* L_4 = ___result1;
		NullCheck(L_4);
		AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* L_5 = (AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8*)(AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8*)SZArrayNew(AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		V_1 = L_5;
		V_3 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* L_6 = V_1;
		int32_t L_7 = V_3;
		GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7* L_8 = ___result1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * L_10 = GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E((GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 *)L_10);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_12 = V_3;
		GcAchievementDataU5BU5D_tCD72536D71151B9A7D34D91323DC731058903FC7* L_13 = ___result1;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_15 = ___callback0;
		AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* L_16 = V_1;
		V_5 = (IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)L_16;
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_17 = V_5;
		NullCheck(L_15);
		Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3(L_15, L_17, /*hidden argument*/Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
	}

IL_0057:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ProgressCallbackWrapper_m936927D783018BF2401D54CA92F8B968C2E3D2B9 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ProgressCallbackWrapper_m936927D783018BF2401D54CA92F8B968C2E3D2B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback0;
		bool L_3 = ___success1;
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, L_3, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ScoreCallbackWrapper_m7F03AD845F9F4969A3ABCE49518FCBCFEB8D1F6A (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ScoreCallbackWrapper_m7F03AD845F9F4969A3ABCE49518FCBCFEB8D1F6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback0;
		bool L_3 = ___success1;
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, L_3, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IScore[]>,UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ScoreLoaderCallbackWrapper_m8E18C1133A5C05CF4449F9D3FADE430BEBBF0DA1 (Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * ___callback0, GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ScoreLoaderCallbackWrapper_m8E18C1133A5C05CF4449F9D3FADE430BEBBF0DA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* V_4 = NULL;
	{
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* L_2 = ___result1;
		NullCheck(L_2);
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_3 = (ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)SZArrayNew(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_1 = L_3;
		V_2 = 0;
		goto IL_002a;
	}

IL_0017:
	{
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_4 = V_1;
		int32_t L_5 = V_2;
		GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* L_6 = ___result1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_8 = GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49((GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 *)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* L_11 = ___result1;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_13 = ___callback0;
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_14 = V_1;
		V_4 = (IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*)L_14;
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_15 = V_4;
		NullCheck(L_13);
		Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD(L_13, L_15, /*hidden argument*/Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
	}

IL_0041:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m1DFD532E0674BB256884F22C83495D9FFBB66CB0 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, RuntimeObject* ___user0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m1DFD532E0674BB256884F22C83495D9FFBB66CB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_0028;
	}

IL_0021:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_5 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_LoadFriends_mF485A93E33F5672A6EDDC74B856AD432FBF12803(L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m1906287A9BD6679297200FD68303DA2CA9BB4EFB (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, RuntimeObject* ___user0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m1906287A9BD6679297200FD68303DA2CA9BB4EFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * L_0 = (U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_mEAC1B8E5722EF1563CE164CE0A2C2EF061A3B65B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * L_1 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->set_callback_0(L_2);
		RuntimeObject* L_3 = ___user0;
		U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * L_4 = V_0;
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_5 = (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *)il2cpp_codegen_object_new(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3_il2cpp_TypeInfo_var);
		Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m4B82E8613D69236F6B072A688C556241D1CA9E5C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8A8E912B906E34CBFEA15B86B6D30502102DE1D8_RuntimeMethod_var);
		InterfaceActionInvoker2< RuntimeObject*, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>) */, ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var, __this, L_3, L_5);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3ACFDDBE3CD2501B919983BEDF89463CE33572BE (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, RuntimeObject* ___user0, Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m3ACFDDBE3CD2501B919983BEDF89463CE33572BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_0 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_AuthenticateCallback_0(L_0);
		GameCenterPlatform_Authenticate_mB8E4AEEB9851A5F0545980B87B72181CFF0B550C(/*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_get_localUser_m7E985071FAA0B7393A5B2A056917DF06B41BD0A4 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_get_localUser_m7E985071FAA0B7393A5B2A056917DF06B41BD0A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		V_0 = (bool)((((RuntimeObject*)(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_2 = (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D *)il2cpp_codegen_object_new(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D_il2cpp_TypeInfo_var);
		LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_m_LocalUser_5(L_2);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		bool L_3 = GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_4 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		NullCheck(L_4);
		String_t* L_5 = UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m06D6DF4CD813CC6AB95B84289871700D99C4EF42(/*hidden argument*/NULL);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_8 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		V_2 = L_8;
		goto IL_0047;
	}

IL_0047:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_PopulateLocalUser_m06D6DF4CD813CC6AB95B84289871700D99C4EF42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_PopulateLocalUser_m06D6DF4CD813CC6AB95B84289871700D99C4EF42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		bool L_1 = GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D(/*hidden argument*/NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_mCAFB7406BCB0A184B405E25695F280DA52EFE582(L_0, L_1, /*hidden argument*/NULL);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_2 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_3 = GameCenterPlatform_Internal_UserName_m7C31CCEE889F1F57D3B6670E15B269C341201F8A(/*hidden argument*/NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m25580633F0CE2894355406F1F8C86CCEA3E79BBA(L_2, L_3, /*hidden argument*/NULL);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_4 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_5 = GameCenterPlatform_Internal_UserID_m6824E492EA2AB9A62D41799A4B1867E3BD0D2FD2(/*hidden argument*/NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_mD1A6F3DEE1C2887A8EDF41444C1D13A2835DF719(L_4, L_5, /*hidden argument*/NULL);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_6 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		String_t* L_7 = GameCenterPlatform_Internal_UserGameID_mBA46211C39FE80D6AA3861101144FADD41A5D04E(/*hidden argument*/NULL);
		NullCheck(L_6);
		UserProfile_SetUserGameID_mF610AEAED6A05E06A24F1C2DC82EC8BD5CAAB4E0(L_6, L_7, /*hidden argument*/NULL);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_8 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		bool L_9 = GameCenterPlatform_GetIsUnderage_m7776069236A4DAC99BCFE0920155F901A18B1EC4(/*hidden argument*/NULL);
		NullCheck(L_8);
		LocalUser_SetUnderage_mA767EE5BC8615E452A6CC57376CA9B9DA601386E(L_8, L_9, /*hidden argument*/NULL);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_10 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_LocalUser_5();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = GameCenterPlatform_GetUserImage_mA57365C677E0CB5B1C1B6B8E20361C9D58DA73C5(/*hidden argument*/NULL);
		NullCheck(L_10);
		UserProfile_SetImage_m756E17B9BFE41D572C76A506E2BDA81A2D7D9605(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadAchievementDescriptions_m72A5167A9328B903358163FC83A800B9FCEB9AD6 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadAchievementDescriptions_m72A5167A9328B903358163FC83A800B9FCEB9AD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* V_2 = NULL;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_2 = ___callback0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_4 = ___callback0;
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_5 = (AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)SZArrayNew(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1*)L_5;
		IAchievementDescriptionU5BU5D_t3F1FEF5DBD0B433C8587E7A2BDD2EBCBC94E41E1* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F(L_4, L_6, /*hidden argument*/Action_1_Invoke_m7C6C3C5F1764D999D845DB6F0D77A136F423A36F_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_002f;
	}

IL_0028:
	{
		Action_1_t6BE44411481D525A2A8991ACF188CB12B5635480 * L_7 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadAchievementDescriptions_mEF3BDD5E9E1C4B53A18B2C848D526E695CDB94E4(L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ReportProgress_mD284779838DA024C5CA4EC40D1B2ECA25569D5C0 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, String_t* ___id0, double ___progress1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ReportProgress_mD284779838DA024C5CA4EC40D1B2ECA25569D5C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback2;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___callback2;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0021:
	{
		String_t* L_5 = ___id0;
		double L_6 = ___progress1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalReportProgress_mE347276319A49E97397DEAA0726B6156746CD2D0(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadAchievements_m63737CE0EF90F20A31DD1F43EE3D39D79836DF7F (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadAchievements_m63737CE0EF90F20A31DD1F43EE3D39D79836DF7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* V_2 = NULL;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_2 = ___callback0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_4 = ___callback0;
		AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* L_5 = (AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8*)(AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8*)SZArrayNew(AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226*)L_5;
		IAchievementU5BU5D_t40C1DF79365C403864C689D07CF1857A20C62226* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3(L_4, L_6, /*hidden argument*/Action_1_Invoke_mDF86C44E0ADACB34B3B7C5D612D877175F036EF3_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_002f;
	}

IL_0028:
	{
		Action_1_t7570552C35A220ADB9666809E4D57E4C10713634 * L_7 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadAchievements_mC483E963DB55E8CE904297B7A7D08BA872C8C5F0(L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ReportScore_m2ACB935864BC415729EF552832518FA3FF890171 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, int64_t ___score0, String_t* ___board1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ReportScore_m2ACB935864BC415729EF552832518FA3FF890171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback2;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___callback2;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0021:
	{
		int64_t L_5 = ___score0;
		String_t* L_6 = ___board1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = ___callback2;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalReportScore_mAEE46DC335CB58B4B60855A1C0F417D0A2337FB7(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadScores_mC191ABA1B69A13CC88A44AF25BD89E1D289CBF52 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, String_t* ___category0, Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadScores_mC191ABA1B69A13CC88A44AF25BD89E1D289CBF52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* V_2 = NULL;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_2 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_4 = ___callback1;
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_5 = (ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)SZArrayNew(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*)L_5;
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD(L_4, L_6, /*hidden argument*/Action_1_Invoke_mA7A2177CF5EA8FD4A1BB48004EFF7FD908B6ECDD_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_0030;
	}

IL_0028:
	{
		String_t* L_7 = ___category0;
		Action_1_tB92B5B1B4250DFE4170303183808B95C5495CB10 * L_8 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadScores_m782C2E75372DB95426C859CA5BE221FFFE9787CF(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadScores_m54BF2C6FAB4A19BC80B168F3BB985BDBAFA96A1B (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, RuntimeObject* ___board0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadScores_m54BF2C6FAB4A19BC80B168F3BB985BDBAFA96A1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * V_0 = NULL;
	GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback1;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_4 = ___callback1;
		NullCheck(L_4);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_4, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0021:
	{
		goto IL_0082;
	}

IL_0023:
	{
		RuntimeObject* L_5 = ___board0;
		V_0 = ((Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)CastclassClass((RuntimeObject*)L_5, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var));
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_6 = V_0;
		GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * L_7 = (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 *)il2cpp_codegen_object_new(GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_mC6DCBFD1A415763A634A19381C936254D8B2F4E7(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * L_8 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_GcBoards_6();
		GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * L_9 = V_1;
		NullCheck(L_8);
		List_1_Add_mFBB409A3035BA1C75E9E4982F2E1BE5A1914141F(L_8, L_9, /*hidden argument*/List_1_Add_mFBB409A3035BA1C75E9E4982F2E1BE5A1914141F_RuntimeMethod_var);
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = Leaderboard_GetUserFilter_m229A294CB0ED73326836FABAC438E517F6517550(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_2;
		NullCheck(L_12);
		V_5 = (bool)((((int32_t)(((RuntimeArray*)L_12)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		V_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}

IL_0051:
	{
		GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * L_14 = V_1;
		RuntimeObject* L_15 = ___board0;
		NullCheck(L_15);
		String_t* L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B_il2cpp_TypeInfo_var, L_15);
		RuntimeObject* L_17 = ___board0;
		NullCheck(L_17);
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_18 = InterfaceFuncInvoker0< Range_t70C133E51417BC822E878050C90A577A69B671DC  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B_il2cpp_TypeInfo_var, L_17);
		int32_t L_19 = L_18.get_from_0();
		RuntimeObject* L_20 = ___board0;
		NullCheck(L_20);
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_21 = InterfaceFuncInvoker0< Range_t70C133E51417BC822E878050C90A577A69B671DC  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B_il2cpp_TypeInfo_var, L_20);
		int32_t L_22 = L_21.get_count_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = V_2;
		RuntimeObject* L_24 = ___board0;
		NullCheck(L_24);
		int32_t L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B_il2cpp_TypeInfo_var, L_24);
		RuntimeObject* L_26 = ___board0;
		NullCheck(L_26);
		int32_t L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B_il2cpp_TypeInfo_var, L_26);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_28 = ___callback1;
		NullCheck(L_14);
		GcLeaderboard_Internal_LoadScores_mDFC3A947F5DC0FC7EF83B6C5B605D93BC959675F(L_14, L_16, L_19, L_22, L_23, L_25, L_27, L_28, /*hidden argument*/NULL);
	}

IL_0082:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LeaderboardCallbackWrapper_m1D0797D04EBCFC94424E7033C9E02D3DA4A8A4B1 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LeaderboardCallbackWrapper_m1D0797D04EBCFC94424E7033C9E02D3DA4A8A4B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ___callback0;
		bool L_3 = ___success1;
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, L_3, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetLoading_m06F9588A6143126F03D9C0AAEAA853EC1C9FC3C1 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_GetLoading_m06F9588A6143126F03D9C0AAEAA853EC1C9FC3C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t0CE4A07F744981B45029535658492977F0C12721  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * L_2 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_m_GcBoards_6();
		NullCheck(L_2);
		Enumerator_t0CE4A07F744981B45029535658492977F0C12721  L_3 = List_1_GetEnumerator_m6D8BF4BBA01F07B5A1439CF1CD3F9264423B1F73(L_2, /*hidden argument*/List_1_GetEnumerator_m6D8BF4BBA01F07B5A1439CF1CD3F9264423B1F73_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0020:
		{
			GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * L_4 = Enumerator_get_Current_mCB024BFF593508BA9B77C381B20D0942F0F533AA_inline((Enumerator_t0CE4A07F744981B45029535658492977F0C12721 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mCB024BFF593508BA9B77C381B20D0942F0F533AA_RuntimeMethod_var);
			V_3 = L_4;
			GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * L_5 = V_3;
			RuntimeObject* L_6 = ___board0;
			NullCheck(L_5);
			bool L_7 = GcLeaderboard_Contains_m599B4319BA3FD351DC157B5E23D0489D8186279C(L_5, ((Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)CastclassClass((RuntimeObject*)L_6, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_4 = L_7;
			bool L_8 = V_4;
			if (!L_8)
			{
				goto IL_0044;
			}
		}

IL_003b:
		{
			GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * L_9 = V_3;
			NullCheck(L_9);
			bool L_10 = GcLeaderboard_Loading_m825936D6AB51CC355DAB8DAAF6177AC4ABBC78B2(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			IL2CPP_LEAVE(0x63, FINALLY_0050);
		}

IL_0044:
		{
		}

IL_0045:
		{
			bool L_11 = Enumerator_MoveNext_mCB5492B7D56FAAF15A6463839B9A80DD16DA33B4((Enumerator_t0CE4A07F744981B45029535658492977F0C12721 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCB5492B7D56FAAF15A6463839B9A80DD16DA33B4_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0020;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4DEA4ABF8AEB43CC9635DAFBD0DBBD013187BD3C((Enumerator_t0CE4A07F744981B45029535658492977F0C12721 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4DEA4ABF8AEB43CC9635DAFBD0DBBD013187BD3C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005f:
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0063:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = GameCenterPlatform_get_localUser_m7E985071FAA0B7393A5B2A056917DF06B41BD0A4(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_0023:
	{
		V_1 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowAchievementsUI_m425068FBB95E73A5E2C34A8045394F9583F27728 (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowAchievementsUI_m425068FBB95E73A5E2C34A8045394F9583F27728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_mC48635E42795B0F70BA5EAC29CDD5F3FEECF80D0(/*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowLeaderboardUI_m25410C4C825818ABC415F3231AFD4C0B3D80100C (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowLeaderboardUI_m25410C4C825818ABC415F3231AFD4C0B3D80100C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m1902CC112F48CC4A35F3E0C170957D48016D8BF5(/*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearUsers_m242535F1ED28589D2C91D12CB1FB3330BBE116A1 (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ClearUsers_m242535F1ED28589D2C91D12CB1FB3330BBE116A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m3A96AB8175D512B8EECD0EB25B80769914D34D07((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)(((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetUser_m67E0DEED2E11D8B4E1EFFB03AB95573F1418903C (GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetUser_m67E0DEED2E11D8B4E1EFFB03AB95573F1418903C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2((GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D *)(&___data0), (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)(((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetUserImage_m36FDEC3247298B1308E85BA4BFD1F8AAAD0E9E7E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SetUserImage_m36FDEC3247298B1308E85BA4BFD1F8AAAD0E9E7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_m346275823D7FDD78D062A4E746AE1C6D2A82F849((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)(((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_address_of_s_users_3()), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerUsersCallbackWrapper_mBF798F547F7094681E0B5B5FFEEE221DD7E4CC33 (Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerUsersCallbackWrapper_mBF798F547F7094681E0B5B5FFEEE221DD7E4CC33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* V_1 = NULL;
	{
		Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * L_2 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_3 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_users_3();
		V_1 = (IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E*)L_3;
		IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* L_4 = V_1;
		NullCheck(L_2);
		Action_1_Invoke_mE257927B32DAB50508A3C86C95CE80E50F47A280(L_2, L_4, /*hidden argument*/Action_1_Invoke_mE257927B32DAB50508A3C86C95CE80E50F47A280_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadUsers_m10FB18D65C6C997E1AB6F0BEB27891B0C1A4923C (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIds0, Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_LoadUsers_m10FB18D65C6C997E1AB6F0BEB27891B0C1A4923C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* V_2 = NULL;
	{
		bool L_0 = GameCenterPlatform_VerifyAuthentication_m9605DB240711AB73F461074D8B93F195E894554E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * L_2 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * L_4 = ___callback1;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_5 = (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)SZArrayNew(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E*)L_5;
		IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_mE257927B32DAB50508A3C86C95CE80E50F47A280(L_4, L_6, /*hidden argument*/Action_1_Invoke_mE257927B32DAB50508A3C86C95CE80E50F47A280_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_0030;
	}

IL_0028:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = ___userIds0;
		Action_1_t295B6E5FCC205AD4256A39EF521A1D2B51F4F371 * L_8 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadUsers_m59FCA59D1367C1AA3B73768481CAF37DD189B9E6(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeSetUserImage_m346275823D7FDD78D062A4E746AE1C6D2A82F849 (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, int32_t ___number2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SafeSetUserImage_m346275823D7FDD78D062A4E746AE1C6D2A82F849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_0 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_1 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___number2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) <= ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___number2;
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_5, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture1 = L_5;
	}

IL_002b:
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_6 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_7 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_6);
		NullCheck(L_7);
		int32_t L_8 = ___number2;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) <= ((int32_t)L_8)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = ___number2;
		G_B8_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B8_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_11 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_12 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_11);
		int32_t L_13 = ___number2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___texture1;
		NullCheck(L_15);
		UserProfile_SetImage_m756E17B9BFE41D572C76A506E2BDA81A2D7D9605(L_15, L_16, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBBFFE2B018FE9C481B67387513F728E577370086, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeClearArray_m3A96AB8175D512B8EECD0EB25B80769914D34D07 (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_SafeClearArray_m3A96AB8175D512B8EECD0EB25B80769914D34D07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_0 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_1 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_2 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_3 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_2);
		NullCheck(L_3);
		int32_t L_4 = ___size1;
		G_B3_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_6 = ___array0;
		int32_t L_7 = ___size1;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_8 = (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)SZArrayNew(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var, (uint32_t)L_7);
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_8);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_CreateLeaderboard_mC2B336F8C9569B3FD7059ED7861B208DD44B0EAB (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_CreateLeaderboard_mC2B336F8C9569B3FD7059ED7861B208DD44B0EAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)il2cpp_codegen_object_new(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var);
		Leaderboard__ctor_mC09955DEF2101303E698FC13E1BBFFA90B3365F4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_CreateAchievement_mC8BE646E6BB63CCF284C62FABEE712BF7590DB1A (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_CreateAchievement_mC8BE646E6BB63CCF284C62FABEE712BF7590DB1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * L_0 = (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 *)il2cpp_codegen_object_new(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565_il2cpp_TypeInfo_var);
		Achievement__ctor_m570954380BDC68F860E558D037369D03269C72A4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerResetAchievementCallback_m2E643A3EF41033D83DB9C85BE1090B88735209B4 (bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_TriggerResetAchievementCallback_m2E643A3EF41033D83DB9C85BE1090B88735209B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_ResetAchievements_4();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = ((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->get_s_ResetAchievements_4();
		bool L_3 = ___result0;
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, L_3, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Authenticate_mB8E4AEEB9851A5F0545980B87B72181CFF0B550C (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Authenticate_mB8E4AEEB9851A5F0545980B87B72181CFF0B550C_ftn) ();
	static GameCenterPlatform_Authenticate_mB8E4AEEB9851A5F0545980B87B72181CFF0B550C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Authenticate_mB8E4AEEB9851A5F0545980B87B72181CFF0B550C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D (const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D_ftn) ();
	static GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetAuthenticated_m8A876D69350A2F69A65D25DBE9A4FDAB04C51C4D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserName_m7C31CCEE889F1F57D3B6670E15B269C341201F8A (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m7C31CCEE889F1F57D3B6670E15B269C341201F8A_ftn) ();
	static GameCenterPlatform_Internal_UserName_m7C31CCEE889F1F57D3B6670E15B269C341201F8A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m7C31CCEE889F1F57D3B6670E15B269C341201F8A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserID_m6824E492EA2AB9A62D41799A4B1867E3BD0D2FD2 (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_m6824E492EA2AB9A62D41799A4B1867E3BD0D2FD2_ftn) ();
	static GameCenterPlatform_Internal_UserID_m6824E492EA2AB9A62D41799A4B1867E3BD0D2FD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_m6824E492EA2AB9A62D41799A4B1867E3BD0D2FD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserGameID_mBA46211C39FE80D6AA3861101144FADD41A5D04E (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserGameID_mBA46211C39FE80D6AA3861101144FADD41A5D04E_ftn) ();
	static GameCenterPlatform_Internal_UserGameID_mBA46211C39FE80D6AA3861101144FADD41A5D04E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserGameID_mBA46211C39FE80D6AA3861101144FADD41A5D04E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetIsUnderage_m7776069236A4DAC99BCFE0920155F901A18B1EC4 (const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_GetIsUnderage_m7776069236A4DAC99BCFE0920155F901A18B1EC4_ftn) ();
	static GameCenterPlatform_GetIsUnderage_m7776069236A4DAC99BCFE0920155F901A18B1EC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetIsUnderage_m7776069236A4DAC99BCFE0920155F901A18B1EC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GameCenterPlatform_GetUserImage_mA57365C677E0CB5B1C1B6B8E20361C9D58DA73C5 (const RuntimeMethod* method)
{
	typedef Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * (*GameCenterPlatform_GetUserImage_mA57365C677E0CB5B1C1B6B8E20361C9D58DA73C5_ftn) ();
	static GameCenterPlatform_GetUserImage_mA57365C677E0CB5B1C1B6B8E20361C9D58DA73C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetUserImage_mA57365C677E0CB5B1C1B6B8E20361C9D58DA73C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()");
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadFriends_mF485A93E33F5672A6EDDC74B856AD432FBF12803 (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_LoadFriends_mF485A93E33F5672A6EDDC74B856AD432FBF12803_ftn) (RuntimeObject *);
	static GameCenterPlatform_LoadFriends_mF485A93E33F5672A6EDDC74B856AD432FBF12803_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_LoadFriends_mF485A93E33F5672A6EDDC74B856AD432FBF12803_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievementDescriptions_mEF3BDD5E9E1C4B53A18B2C848D526E695CDB94E4 (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalLoadAchievementDescriptions_mEF3BDD5E9E1C4B53A18B2C848D526E695CDB94E4_ftn) (RuntimeObject *);
	static GameCenterPlatform_InternalLoadAchievementDescriptions_mEF3BDD5E9E1C4B53A18B2C848D526E695CDB94E4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadAchievementDescriptions_mEF3BDD5E9E1C4B53A18B2C848D526E695CDB94E4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievements_mC483E963DB55E8CE904297B7A7D08BA872C8C5F0 (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalLoadAchievements_mC483E963DB55E8CE904297B7A7D08BA872C8C5F0_ftn) (RuntimeObject *);
	static GameCenterPlatform_InternalLoadAchievements_mC483E963DB55E8CE904297B7A7D08BA872C8C5F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadAchievements_mC483E963DB55E8CE904297B7A7D08BA872C8C5F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_mE347276319A49E97397DEAA0726B6156746CD2D0 (String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalReportProgress_mE347276319A49E97397DEAA0726B6156746CD2D0_ftn) (String_t*, double, RuntimeObject *);
	static GameCenterPlatform_InternalReportProgress_mE347276319A49E97397DEAA0726B6156746CD2D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalReportProgress_mE347276319A49E97397DEAA0726B6156746CD2D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)");
	_il2cpp_icall_func(___id0, ___progress1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_mAEE46DC335CB58B4B60855A1C0F417D0A2337FB7 (int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalReportScore_mAEE46DC335CB58B4B60855A1C0F417D0A2337FB7_ftn) (int64_t, String_t*, RuntimeObject *);
	static GameCenterPlatform_InternalReportScore_mAEE46DC335CB58B4B60855A1C0F417D0A2337FB7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalReportScore_mAEE46DC335CB58B4B60855A1C0F417D0A2337FB7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)");
	_il2cpp_icall_func(___score0, ___category1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_m782C2E75372DB95426C859CA5BE221FFFE9787CF (String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalLoadScores_m782C2E75372DB95426C859CA5BE221FFFE9787CF_ftn) (String_t*, RuntimeObject *);
	static GameCenterPlatform_InternalLoadScores_m782C2E75372DB95426C859CA5BE221FFFE9787CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadScores_m782C2E75372DB95426C859CA5BE221FFFE9787CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)");
	_il2cpp_icall_func(___category0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowAchievementsUI_mC48635E42795B0F70BA5EAC29CDD5F3FEECF80D0 (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_mC48635E42795B0F70BA5EAC29CDD5F3FEECF80D0_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_mC48635E42795B0F70BA5EAC29CDD5F3FEECF80D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_mC48635E42795B0F70BA5EAC29CDD5F3FEECF80D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowLeaderboardUI_m1902CC112F48CC4A35F3E0C170957D48016D8BF5 (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m1902CC112F48CC4A35F3E0C170957D48016D8BF5_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m1902CC112F48CC4A35F3E0C170957D48016D8BF5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m1902CC112F48CC4A35F3E0C170957D48016D8BF5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LoadUsers_m59FCA59D1367C1AA3B73768481CAF37DD189B9E6 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m59FCA59D1367C1AA3B73768481CAF37DD189B9E6_ftn) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, RuntimeObject *);
	static GameCenterPlatform_Internal_LoadUsers_m59FCA59D1367C1AA3B73768481CAF37DD189B9E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m59FCA59D1367C1AA3B73768481CAF37DD189B9E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)");
	_il2cpp_icall_func(___userIds0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_mE9D28FB583D98AA4088C5F343547F0D6417CEFE1 (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_ResetAllAchievements_mE9D28FB583D98AA4088C5F343547F0D6417CEFE1_ftn) ();
	static GameCenterPlatform_ResetAllAchievements_mE9D28FB583D98AA4088C5F343547F0D6417CEFE1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ResetAllAchievements_mE9D28FB583D98AA4088C5F343547F0D6417CEFE1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementBanner_mF87D9C8A302CF0AD0A3111427040B689B5B613BE (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_ShowDefaultAchievementBanner_mF87D9C8A302CF0AD0A3111427040B689B5B613BE_ftn) (bool);
	static GameCenterPlatform_ShowDefaultAchievementBanner_mF87D9C8A302CF0AD0A3111427040B689B5B613BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ShowDefaultAchievementBanner_mF87D9C8A302CF0AD0A3111427040B689B5B613BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_m0D1E0F3E02F0F8F11B2BC6259032DACD60C95E93 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ResetAllAchievements_m0D1E0F3E02F0F8F11B2BC6259032DACD60C95E93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_ResetAchievements_4(L_0);
		GameCenterPlatform_ResetAllAchievements_mE9D28FB583D98AA4088C5F343547F0D6417CEFE1(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_mF2DF755184E4F2608334418643FD5FB1767B2825 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowDefaultAchievementCompletionBanner_mF2DF755184E4F2608334418643FD5FB1767B2825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementBanner_mF87D9C8A302CF0AD0A3111427040B689B5B613BE(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowLeaderboardUI_m22ADB2F97963833741FE633EE2D9B332077A3458 (String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform_ShowLeaderboardUI_m22ADB2F97963833741FE633EE2D9B332077A3458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int32_t L_1 = ___timeScope1;
		IL2CPP_RUNTIME_CLASS_INIT(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowSpecificLeaderboardUI_m1D82E3387839C941131D76AB186E98F48B5043EB(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_m1D82E3387839C941131D76AB186E98F48B5043EB (String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_ShowSpecificLeaderboardUI_m1D82E3387839C941131D76AB186E98F48B5043EB_ftn) (String_t*, int32_t);
	static GameCenterPlatform_ShowSpecificLeaderboardUI_m1D82E3387839C941131D76AB186E98F48B5043EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ShowSpecificLeaderboardUI_m1D82E3387839C941131D76AB186E98F48B5043EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID0, ___timeScope1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform__ctor_m12106EF272A85BC20F2CA464C0A92DF42CAB375A (GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform__cctor_mE88589D1A6F81068B6E9E2E837C61535E74B4D72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameCenterPlatform__cctor_mE88589D1A6F81068B6E9E2E837C61535E74B4D72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* L_0 = (AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2*)SZArrayNew(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_adCache_1(L_0);
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_1 = (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)SZArrayNew(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_friends_2(L_1);
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_2 = (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)SZArrayNew(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_s_users_3(L_2);
		List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 * L_3 = (List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400 *)il2cpp_codegen_object_new(List_1_t627B55426F2D664F47826CDA6CB351B3B8D8F400_il2cpp_TypeInfo_var);
		List_1__ctor_m48A6C9D0E3E9E9FA4529980A32F48C3AF5520CD8(L_3, /*hidden argument*/List_1__ctor_m48A6C9D0E3E9E9FA4529980A32F48C3AF5520CD8_RuntimeMethod_var);
		((GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_t358F709563A6FC9DFBF500151EDAEC05EBBA6F72_il2cpp_TypeInfo_var))->set_m_GcBoards_6(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke(const GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24& unmarshaled, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Identifier_0());
	marshaled.___m_PercentCompleted_1 = unmarshaled.get_m_PercentCompleted_1();
	marshaled.___m_Completed_2 = unmarshaled.get_m_Completed_2();
	marshaled.___m_Hidden_3 = unmarshaled.get_m_Hidden_3();
	marshaled.___m_LastReportedDate_4 = unmarshaled.get_m_LastReportedDate_4();
}
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke_back(const GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_pinvoke& marshaled, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24& unmarshaled)
{
	unmarshaled.set_m_Identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.set_m_PercentCompleted_1(unmarshaled_m_PercentCompleted_temp_1);
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.set_m_Completed_2(unmarshaled_m_Completed_temp_2);
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.set_m_Hidden_3(unmarshaled_m_Hidden_temp_3);
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.set_m_LastReportedDate_4(unmarshaled_m_LastReportedDate_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_pinvoke_cleanup(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_com(const GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24& unmarshaled, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_com& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Identifier_0());
	marshaled.___m_PercentCompleted_1 = unmarshaled.get_m_PercentCompleted_1();
	marshaled.___m_Completed_2 = unmarshaled.get_m_Completed_2();
	marshaled.___m_Hidden_3 = unmarshaled.get_m_Hidden_3();
	marshaled.___m_LastReportedDate_4 = unmarshaled.get_m_LastReportedDate_4();
}
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_com_back(const GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_com& marshaled, GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24& unmarshaled)
{
	unmarshaled.set_m_Identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.set_m_PercentCompleted_1(unmarshaled_m_PercentCompleted_temp_1);
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.set_m_Completed_2(unmarshaled_m_Completed_temp_2);
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.set_m_Hidden_3(unmarshaled_m_Hidden_temp_3);
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.set_m_LastReportedDate_4(unmarshaled_m_LastReportedDate_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshal_com_cleanup(GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E (GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * V_1 = NULL;
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = NULL;
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = NULL;
	{
		String_t* L_0 = __this->get_m_Identifier_0();
		double L_1 = __this->get_m_PercentCompleted_1();
		int32_t L_2 = __this->get_m_Completed_2();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		int32_t L_3 = __this->get_m_Hidden_3();
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (!L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0025:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_m0FFFFEA32E380156E1FB4224D50CD0B16707E61C((&L_4), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_m_LastReportedDate_4();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6 = DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), (((double)((double)L_5))), /*hidden argument*/NULL);
		Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * L_7 = (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 *)il2cpp_codegen_object_new(Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565_il2cpp_TypeInfo_var);
		Achievement__ctor_m6BFE0E7DB18B35A485855AC3B1C0D4E25AB56C0C(L_7, G_B6_3, G_B6_2, (bool)G_B6_1, (bool)G_B6_0, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_004c;
	}

IL_004c:
	{
		Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 * _thisAdjusted = reinterpret_cast<GcAchievementData_t5391FC501EEDA04D3C45DB4213CAE82CA9ED9C24 *>(__this + _offset);
	return GcAchievementData_ToAchievement_mA3EFDC224A485DA99E1ED1CC90DEEB2CB68B539E(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke(const GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D& unmarshaled, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke_back(const GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_pinvoke& marshaled, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D& unmarshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_pinvoke_cleanup(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_com(const GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D& unmarshaled, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_com_back(const GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_com& marshaled, GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D& unmarshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshal_com_cleanup(GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86 (GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	{
		String_t* L_0 = __this->get_m_Identifier_0();
		String_t* L_1 = __this->get_m_Title_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = __this->get_m_Image_2();
		String_t* L_3 = __this->get_m_AchievedDescription_3();
		String_t* L_4 = __this->get_m_UnachievedDescription_4();
		int32_t L_5 = __this->get_m_Hidden_5();
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (!L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002b:
	{
		int32_t L_6 = __this->get_m_Points_6();
		AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * L_7 = (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 *)il2cpp_codegen_object_new(AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m5EA1DE335B7A97FCDE944FBFD2B979D870D3F37A(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0039;
	}

IL_0039:
	{
		AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D * _thisAdjusted = reinterpret_cast<GcAchievementDescriptionData_tA9C8FD052A0FAD05F5C290DEC026DDF07E81AF9D *>(__this + _offset);
	return GcAchievementDescriptionData_ToAchievementDescription_m9942E64237B72699916331A3EED62FC8E0DB8B86(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke(const GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72& unmarshaled, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke_back(const GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_pinvoke& marshaled, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72& unmarshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_pinvoke_cleanup(GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_com(const GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72& unmarshaled, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_com& marshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_com_back(const GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_com& marshaled, GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72& unmarshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshal_com_cleanup(GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard__ctor_mC6DCBFD1A415763A634A19381C936254D8B2F4E7 (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___board0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = ___board0;
		__this->set_m_GenericLeaderboard_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Finalize_m0DA6F9152780D5EFC4EE884E5CAA6A469CE81E2A (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		GcLeaderboard_Dispose_m54F8C8544A7F65898B6444B3EE11916153C20B6F(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Contains_m599B4319BA3FD351DC157B5E23D0489D8186279C (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___board0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = __this->get_m_GenericLeaderboard_1();
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_1 = ___board0;
		V_0 = (bool)((((RuntimeObject*)(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)L_0) == ((RuntimeObject*)(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)L_1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetScores_m0FE1B289E42EAF2415193FFA1BEAE3FE38AA6B4B (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* ___scoreDatas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcLeaderboard_SetScores_m0FE1B289E42EAF2415193FFA1BEAE3FE38AA6B4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* V_4 = NULL;
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = __this->get_m_GenericLeaderboard_1();
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* L_2 = ___scoreDatas0;
		NullCheck(L_2);
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_3 = (ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)SZArrayNew(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_1 = L_3;
		V_2 = 0;
		goto IL_002f;
	}

IL_001c:
	{
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_4 = V_1;
		int32_t L_5 = V_2;
		GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* L_6 = ___scoreDatas0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_8 = GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49((GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 *)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_2;
		GcScoreDataU5BU5D_t23A52711105AEEB9D50CE62EE09DD06826C3DD1D* L_11 = ___scoreDatas0;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_001c;
		}
	}
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_13 = __this->get_m_GenericLeaderboard_1();
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_14 = V_1;
		V_4 = (IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*)L_14;
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_15 = V_4;
		NullCheck(L_13);
		Leaderboard_SetScores_m2DB8C9FB943AD849B23FCEB56D76FAE4E11C2084(L_13, L_15, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetLocalScore_mB3EB59503BACFA37E9F112DB5E1906174C67AF32 (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC  ___scoreData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = __this->get_m_GenericLeaderboard_1();
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_2 = __this->get_m_GenericLeaderboard_1();
		Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_3 = GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49((GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC *)(&___scoreData0), /*hidden argument*/NULL);
		NullCheck(L_2);
		Leaderboard_SetLocalUserScore_m17939BC032AC6FDCC1152234807C50E97A72D600(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetMaxRange_m9926B80DD3377EF7798718F0FD57587DADE4DC31 (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = __this->get_m_GenericLeaderboard_1();
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_2 = __this->get_m_GenericLeaderboard_1();
		uint32_t L_3 = ___maxRange0;
		NullCheck(L_2);
		Leaderboard_SetMaxRange_m5D699FC22BC5BED04386C4B6D4661663B49FD3B4(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetTitle_m964511DCF53C69F7208CDC1DFD68885E2BCECF2A (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_0 = __this->get_m_GenericLeaderboard_1();
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_2 = __this->get_m_GenericLeaderboard_1();
		String_t* L_3 = ___title0;
		NullCheck(L_2);
		Leaderboard_SetTitle_m5FE6EFFE4099E7BA2B7F1F6644B0A9E1C5A93627(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Internal_LoadScores_mDFC3A947F5DC0FC7EF83B6C5B605D93BC959675F (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___category0;
		int32_t L_1 = ___from1;
		int32_t L_2 = ___count2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___userIDs3;
		int32_t L_4 = ___playerScope4;
		int32_t L_5 = ___timeScope5;
		RuntimeObject * L_6 = ___callback6;
		intptr_t L_7 = GcLeaderboard_GcLeaderboard_LoadScores_mE4F307604F265C0C0EBB3D4F73C69CDDCD0C33EA(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_m_InternalLeaderboard_0((intptr_t)L_7);
		return;
	}
}
// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_mE4F307604F265C0C0EBB3D4F73C69CDDCD0C33EA (RuntimeObject * ___self0, String_t* ___category1, int32_t ___from2, int32_t ___count3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___userIDs4, int32_t ___playerScope5, int32_t ___timeScope6, RuntimeObject * ___callback7, const RuntimeMethod* method)
{
	typedef intptr_t (*GcLeaderboard_GcLeaderboard_LoadScores_mE4F307604F265C0C0EBB3D4F73C69CDDCD0C33EA_ftn) (RuntimeObject *, String_t*, int32_t, int32_t, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, int32_t, int32_t, RuntimeObject *);
	static GcLeaderboard_GcLeaderboard_LoadScores_mE4F307604F265C0C0EBB3D4F73C69CDDCD0C33EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_LoadScores_mE4F307604F265C0C0EBB3D4F73C69CDDCD0C33EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)");
	intptr_t retVal = _il2cpp_icall_func(___self0, ___category1, ___from2, ___count3, ___userIDs4, ___playerScope5, ___timeScope6, ___callback7);
	return retVal;
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Loading_m825936D6AB51CC355DAB8DAAF6177AC4ABBC78B2 (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_InternalLeaderboard_0();
		bool L_1 = GcLeaderboard_GcLeaderboard_Loading_m75421046282EED69E844C5A137EB4D1322934C1C((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_GcLeaderboard_Loading_m75421046282EED69E844C5A137EB4D1322934C1C (intptr_t ___leaderboard0, const RuntimeMethod* method)
{
	typedef bool (*GcLeaderboard_GcLeaderboard_Loading_m75421046282EED69E844C5A137EB4D1322934C1C_ftn) (intptr_t);
	static GcLeaderboard_GcLeaderboard_Loading_m75421046282EED69E844C5A137EB4D1322934C1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_Loading_m75421046282EED69E844C5A137EB4D1322934C1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)");
	bool retVal = _il2cpp_icall_func(___leaderboard0);
	return retVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Dispose_m54F8C8544A7F65898B6444B3EE11916153C20B6F (GcLeaderboard_t65BC1BB657B2E25E7BB1FBBB70ACDE29A3A64B72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcLeaderboard_Dispose_m54F8C8544A7F65898B6444B3EE11916153C20B6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_InternalLeaderboard_0();
		GcLeaderboard_GcLeaderboard_Dispose_m45FAF5CB809CC8AA14C925CB11F23D6AD4DF407C((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_m_InternalLeaderboard_0((intptr_t)(0));
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_GcLeaderboard_Dispose_m45FAF5CB809CC8AA14C925CB11F23D6AD4DF407C (intptr_t ___leaderboard0, const RuntimeMethod* method)
{
	typedef void (*GcLeaderboard_GcLeaderboard_Dispose_m45FAF5CB809CC8AA14C925CB11F23D6AD4DF407C_ftn) (intptr_t);
	static GcLeaderboard_GcLeaderboard_Dispose_m45FAF5CB809CC8AA14C925CB11F23D6AD4DF407C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_Dispose_m45FAF5CB809CC8AA14C925CB11F23D6AD4DF407C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)");
	_il2cpp_icall_func(___leaderboard0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke(const GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC& unmarshaled, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Category_0());
	marshaled.___m_ValueLow_1 = unmarshaled.get_m_ValueLow_1();
	marshaled.___m_ValueHigh_2 = unmarshaled.get_m_ValueHigh_2();
	marshaled.___m_Date_3 = unmarshaled.get_m_Date_3();
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.get_m_FormattedValue_4());
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.get_m_PlayerID_5());
	marshaled.___m_Rank_6 = unmarshaled.get_m_Rank_6();
}
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke_back(const GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_pinvoke& marshaled, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC& unmarshaled)
{
	unmarshaled.set_m_Category_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.set_m_ValueLow_1(unmarshaled_m_ValueLow_temp_1);
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.set_m_ValueHigh_2(unmarshaled_m_ValueHigh_temp_2);
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.set_m_Date_3(unmarshaled_m_Date_temp_3);
	unmarshaled.set_m_FormattedValue_4(il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4));
	unmarshaled.set_m_PlayerID_5(il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.set_m_Rank_6(unmarshaled_m_Rank_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_pinvoke_cleanup(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_com(const GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC& unmarshaled, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_com& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Category_0());
	marshaled.___m_ValueLow_1 = unmarshaled.get_m_ValueLow_1();
	marshaled.___m_ValueHigh_2 = unmarshaled.get_m_ValueHigh_2();
	marshaled.___m_Date_3 = unmarshaled.get_m_Date_3();
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_FormattedValue_4());
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_PlayerID_5());
	marshaled.___m_Rank_6 = unmarshaled.get_m_Rank_6();
}
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_com_back(const GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_com& marshaled, GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC& unmarshaled)
{
	unmarshaled.set_m_Category_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.set_m_ValueLow_1(unmarshaled_m_ValueLow_temp_1);
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.set_m_ValueHigh_2(unmarshaled_m_ValueHigh_temp_2);
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.set_m_Date_3(unmarshaled_m_Date_temp_3);
	unmarshaled.set_m_FormattedValue_4(il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue_4));
	unmarshaled.set_m_PlayerID_5(il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.set_m_Rank_6(unmarshaled_m_Rank_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshal_com_cleanup(GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49 (GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * V_1 = NULL;
	{
		String_t* L_0 = __this->get_m_Category_0();
		int32_t L_1 = __this->get_m_ValueHigh_2();
		uint32_t L_2 = __this->get_m_ValueLow_1();
		String_t* L_3 = __this->get_m_PlayerID_5();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_m0FFFFEA32E380156E1FB4224D50CD0B16707E61C((&L_4), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_m_Date_3();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6 = DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), (((double)((double)L_5))), /*hidden argument*/NULL);
		String_t* L_7 = __this->get_m_FormattedValue_4();
		int32_t L_8 = __this->get_m_Rank_6();
		Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_9 = (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 *)il2cpp_codegen_object_new(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119_il2cpp_TypeInfo_var);
		Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3(L_9, L_0, ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_1)))<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_2))))), L_3, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0052;
	}

IL_0052:
	{
		Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC * _thisAdjusted = reinterpret_cast<GcScoreData_tAECE4DD4FB50D9F0B5504A41C1D95B028A5B28EC *>(__this + _offset);
	return GcScoreData_ToScore_m6B29510CCE935E2A67EAFC653CB4A0A4B8B32B49(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke(const GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D& unmarshaled, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke_back(const GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_pinvoke& marshaled, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D& unmarshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_pinvoke_cleanup(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_com(const GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D& unmarshaled, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_com& marshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_com_back(const GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_com& marshaled, GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D& unmarshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshal_com_cleanup(GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24 (GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	{
		String_t* L_0 = __this->get_userName_0();
		String_t* L_1 = __this->get_teamID_1();
		String_t* L_2 = __this->get_gameID_2();
		int32_t L_3 = __this->get_isFriend_3();
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = __this->get_image_4();
		UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * L_5 = (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 *)il2cpp_codegen_object_new(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537_il2cpp_TypeInfo_var);
		UserProfile__ctor_m82A71921E766018566AFB09BCE3091C8F1055F39(L_5, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, 3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D * _thisAdjusted = reinterpret_cast<GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D *>(__this + _offset);
	return GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24(_thisAdjusted, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2 (GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D * __this, UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_0 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_1 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___number1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = ___number1;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** L_5 = ___array0;
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_6 = *((UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769**)L_5);
		int32_t L_7 = ___number1;
		UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * L_8 = GcUserProfileData_ToUserProfile_m500A5A38D89D400333D9ED8D2005449AFEC91F24((GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D *)__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 *)L_8);
		goto IL_002d;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2_AdjustorThunk (RuntimeObject * __this, UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D * _thisAdjusted = reinterpret_cast<GcUserProfileData_t18036AD9C18F55CBB882ABACD4DE2771EFFDF03D *>(__this + _offset);
	GcUserProfileData_AddToArray_mA189B901FEF32E5CA9AF7DEB58D8143E87E41EC2(_thisAdjusted, ___array0, ___number1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mC09955DEF2101303E698FC13E1BBFFA90B3365F4 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard__ctor_mC09955DEF2101303E698FC13E1BBFFA90B3365F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Leaderboard_set_id_mC863AFBCE6B992935BCE9E8B567CDA40CCD94B42_inline(__this, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, /*hidden argument*/NULL);
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Range__ctor_mD7BBA6A816E8FBFDDC618308BC5D5882297443F8((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_m29352D47548D750E0E42EC9627C861C69D084444_inline(__this, L_0, /*hidden argument*/NULL);
		Leaderboard_set_userScope_m66BBCC760CDAF1C44639BD10E4D901EFD7C3F778_inline(__this, 0, /*hidden argument*/NULL);
		Leaderboard_set_timeScope_m36122610C955D05BD7FC713415CA78076986B901_inline(__this, 2, /*hidden argument*/NULL);
		__this->set_m_Loading_0((bool)0);
		Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_1 = (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 *)il2cpp_codegen_object_new(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119_il2cpp_TypeInfo_var);
		Score__ctor_m88494757EDE00B4CA1BE7027A1F84C82E09EC958(L_1, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->set_m_LocalUserScore_1(L_1);
		__this->set_m_MaxRange_2(0);
		ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_2 = (ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)SZArrayNew(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*)L_2;
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_3 = V_0;
		__this->set_m_Scores_3(L_3);
		__this->set_m_Title_4(_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_UserIDs_5(L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_ToString_mE59DCCF117736269AF0C6CD21876DB3448BD14ED (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_ToString_mE59DCCF117736269AF0C6CD21876DB3448BD14ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		String_t* L_6 = __this->get_m_Title_4();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		bool* L_9 = __this->get_address_of_m_Loading_0();
		String_t* L_10 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_13 = Leaderboard_get_range_mB9C6C91869423F791E017B71FCDB17A354585519_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13.get_from_0();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_12;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_19 = Leaderboard_get_range_mB9C6C91869423F791E017B71FCDB17A354585519_inline(__this, /*hidden argument*/NULL);
		int32_t L_20 = L_19.get_count_1();
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_18;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_23;
		uint32_t L_25 = __this->get_m_MaxRange_2();
		uint32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_30 = __this->get_m_Scores_3();
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))));
		RuntimeObject * L_32 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_33;
		int32_t L_35 = Leaderboard_get_userScope_m8304E736582482D0E5705C109D95F0CEDF2EE54C_inline(__this, /*hidden argument*/NULL);
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_34;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_38;
		int32_t L_40 = Leaderboard_get_timeScope_mE1F4CBEBE4B2E1E6BD245E3BE518680F13BBF276_inline(__this, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_42);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_39;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_43;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = __this->get_m_UserIDs_5();
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))));
		RuntimeObject * L_47 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_47);
		String_t* L_48 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_44, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_00fb;
	}

IL_00fb:
	{
		String_t* L_49 = V_0;
		return L_49;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetLocalUserScore_m17939BC032AC6FDCC1152234807C50E97A72D600 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, RuntimeObject* ___score0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___score0;
		__this->set_m_LocalUserScore_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetMaxRange_m5D699FC22BC5BED04386C4B6D4661663B49FD3B4 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___maxRange0;
		__this->set_m_MaxRange_2(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m2DB8C9FB943AD849B23FCEB56D76FAE4E11C2084 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_0 = ___scores0;
		__this->set_m_Scores_3(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_m5FE6EFFE4099E7BA2B7F1F6644B0A9E1C5A93627 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->set_m_Title_4(L_0);
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Leaderboard_GetUserFilter_m229A294CB0ED73326836FABAC438E517F6517550 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_m_UserIDs_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_id_mC863AFBCE6B992935BCE9E8B567CDA40CCD94B42 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m8304E736582482D0E5705C109D95F0CEDF2EE54C (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m66BBCC760CDAF1C44639BD10E4D901EFD7C3F778 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_t70C133E51417BC822E878050C90A577A69B671DC  Leaderboard_get_range_mB9C6C91869423F791E017B71FCDB17A354585519 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_range_m29352D47548D750E0E42EC9627C861C69D084444 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, Range_t70C133E51417BC822E878050C90A577A69B671DC  ___value0, const RuntimeMethod* method)
{
	{
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mE1F4CBEBE4B2E1E6BD245E3BE518680F13BBF276 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m36122610C955D05BD7FC713415CA78076986B901 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* V_0 = NULL;
	{
		UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA(__this, /*hidden argument*/NULL);
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_0 = (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)SZArrayNew(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E*)L_0;
		IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* L_1 = V_0;
		__this->set_m_Friends_6(L_1);
		__this->set_m_Authenticated_7((bool)0);
		__this->set_m_Underage_8((bool)0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m54CD46805170EDB993E87E0A9FA3BF82A910E489 (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* ___friends0, const RuntimeMethod* method)
{
	{
		IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* L_0 = ___friends0;
		__this->set_m_Friends_6(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_mCAFB7406BCB0A184B405E25695F280DA52EFE582 (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Authenticated_7(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_mA767EE5BC8615E452A6CC57376CA9B9DA601386E (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Underage_8(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalUser_get_authenticated_m7D219E0639A779F4527590E43E66F31C2A482BD1 (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Authenticated_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_mD7BBA6A816E8FBFDDC618308BC5D5882297443F8 (Range_t70C133E51417BC822E878050C90A577A69B671DC * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fromValue0;
		__this->set_from_0(L_0);
		int32_t L_1 = ___valueCount1;
		__this->set_count_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Range__ctor_mD7BBA6A816E8FBFDDC618308BC5D5882297443F8_AdjustorThunk (RuntimeObject * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Range_t70C133E51417BC822E878050C90A577A69B671DC * _thisAdjusted = reinterpret_cast<Range_t70C133E51417BC822E878050C90A577A69B671DC *>(__this + _offset);
	Range__ctor_mD7BBA6A816E8FBFDDC618308BC5D5882297443F8(_thisAdjusted, ___fromValue0, ___valueCount1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m88494757EDE00B4CA1BE7027A1F84C82E09EC958 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score__ctor_m88494757EDE00B4CA1BE7027A1F84C82E09EC958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int64_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3(__this, L_0, L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65_inline(__this, L_0, /*hidden argument*/NULL);
		int64_t L_1 = ___value1;
		Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___userID2;
		__this->set_m_UserID_2(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = ___date3;
		__this->set_m_Date_0(L_3);
		String_t* L_4 = ___formattedValue4;
		__this->set_m_FormattedValue_1(L_4);
		int32_t L_5 = ___rank5;
		__this->set_m_Rank_3(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_ToString_mBE1B8E8846C633AAA58A0680C888F21915454FC4 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_ToString_mBE1B8E8846C633AAA58A0680C888F21915454FC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral410946CD131353B68F194902EF06C27382525682);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral410946CD131353B68F194902EF06C27382525682);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3 = __this->get_m_Rank_3();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		int64_t L_8 = Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E_inline(__this, /*hidden argument*/NULL);
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		String_t* L_13 = Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		String_t* L_16 = __this->get_m_UserID_2();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_19 = __this->get_m_Date_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_20 = L_19;
		RuntimeObject * L_21 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_18, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0075;
	}

IL_0075:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_UserName_0(_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		__this->set_m_ID_1(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->set_m_IsFriend_2((bool)0);
		__this->set_m_State_3(3);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m82A71921E766018566AFB09BCE3091C8F1055F39 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___name0, String_t* ___teamId1, String_t* ___gameId2, bool ___friend3, int32_t ___state4, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image5, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		String_t* L_1 = ___teamId1;
		__this->set_m_ID_1(L_1);
		String_t* L_2 = ___gameId2;
		__this->set_m_gameID_5(L_2);
		bool L_3 = ___friend3;
		__this->set_m_IsFriend_2(L_3);
		int32_t L_4 = ___state4;
		__this->set_m_State_3(L_4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___image5;
		__this->set_m_Image_4(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_mE86E8A99DF0EE73C93A55624E890806213567924 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile_ToString_mE86E8A99DF0EE73C93A55624E890806213567924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		String_t* L_5 = UserProfile_get_userName_mB127337E5455C94299C39FB66C2965FF3421142E(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		bool L_8 = UserProfile_get_isFriend_m7ACC8963AD01FB384D215AF8C215DD93CB5322EA(__this, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		int32_t L_12 = UserProfile_get_state_mF93F969F5923A0A3528923E5A452138D00D4E248(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_11, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m25580633F0CE2894355406F1F8C86CCEA3E79BBA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_mD1A6F3DEE1C2887A8EDF41444C1D13A2835DF719 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_m_ID_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserGameID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserGameID_mF610AEAED6A05E06A24F1C2DC82EC8BD5CAAB4E0 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_m_gameID_5(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_m756E17B9BFE41D572C76A506E2BDA81A2D7D9605 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___image0;
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mB127337E5455C94299C39FB66C2965FF3421142E (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserName_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ID_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m7ACC8963AD01FB384D215AF8C215DD93CB5322EA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsFriend_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF93F969F5923A0A3528923E5A452138D00D4E248 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_State_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform_<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mEAC1B8E5722EF1563CE164CE0A2C2EF061A3B65B (U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform_<>c__DisplayClass21_0::<UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m4B82E8613D69236F6B072A688C556241D1CA9E5C (U3CU3Ec__DisplayClass21_0_t640615F596448CA7D86AAC8EE3A104A2CE70A95A * __this, bool ___success0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m4B82E8613D69236F6B072A688C556241D1CA9E5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_callback_0();
		bool L_1 = ___success0;
		NullCheck(L_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_0, L_1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_m16A4091CBC207FB287FEFF608C5F45D9D21106A0_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mD433F22DBB60B94FD45CC2A73C9A22C93B0CB9CB_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CpercentCompletedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m39931C0B44D8A4948E12527FDE77C9211028267B_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_m864BBAA8D955D724A506E62F6741B52D43F38F9D_inline (Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CpercentCompletedU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m61C4DA5B9AD3353518524A8E34723CE7836D432E_inline (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mD5FEE2DBF0C88887C99E3EDCD9BC65C32EFBAD4A_inline (AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_mC863AFBCE6B992935BCE9E8B567CDA40CCD94B42_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_m29352D47548D750E0E42EC9627C861C69D084444_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, Range_t70C133E51417BC822E878050C90A577A69B671DC  ___value0, const RuntimeMethod* method)
{
	{
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m66BBCC760CDAF1C44639BD10E4D901EFD7C3F778_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m36122610C955D05BD7FC713415CA78076986B901_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_t70C133E51417BC822E878050C90A577A69B671DC  Leaderboard_get_range_mB9C6C91869423F791E017B71FCDB17A354585519_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m8304E736582482D0E5705C109D95F0CEDF2EE54C_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mE1F4CBEBE4B2E1E6BD245E3BE518680F13BBF276_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
