#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DeterminismTest
struct DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// DeterminismTest/<LoadReaders>d__24
struct U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226;
// DeterminismTest/<RunTestRoutine>d__23
struct U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operator_t50F9D7CE958EE720975C8B3D9E21EC2BC84D29C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral026BD85BC66333D6BAD0B77CC1318FC615342F5F;
IL2CPP_EXTERN_C String_t* _stringLiteral0A98291D3C22476A51654CD896BDEBDF63CFB91D;
IL2CPP_EXTERN_C String_t* _stringLiteral0B7C64EC70253362CD8A90FFC2B2F777CF6C5E62;
IL2CPP_EXTERN_C String_t* _stringLiteral117AEE26283A2AB611639DE4AD381C4C7ABF8E01;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA05834683C9A9F04F62EDFACD0A1B27CE32489;
IL2CPP_EXTERN_C String_t* _stringLiteral1DEE57D8B8D2C143D1A4A1B9687EA2BB18F1182B;
IL2CPP_EXTERN_C String_t* _stringLiteral20CE8B0A4F958CAC1315C1483AB19499552E54A3;
IL2CPP_EXTERN_C String_t* _stringLiteral28FFE8F5A24FC76DF243029520909890CAF6F4C3;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAE80AB1D51FBD688AC5F94AAEA5215A5AC646D;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCBAE596892D1B55902BFF891A0598A5BAFA282;
IL2CPP_EXTERN_C String_t* _stringLiteral2F5B7987BDE8557D30BDCBE03172DBB4B43E3FB0;
IL2CPP_EXTERN_C String_t* _stringLiteral35EE5156181C772EB7E5BFC713FCD9E98920835D;
IL2CPP_EXTERN_C String_t* _stringLiteral391F0D0044D653231640C3CB4CBEBBAB6C72046F;
IL2CPP_EXTERN_C String_t* _stringLiteral3973FF56BDED4B1E78DAB4319B56262F27BB95D0;
IL2CPP_EXTERN_C String_t* _stringLiteral3A819DC351CC32C2E1D10A11585AE1973E3548AD;
IL2CPP_EXTERN_C String_t* _stringLiteral3C57732527F6D17C500260C1C555B4E4E46050DC;
IL2CPP_EXTERN_C String_t* _stringLiteral4A431E5D7E353616953A12F2AE6461EA91E35B28;
IL2CPP_EXTERN_C String_t* _stringLiteral4E879DF8DBAF035594FEAA90573C52D1CCF66190;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADF791A0BE1DBD9D7261B1A798D9C77DF7F20E0;
IL2CPP_EXTERN_C String_t* _stringLiteral5B721CC7B4F0A64DA87E5F6B9B8BA8CB6C032AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral61DC4080B87EC23E478DA20D4FAF52C1A9B89175;
IL2CPP_EXTERN_C String_t* _stringLiteral76716CD1CBC956A4446CD3E11ED66F9B605A8437;
IL2CPP_EXTERN_C String_t* _stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD;
IL2CPP_EXTERN_C String_t* _stringLiteral79A40EBCCD86C73473F4D5AB707AEE01177D7DEC;
IL2CPP_EXTERN_C String_t* _stringLiteral8396BB619D9B0F8716F37AD2EB35CEEF195624BF;
IL2CPP_EXTERN_C String_t* _stringLiteral929A5166EB80B42C4EDFBEDDFAE33AD260D765DD;
IL2CPP_EXTERN_C String_t* _stringLiteral9848CD33FA75B882B9EE8378DB25E5BAF2AF8F27;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5B9E80717D7BDF7E72BE2E60FB45F5592DF57F;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A73519FD14B2AEB009EAEDDC0CD3C583E9F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralB2824CD9BC65FC147E19E8E26F22590068B6435F;
IL2CPP_EXTERN_C String_t* _stringLiteralB312C9F326612D8696AA9931F85F0EC12E97959E;
IL2CPP_EXTERN_C String_t* _stringLiteralB69F5B765EEC7677601BB4FF52A7A4D7D8E3313F;
IL2CPP_EXTERN_C String_t* _stringLiteralB801253871F1ABF33648AE9971CF1A0596FA6AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E35DA8ACA7325D1139B305773A96F6B33A7ED0;
IL2CPP_EXTERN_C String_t* _stringLiteralB9FFE474A93D2B148F578AD48D73DB1108827424;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CC10345C1C7ABA39C3F985889BB8B611C58A19;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DE177996379A7FCB818F58B296F64EAB25163F;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1BD3C5C5D4D1BE4D11CA8E1DE5D79C8AC7E713;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BD80FB839748B89425A94F1244E28ED9D6955E;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CBE4A47CADDAC94C9DDDF4BFBBD52E03FB4718;
IL2CPP_EXTERN_C String_t* _stringLiteralE42EA98D636B2530A27FDC663CCECD092C8AB3E8;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3E58A4C910913BCCA2A0E0152851A5B33766F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF23C7E3AEF8702DE6684CC3E0F0373372549C853;
IL2CPP_EXTERN_C String_t* _stringLiteralFFA13A49A53E9095A1DEE34612C934AC6133B25F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeterminismTest_Operate_mA63C2DF25461CF9A3FCBAD7964ECC4AAB0C5ED3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Menu_U3CAwakeU3Eb__4_0_m9A9C5399BC1A6862F1CEB942556B92B94EACDAB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Menu_U3CAwakeU3Eb__4_1_m6C50C5D96749DF8ECCD7367E9567D0EC7D91FC69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadReadersU3Ed__24_System_Collections_IEnumerator_Reset_m6842E49E39115106707FD460EFF837D28251081A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunTestRoutineU3Ed__23_System_Collections_IEnumerator_Reset_mB0638F5635235820DDDD523A004DA58FD807D524_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____items_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Mathd
struct Mathd_t3C7EE5097DFAF379AEE2860D402A71FA03334486  : public RuntimeObject
{
public:

public:
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// DeterminismTest/<LoadReaders>d__24
struct U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226  : public RuntimeObject
{
public:
	// System.Int32 DeterminismTest/<LoadReaders>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DeterminismTest/<LoadReaders>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DeterminismTest DeterminismTest/<LoadReaders>d__24::<>4__this
	DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest DeterminismTest/<LoadReaders>d__24::<inputsReq>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CinputsReqU3E5__2_3;
	// UnityEngine.Networking.UnityWebRequest DeterminismTest/<LoadReaders>d__24::<floatReq>5__3
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CfloatReqU3E5__3_4;
	// UnityEngine.Networking.UnityWebRequest DeterminismTest/<LoadReaders>d__24::<dfloatReq>5__4
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CdfloatReqU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226, ___U3CU3E4__this_2)); }
	inline DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinputsReqU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226, ___U3CinputsReqU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CinputsReqU3E5__2_3() const { return ___U3CinputsReqU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CinputsReqU3E5__2_3() { return &___U3CinputsReqU3E5__2_3; }
	inline void set_U3CinputsReqU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CinputsReqU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputsReqU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfloatReqU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226, ___U3CfloatReqU3E5__3_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CfloatReqU3E5__3_4() const { return ___U3CfloatReqU3E5__3_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CfloatReqU3E5__3_4() { return &___U3CfloatReqU3E5__3_4; }
	inline void set_U3CfloatReqU3E5__3_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CfloatReqU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfloatReqU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdfloatReqU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226, ___U3CdfloatReqU3E5__4_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CdfloatReqU3E5__4_5() const { return ___U3CdfloatReqU3E5__4_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CdfloatReqU3E5__4_5() { return &___U3CdfloatReqU3E5__4_5; }
	inline void set_U3CdfloatReqU3E5__4_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CdfloatReqU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdfloatReqU3E5__4_5), (void*)value);
	}
};


// DeterminismTest/<RunTestRoutine>d__23
struct U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF  : public RuntimeObject
{
public:
	// System.Int32 DeterminismTest/<RunTestRoutine>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DeterminismTest/<RunTestRoutine>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DeterminismTest DeterminismTest/<RunTestRoutine>d__23::<>4__this
	DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * ___U3CU3E4__this_2;
	// System.Diagnostics.Stopwatch DeterminismTest/<RunTestRoutine>d__23::<stopwatch>5__2
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CstopwatchU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF, ___U3CU3E4__this_2)); }
	inline DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstopwatchU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF, ___U3CstopwatchU3E5__2_3)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CstopwatchU3E5__2_3() const { return ___U3CstopwatchU3E5__2_3; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CstopwatchU3E5__2_3() { return &___U3CstopwatchU3E5__2_3; }
	inline void set_U3CstopwatchU3E5__2_3(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CstopwatchU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstopwatchU3E5__2_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// dfloat
struct dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 
{
public:
	// System.UInt32 dfloat::Bits
	uint32_t ___Bits_0;

public:
	inline static int32_t get_offset_of_Bits_0() { return static_cast<int32_t>(offsetof(dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2, ___Bits_0)); }
	inline uint32_t get_Bits_0() const { return ___Bits_0; }
	inline uint32_t* get_address_of_Bits_0() { return &___Bits_0; }
	inline void set_Bits_0(uint32_t value)
	{
		___Bits_0 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_9;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_10;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_11;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_12;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_13;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_14;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_15;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_16;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_17;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_18;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_19;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_20;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_22;

public:
	inline static int32_t get_offset_of_stream_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_7)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_7() const { return ___stream_7; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_7() { return &___stream_7; }
	inline void set_stream_7(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_7), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_8)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_8() const { return ___encoding_8; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_8() { return &___encoding_8; }
	inline void set_encoding_8(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_8), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_9)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_9() const { return ___decoder_9; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_9), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_10() const { return ___byteBuffer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_10() { return &___byteBuffer_10; }
	inline void set_byteBuffer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_11)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_11() const { return ___charBuffer_11; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_11() { return &___charBuffer_11; }
	inline void set_charBuffer_11(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_12)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_12() const { return ____preamble_12; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_12() { return &____preamble_12; }
	inline void set__preamble_12(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_12), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_13)); }
	inline int32_t get_charPos_13() const { return ___charPos_13; }
	inline int32_t* get_address_of_charPos_13() { return &___charPos_13; }
	inline void set_charPos_13(int32_t value)
	{
		___charPos_13 = value;
	}

	inline static int32_t get_offset_of_charLen_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_14)); }
	inline int32_t get_charLen_14() const { return ___charLen_14; }
	inline int32_t* get_address_of_charLen_14() { return &___charLen_14; }
	inline void set_charLen_14(int32_t value)
	{
		___charLen_14 = value;
	}

	inline static int32_t get_offset_of_byteLen_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_15)); }
	inline int32_t get_byteLen_15() const { return ___byteLen_15; }
	inline int32_t* get_address_of_byteLen_15() { return &___byteLen_15; }
	inline void set_byteLen_15(int32_t value)
	{
		___byteLen_15 = value;
	}

	inline static int32_t get_offset_of_bytePos_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_16)); }
	inline int32_t get_bytePos_16() const { return ___bytePos_16; }
	inline int32_t* get_address_of_bytePos_16() { return &___bytePos_16; }
	inline void set_bytePos_16(int32_t value)
	{
		___bytePos_16 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_17)); }
	inline int32_t get__maxCharsPerBuffer_17() const { return ____maxCharsPerBuffer_17; }
	inline int32_t* get_address_of__maxCharsPerBuffer_17() { return &____maxCharsPerBuffer_17; }
	inline void set__maxCharsPerBuffer_17(int32_t value)
	{
		____maxCharsPerBuffer_17 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_18)); }
	inline bool get__detectEncoding_18() const { return ____detectEncoding_18; }
	inline bool* get_address_of__detectEncoding_18() { return &____detectEncoding_18; }
	inline void set__detectEncoding_18(bool value)
	{
		____detectEncoding_18 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_19)); }
	inline bool get__checkPreamble_19() const { return ____checkPreamble_19; }
	inline bool* get_address_of__checkPreamble_19() { return &____checkPreamble_19; }
	inline void set__checkPreamble_19(bool value)
	{
		____checkPreamble_19 = value;
	}

	inline static int32_t get_offset_of__isBlocked_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_20)); }
	inline bool get__isBlocked_20() const { return ____isBlocked_20; }
	inline bool* get_address_of__isBlocked_20() { return &____isBlocked_20; }
	inline void set__isBlocked_20(bool value)
	{
		____isBlocked_20 = value;
	}

	inline static int32_t get_offset_of__closable_21() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_21)); }
	inline bool get__closable_21() const { return ____closable_21; }
	inline bool* get_address_of__closable_21() { return &____closable_21; }
	inline void set__closable_21(bool value)
	{
		____closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_22() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_22() const { return ____asyncReadTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_22() { return &____asyncReadTask_22; }
	inline void set__asyncReadTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_22), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_16;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_17;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_18;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_19;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_20;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_21;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_22;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_23;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_24;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_25;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_26;

public:
	inline static int32_t get_offset_of_stream_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_16)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_16() const { return ___stream_16; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_16() { return &___stream_16; }
	inline void set_stream_16(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_16), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_17)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_17() const { return ___encoding_17; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_17), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_18)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_18() const { return ___encoder_18; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_18() { return &___encoder_18; }
	inline void set_encoder_18(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_18), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_19() const { return ___byteBuffer_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_19() { return &___byteBuffer_19; }
	inline void set_byteBuffer_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_19), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_20)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_20() const { return ___charBuffer_20; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_20() { return &___charBuffer_20; }
	inline void set_charBuffer_20(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_20), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_21)); }
	inline int32_t get_charPos_21() const { return ___charPos_21; }
	inline int32_t* get_address_of_charPos_21() { return &___charPos_21; }
	inline void set_charPos_21(int32_t value)
	{
		___charPos_21 = value;
	}

	inline static int32_t get_offset_of_charLen_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_22)); }
	inline int32_t get_charLen_22() const { return ___charLen_22; }
	inline int32_t* get_address_of_charLen_22() { return &___charLen_22; }
	inline void set_charLen_22(int32_t value)
	{
		___charLen_22 = value;
	}

	inline static int32_t get_offset_of_autoFlush_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_23)); }
	inline bool get_autoFlush_23() const { return ___autoFlush_23; }
	inline bool* get_address_of_autoFlush_23() { return &___autoFlush_23; }
	inline void set_autoFlush_23(bool value)
	{
		___autoFlush_23 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_24() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_24)); }
	inline bool get_haveWrittenPreamble_24() const { return ___haveWrittenPreamble_24; }
	inline bool* get_address_of_haveWrittenPreamble_24() { return &___haveWrittenPreamble_24; }
	inline void set_haveWrittenPreamble_24(bool value)
	{
		___haveWrittenPreamble_24 = value;
	}

	inline static int32_t get_offset_of_closable_25() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_25)); }
	inline bool get_closable_25() const { return ___closable_25; }
	inline bool* get_address_of_closable_25() { return &___closable_25; }
	inline void set_closable_25(bool value)
	{
		___closable_25 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_26() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_26)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_26() const { return ____asyncWriteTask_26; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_26() { return &____asyncWriteTask_26; }
	inline void set__asyncWriteTask_26(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_26), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_15;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_27;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_15)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_15() const { return ___Null_15; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_15), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_27() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_27)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_27() const { return ____UTF8NoBOM_27; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_27() { return &____UTF8NoBOM_27; }
	inline void set__UTF8NoBOM_27(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_27), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// DeterminismTest/Operator
struct Operator_t50F9D7CE958EE720975C8B3D9E21EC2BC84D29C7 
{
public:
	// System.Int32 DeterminismTest/Operator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operator_t50F9D7CE958EE720975C8B3D9E21EC2BC84D29C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DeterminismTest
struct DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 DeterminismTest::count
	int32_t ___count_4;
	// System.Boolean DeterminismTest::treatAllNaNAlike
	bool ___treatAllNaNAlike_5;
	// UnityEngine.UI.Text DeterminismTest::output
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___output_6;
	// System.Int64 DeterminismTest::logOutputLimit
	int64_t ___logOutputLimit_7;
	// System.IO.StreamReader DeterminismTest::floatBitsInputReader
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___floatBitsInputReader_12;
	// System.IO.StreamWriter DeterminismTest::floatResultsWriter
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___floatResultsWriter_13;
	// System.IO.StreamWriter DeterminismTest::dfloatResultsWriter
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___dfloatResultsWriter_14;
	// System.IO.StreamReader DeterminismTest::floatResultsReader
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___floatResultsReader_15;
	// System.IO.StreamReader DeterminismTest::dfloatResultsReader
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___dfloatResultsReader_16;
	// System.Text.StringBuilder DeterminismTest::log
	StringBuilder_t * ___log_17;
	// System.Int64 DeterminismTest::tests
	int64_t ___tests_18;
	// System.Int64 DeterminismTest::floatErrors
	int64_t ___floatErrors_19;
	// System.Int64 DeterminismTest::dfloatErrors
	int64_t ___dfloatErrors_20;

public:
	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_treatAllNaNAlike_5() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___treatAllNaNAlike_5)); }
	inline bool get_treatAllNaNAlike_5() const { return ___treatAllNaNAlike_5; }
	inline bool* get_address_of_treatAllNaNAlike_5() { return &___treatAllNaNAlike_5; }
	inline void set_treatAllNaNAlike_5(bool value)
	{
		___treatAllNaNAlike_5 = value;
	}

	inline static int32_t get_offset_of_output_6() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___output_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_output_6() const { return ___output_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_output_6() { return &___output_6; }
	inline void set_output_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___output_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_6), (void*)value);
	}

	inline static int32_t get_offset_of_logOutputLimit_7() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___logOutputLimit_7)); }
	inline int64_t get_logOutputLimit_7() const { return ___logOutputLimit_7; }
	inline int64_t* get_address_of_logOutputLimit_7() { return &___logOutputLimit_7; }
	inline void set_logOutputLimit_7(int64_t value)
	{
		___logOutputLimit_7 = value;
	}

	inline static int32_t get_offset_of_floatBitsInputReader_12() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___floatBitsInputReader_12)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_floatBitsInputReader_12() const { return ___floatBitsInputReader_12; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_floatBitsInputReader_12() { return &___floatBitsInputReader_12; }
	inline void set_floatBitsInputReader_12(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___floatBitsInputReader_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatBitsInputReader_12), (void*)value);
	}

	inline static int32_t get_offset_of_floatResultsWriter_13() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___floatResultsWriter_13)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_floatResultsWriter_13() const { return ___floatResultsWriter_13; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_floatResultsWriter_13() { return &___floatResultsWriter_13; }
	inline void set_floatResultsWriter_13(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___floatResultsWriter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatResultsWriter_13), (void*)value);
	}

	inline static int32_t get_offset_of_dfloatResultsWriter_14() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___dfloatResultsWriter_14)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_dfloatResultsWriter_14() const { return ___dfloatResultsWriter_14; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_dfloatResultsWriter_14() { return &___dfloatResultsWriter_14; }
	inline void set_dfloatResultsWriter_14(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___dfloatResultsWriter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dfloatResultsWriter_14), (void*)value);
	}

	inline static int32_t get_offset_of_floatResultsReader_15() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___floatResultsReader_15)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_floatResultsReader_15() const { return ___floatResultsReader_15; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_floatResultsReader_15() { return &___floatResultsReader_15; }
	inline void set_floatResultsReader_15(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___floatResultsReader_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatResultsReader_15), (void*)value);
	}

	inline static int32_t get_offset_of_dfloatResultsReader_16() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___dfloatResultsReader_16)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_dfloatResultsReader_16() const { return ___dfloatResultsReader_16; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_dfloatResultsReader_16() { return &___dfloatResultsReader_16; }
	inline void set_dfloatResultsReader_16(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___dfloatResultsReader_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dfloatResultsReader_16), (void*)value);
	}

	inline static int32_t get_offset_of_log_17() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___log_17)); }
	inline StringBuilder_t * get_log_17() const { return ___log_17; }
	inline StringBuilder_t ** get_address_of_log_17() { return &___log_17; }
	inline void set_log_17(StringBuilder_t * value)
	{
		___log_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___log_17), (void*)value);
	}

	inline static int32_t get_offset_of_tests_18() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___tests_18)); }
	inline int64_t get_tests_18() const { return ___tests_18; }
	inline int64_t* get_address_of_tests_18() { return &___tests_18; }
	inline void set_tests_18(int64_t value)
	{
		___tests_18 = value;
	}

	inline static int32_t get_offset_of_floatErrors_19() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___floatErrors_19)); }
	inline int64_t get_floatErrors_19() const { return ___floatErrors_19; }
	inline int64_t* get_address_of_floatErrors_19() { return &___floatErrors_19; }
	inline void set_floatErrors_19(int64_t value)
	{
		___floatErrors_19 = value;
	}

	inline static int32_t get_offset_of_dfloatErrors_20() { return static_cast<int32_t>(offsetof(DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF, ___dfloatErrors_20)); }
	inline int64_t get_dfloatErrors_20() const { return ___dfloatErrors_20; }
	inline int64_t* get_address_of_dfloatErrors_20() { return &___dfloatErrors_20; }
	inline void set_dfloatErrors_20(int64_t value)
	{
		___dfloatErrors_20 = value;
	}
};


// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button Menu::generateGroundTruthButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___generateGroundTruthButton_4;
	// UnityEngine.UI.Button Menu::runTestButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___runTestButton_5;
	// UnityEngine.GameObject Menu::menuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuUI_6;
	// UnityEngine.GameObject Menu::testUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___testUI_7;

public:
	inline static int32_t get_offset_of_generateGroundTruthButton_4() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___generateGroundTruthButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_generateGroundTruthButton_4() const { return ___generateGroundTruthButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_generateGroundTruthButton_4() { return &___generateGroundTruthButton_4; }
	inline void set_generateGroundTruthButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___generateGroundTruthButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generateGroundTruthButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_runTestButton_5() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___runTestButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_runTestButton_5() const { return ___runTestButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_runTestButton_5() { return &___runTestButton_5; }
	inline void set_runTestButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___runTestButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runTestButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_menuUI_6() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___menuUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuUI_6() const { return ___menuUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuUI_6() { return &___menuUI_6; }
	inline void set_menuUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_testUI_7() { return static_cast<int32_t>(offsetof(Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6, ___testUI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_testUI_7() const { return ___testUI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_testUI_7() { return &___testUI_7; }
	inline void set_testUI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___testUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testUI_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_gshared (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_gshared (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, uint32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void DeterminismTest::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter_Dispose_m52A09FC07AC6869F19BD2823116B33966AA5B727 (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void DeterminismTest::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void DeterminismTest::Execute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Execute_m388F62A01A7E2BCE1A68D853E754A56F7DB6ADAE (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, bool ___write0, const RuntimeMethod* method);
// System.Collections.IEnumerator DeterminismTest::RunTestRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeterminismTest_RunTestRoutine_m8ABDD219A84D10B3F0A169F5947600C66B4833B2 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void DeterminismTest/<RunTestRoutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTestRoutineU3Ed__23__ctor_mC4A6C57BE859DC9576B02AF6AE5851F102045E5B (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DeterminismTest/<LoadReaders>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadReadersU3Ed__24__ctor_mAE66A167EBD8D3BD26A4A4858F368DB503DD2288 (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.UInt32 DeterminismTest::FloatToBits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, float ___f0, const RuntimeMethod* method);
// System.Void DeterminismTest::OpTestAll(System.UInt32,System.UInt32,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, bool ___write2, String_t* ___messagePrefix3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
inline void List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56 (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_gshared)(__this, method);
}
// System.UInt32 System.Convert::ToUInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m4A3A2CDB59C68EDF67FF0A6DBD0C7DB206AFA805 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(!0)
inline void List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08 (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, uint32_t, const RuntimeMethod*))List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_gshared)(__this, ___item0, method);
}
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_m577D5B15A1100691A7AC9B4F6D6D0574EBADC5BA (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, int32_t, const RuntimeMethod*))List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
inline int32_t List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_gshared_inline)(__this, method);
}
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void DeterminismTest::OpTest(System.UInt32,System.UInt32,DeterminismTest/Operator,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_OpTest_mACB191A7C96E1D848FBD98B882599FE5B395E574 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, int32_t ___op2, bool ___write3, String_t* ___messagePrefix4, const RuntimeMethod* method);
// System.Void DeterminismTest::Operate(System.UInt32,System.UInt32,DeterminismTest/Operator,System.Single&,dfloat&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Operate_mA63C2DF25461CF9A3FCBAD7964ECC4AAB0C5ED3F (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, int32_t ___op2, float* ___floatResult3, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * ___dfloatResult4, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.Single DeterminismTest::BitsToFloat(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___bits0, const RuntimeMethod* method);
// System.Single dfloat::AsNonDetermFloat(dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float dfloat_AsNonDetermFloat_mEE56F65874FF31C7D5FB9C7D1776CE67D197F2B6 (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___df0, const RuntimeMethod* method);
// System.String DeterminismTest::GetResultString(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeterminismTest_GetResultString_mCC3B02AB81B29BDD959E84F775DC1579809FCEDA (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___result2, uint32_t ___truth3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void dfloat::.ctor(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * __this, uint32_t ___bits0, const RuntimeMethod* method);
// dfloat Mathd::Add(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Add_m614D18FE4883FA30E6BF84C598E558755B56A61B (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method);
// dfloat Mathd::Sub(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Sub_mD6B67692AFB37854D9B9D2FB1FB01E752734A47B (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method);
// dfloat Mathd::Mul(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Mul_m389C81B71FE7482C31A6AE298C74F90069C7FD79 (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method);
// dfloat Mathd::Div(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Div_m31DCEAC56DF57867BD8FB66D3DDFD83EB3FE021F (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String DeterminismTest::FloatBitsToVerboseString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeterminismTest_FloatBitsToVerboseString_m89FEABC05F631A296727A96C98016F1FB99BEDF7 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___bits0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m06FCEEC9F8C5434D0A2530635B46751F049A477D (int64_t ___value0, int32_t ___toBase1, const RuntimeMethod* method);
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328 (String_t* __this, int32_t ___totalWidth0, Il2CppChar ___paddingChar1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.UInt32 Mathd::float_add(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_add_m93807296E1D05BF400D23ABB88048357D75673A1 (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// System.UInt32 Mathd::float_sub(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_sub_mFD104DA377CD4D9B3C3A933A812A78055AD34D55 (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// System.UInt32 Mathd::float_mul(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_mul_m3CE14A4B840F6027B42EC2B867FB32B2E4A7F252 (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// System.UInt32 Mathd::float_div(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_div_mC869252BEBD84D645FF48AE1AE9572EF9641851D (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<DeterminismTest>()
inline DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void DeterminismTest::GenerateGroundTruth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_GenerateGroundTruth_mF8FAF39883AC19126F1F14D7937B723D134A47C3 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method);
// System.Void DeterminismTest::RunTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_RunTest_mDC0C393F17A0C68235E4B09542BA3B71157F9CD8 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method);
// System.Void Menu::GenerateGroundTruth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_GenerateGroundTruth_m7AD2C24D55BCE1ED0C9E8A9F147DCEEAF7304FFA (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.Void Menu::RunTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_RunTest_m1EB6F8D989935937B1062CC3280744A9C62A43D9 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String dfloat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* dfloat_ToString_m6321E14CED87EC0C4D9620AC5214652A42702BF2 (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3 (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905 (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DeterminismTest::LoadReaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeterminismTest_LoadReaders_m2F0B73997E7B0B4A3816B38B94C062B7073AEC76 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL float_add(uint32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL float_sub(uint32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL float_mul(uint32_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL float_div(uint32_t, uint32_t);
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
// System.Void DeterminismTest::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// log.AppendLine(message + "\n");
		StringBuilder_t * L_1 = __this->get_log_17();
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_1, L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// Debug.Log(message);
		String_t* L_5 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DeterminismTest::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB801253871F1ABF33648AE9971CF1A0596FA6AF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9DE177996379A7FCB818F58B296F64EAB25163F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// log.AppendLine($"<color={errorTextColor}>{message}</color>" + "\n");
		StringBuilder_t * L_1 = __this->get_log_17();
		String_t* L_2 = ___message0;
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralB801253871F1ABF33648AE9971CF1A0596FA6AF6, L_2, _stringLiteralC9DE177996379A7FCB818F58B296F64EAB25163F, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// Debug.LogError(message);
		String_t* L_5 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DeterminismTest::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Assert_mEE348A084A9AC36868A0533527D403BCD0D83CFD (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, bool ___value0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8396BB619D9B0F8716F37AD2EB35CEEF195624BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (message == null)
		String_t* L_1 = ___message1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// LogError("Assert failed.");
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, _stringLiteral8396BB619D9B0F8716F37AD2EB35CEEF195624BF, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		// LogError(message);
		String_t* L_2 = ___message1;
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DeterminismTest::GenerateGroundTruth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_GenerateGroundTruth_mF8FAF39883AC19126F1F14D7937B723D134A47C3 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral026BD85BC66333D6BAD0B77CC1318FC615342F5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3E58A4C910913BCCA2A0E0152851A5B33766F6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * V_1 = NULL;
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_2 = NULL;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		// log = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_log_17(L_0);
		// string floatInputsPath = Path.Combine(Application.streamingAssetsPath, floatInputsFilename);
		String_t* L_1;
		L_1 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteral026BD85BC66333D6BAD0B77CC1318FC615342F5F, /*hidden argument*/NULL);
		V_0 = L_2;
		// var floatInputs = new StreamWriter(floatInputsPath);
		String_t* L_3 = V_0;
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// var rand = new System.Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_004a;
	}

IL_002c:
	{
		// uint value = (uint)rand.Next(-int.MaxValue, int.MaxValue);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_6, ((int32_t)-2147483647), ((int32_t)2147483647LL));
		V_4 = L_7;
		// floatInputs.WriteLine(value);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_8 = V_1;
		uint32_t L_9 = V_4;
		NullCheck(L_8);
		VirtActionInvoker1< uint32_t >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.UInt32) */, L_8, L_9);
		// for (int i = 0; i < count; i++)
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_11 = V_3;
		int32_t L_12 = __this->get_count_4();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_002c;
		}
	}
	{
		// floatInputs.Dispose();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_13 = V_1;
		NullCheck(L_13);
		TextWriter_Dispose_m52A09FC07AC6869F19BD2823116B33966AA5B727(L_13, /*hidden argument*/NULL);
		// Log($"Generated {count} random floats to file { floatInputsPath } ");
		int32_t L_14 = __this->get_count_4();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralEB3E58A4C910913BCCA2A0E0152851A5B33766F6, L_16, L_17, /*hidden argument*/NULL);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_18, /*hidden argument*/NULL);
		// floatBitsInputReader = new StreamReader(floatInputsPath);
		String_t* L_19 = V_0;
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_20 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B(L_20, L_19, /*hidden argument*/NULL);
		__this->set_floatBitsInputReader_12(L_20);
		// Execute(true);
		DeterminismTest_Execute_m388F62A01A7E2BCE1A68D853E754A56F7DB6ADAE(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DeterminismTest::RunTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_RunTest_mDC0C393F17A0C68235E4B09542BA3B71157F9CD8 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// log = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_log_17(L_0);
		// StartCoroutine(RunTestRoutine());
		RuntimeObject* L_1;
		L_1 = DeterminismTest_RunTestRoutine_m8ABDD219A84D10B3F0A169F5947600C66B4833B2(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DeterminismTest::RunTestRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeterminismTest_RunTestRoutine_m8ABDD219A84D10B3F0A169F5947600C66B4833B2 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * L_0 = (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF *)il2cpp_codegen_object_new(U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF_il2cpp_TypeInfo_var);
		U3CRunTestRoutineU3Ed__23__ctor_mC4A6C57BE859DC9576B02AF6AE5851F102045E5B(L_0, 0, /*hidden argument*/NULL);
		U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DeterminismTest::LoadReaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeterminismTest_LoadReaders_m2F0B73997E7B0B4A3816B38B94C062B7073AEC76 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * L_0 = (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 *)il2cpp_codegen_object_new(U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226_il2cpp_TypeInfo_var);
		U3CLoadReadersU3Ed__24__ctor_mAE66A167EBD8D3BD26A4A4858F368DB503DD2288(L_0, 0, /*hidden argument*/NULL);
		U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DeterminismTest::Execute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Execute_m388F62A01A7E2BCE1A68D853E754A56F7DB6ADAE (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, bool ___write0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A98291D3C22476A51654CD896BDEBDF63CFB91D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B7C64EC70253362CD8A90FFC2B2F777CF6C5E62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral117AEE26283A2AB611639DE4AD381C4C7ABF8E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA05834683C9A9F04F62EDFACD0A1B27CE32489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DEE57D8B8D2C143D1A4A1B9687EA2BB18F1182B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20CE8B0A4F958CAC1315C1483AB19499552E54A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28FFE8F5A24FC76DF243029520909890CAF6F4C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAE80AB1D51FBD688AC5F94AAEA5215A5AC646D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F5B7987BDE8557D30BDCBE03172DBB4B43E3FB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A819DC351CC32C2E1D10A11585AE1973E3548AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C57732527F6D17C500260C1C555B4E4E46050DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A431E5D7E353616953A12F2AE6461EA91E35B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E879DF8DBAF035594FEAA90573C52D1CCF66190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ADF791A0BE1DBD9D7261B1A798D9C77DF7F20E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B721CC7B4F0A64DA87E5F6B9B8BA8CB6C032AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76716CD1CBC956A4446CD3E11ED66F9B605A8437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79A40EBCCD86C73473F4D5AB707AEE01177D7DEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral929A5166EB80B42C4EDFBEDDFAE33AD260D765DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9848CD33FA75B882B9EE8378DB25E5BAF2AF8F27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5B9E80717D7BDF7E72BE2E60FB45F5592DF57F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A73519FD14B2AEB009EAEDDC0CD3C583E9F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2824CD9BC65FC147E19E8E26F22590068B6435F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB312C9F326612D8696AA9931F85F0EC12E97959E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E35DA8ACA7325D1139B305773A96F6B33A7ED0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9FFE474A93D2B148F578AD48D73DB1108827424);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA1BD3C5C5D4D1BE4D11CA8E1DE5D79C8AC7E713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3BD80FB839748B89425A94F1244E28ED9D6955E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42EA98D636B2530A27FDC663CCECD092C8AB3E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23C7E3AEF8702DE6684CC3E0F0373372549C853);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// var stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// tests = 0;
		__this->set_tests_18(((int64_t)((int64_t)0)));
		// floatErrors = 0;
		__this->set_floatErrors_19(((int64_t)((int64_t)0)));
		// dfloatErrors = 0;
		__this->set_dfloatErrors_20(((int64_t)((int64_t)0)));
		// floatResultsWriter = null;
		__this->set_floatResultsWriter_13((StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)NULL);
		// dfloatResultsWriter = null;
		__this->set_dfloatResultsWriter_14((StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)NULL);
		// if (write)
		bool L_1 = ___write0;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// floatResultsWriter = new StreamWriter(Path.Combine(Application.streamingAssetsPath, floatResultsFilename));
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_2, _stringLiteral5B721CC7B4F0A64DA87E5F6B9B8BA8CB6C032AC7, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_4, L_3, /*hidden argument*/NULL);
		__this->set_floatResultsWriter_13(L_4);
		// dfloatResultsWriter = new StreamWriter(Path.Combine(Application.streamingAssetsPath, dfloatResultsFilename));
		String_t* L_5;
		L_5 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_5, _stringLiteralA33A73519FD14B2AEB009EAEDDC0CD3C583E9F1F, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_7, L_6, /*hidden argument*/NULL);
		__this->set_dfloatResultsWriter_14(L_7);
	}

IL_0063:
	{
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_8 = V_0;
		NullCheck(L_8);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_8, /*hidden argument*/NULL);
		// uint largestDenormal = 0x007fffff;
		V_1 = ((int32_t)8388607);
		// uint middleDenormal = 0x00001fff;
		V_2 = ((int32_t)8191);
		// uint pointfive = 0x3f000000;
		V_3 = ((int32_t)1056964608);
		// uint posInfinity = FloatToBits(float.PositiveInfinity);
		uint32_t L_9;
		L_9 = DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68(__this, (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		V_4 = L_9;
		// uint negInfinity = FloatToBits(float.NegativeInfinity);
		uint32_t L_10;
		L_10 = DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68(__this, (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		V_5 = L_10;
		// OpTestAll(0, 0, write, "zero zero");
		bool L_11 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, 0, 0, L_11, _stringLiteral1DEE57D8B8D2C143D1A4A1B9687EA2BB18F1182B, /*hidden argument*/NULL);
		// OpTestAll(0, pointfive, write, "zero pointfive");
		uint32_t L_12 = V_3;
		bool L_13 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, 0, L_12, L_13, _stringLiteral0B7C64EC70253362CD8A90FFC2B2F777CF6C5E62, /*hidden argument*/NULL);
		// OpTestAll(largestDenormal, largestDenormal, write, "denorm denorm");
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_1;
		bool L_16 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_14, L_15, L_16, _stringLiteralB8E35DA8ACA7325D1139B305773A96F6B33A7ED0, /*hidden argument*/NULL);
		// OpTestAll(largestDenormal, middleDenormal, write, "denorm denorm");
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		bool L_19 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_17, L_18, L_19, _stringLiteralB8E35DA8ACA7325D1139B305773A96F6B33A7ED0, /*hidden argument*/NULL);
		// OpTestAll(largestDenormal, pointfive, write, "denorm norm");
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_3;
		bool L_22 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_20, L_21, L_22, _stringLiteralD3BD80FB839748B89425A94F1244E28ED9D6955E, /*hidden argument*/NULL);
		// OpTestAll(pointfive, largestDenormal, write, "norm denorm");
		uint32_t L_23 = V_3;
		uint32_t L_24 = V_1;
		bool L_25 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_23, L_24, L_25, _stringLiteral4E879DF8DBAF035594FEAA90573C52D1CCF66190, /*hidden argument*/NULL);
		// OpTestAll(pointfive, middleDenormal, write, "norm denorm");
		uint32_t L_26 = V_3;
		uint32_t L_27 = V_2;
		bool L_28 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_26, L_27, L_28, _stringLiteral4E879DF8DBAF035594FEAA90573C52D1CCF66190, /*hidden argument*/NULL);
		// OpTestAll(0, largestDenormal, write, "zero denorm");
		uint32_t L_29 = V_1;
		bool L_30 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, 0, L_29, L_30, _stringLiteralE42EA98D636B2530A27FDC663CCECD092C8AB3E8, /*hidden argument*/NULL);
		// OpTestAll(largestDenormal, 0, write, "denorm zero");
		uint32_t L_31 = V_1;
		bool L_32 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_31, 0, L_32, _stringLiteral9848CD33FA75B882B9EE8378DB25E5BAF2AF8F27, /*hidden argument*/NULL);
		// OpTestAll(posInfinity, posInfinity, write, "posinf posinf");
		uint32_t L_33 = V_4;
		uint32_t L_34 = V_4;
		bool L_35 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_33, L_34, L_35, _stringLiteral3C57732527F6D17C500260C1C555B4E4E46050DC, /*hidden argument*/NULL);
		// OpTestAll(posInfinity, negInfinity, write, "posinf neginf");
		uint32_t L_36 = V_4;
		uint32_t L_37 = V_5;
		bool L_38 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_36, L_37, L_38, _stringLiteral79A40EBCCD86C73473F4D5AB707AEE01177D7DEC, /*hidden argument*/NULL);
		// OpTestAll(negInfinity, posInfinity, write, "neginf posinf");
		uint32_t L_39 = V_5;
		uint32_t L_40 = V_4;
		bool L_41 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_39, L_40, L_41, _stringLiteral5ADF791A0BE1DBD9D7261B1A798D9C77DF7F20E0, /*hidden argument*/NULL);
		// OpTestAll(negInfinity, negInfinity, write, "neginf neginf");
		uint32_t L_42 = V_5;
		uint32_t L_43 = V_5;
		bool L_44 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_42, L_43, L_44, _stringLiteral1DA05834683C9A9F04F62EDFACD0A1B27CE32489, /*hidden argument*/NULL);
		// OpTestAll(posInfinity, pointfive, write, "posinf norm");
		uint32_t L_45 = V_4;
		uint32_t L_46 = V_3;
		bool L_47 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_45, L_46, L_47, _stringLiteral9B5B9E80717D7BDF7E72BE2E60FB45F5592DF57F, /*hidden argument*/NULL);
		// OpTestAll(negInfinity, pointfive, write, "neginf norm");
		uint32_t L_48 = V_5;
		uint32_t L_49 = V_3;
		bool L_50 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_48, L_49, L_50, _stringLiteral20CE8B0A4F958CAC1315C1483AB19499552E54A3, /*hidden argument*/NULL);
		// OpTestAll(pointfive, posInfinity, write, "norm posInfinity");
		uint32_t L_51 = V_3;
		uint32_t L_52 = V_4;
		bool L_53 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_51, L_52, L_53, _stringLiteral117AEE26283A2AB611639DE4AD381C4C7ABF8E01, /*hidden argument*/NULL);
		// OpTestAll(pointfive, negInfinity, write, "norm negInfinity");
		uint32_t L_54 = V_3;
		uint32_t L_55 = V_5;
		bool L_56 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_54, L_55, L_56, _stringLiteralB312C9F326612D8696AA9931F85F0EC12E97959E, /*hidden argument*/NULL);
		// OpTestAll(posInfinity, largestDenormal, write, "posinf denorm");
		uint32_t L_57 = V_4;
		uint32_t L_58 = V_1;
		bool L_59 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_57, L_58, L_59, _stringLiteralF23C7E3AEF8702DE6684CC3E0F0373372549C853, /*hidden argument*/NULL);
		// OpTestAll(negInfinity, largestDenormal, write, "neginf denorm");
		uint32_t L_60 = V_5;
		uint32_t L_61 = V_1;
		bool L_62 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_60, L_61, L_62, _stringLiteral2F5B7987BDE8557D30BDCBE03172DBB4B43E3FB0, /*hidden argument*/NULL);
		// OpTestAll(0, posInfinity, write, "zero posInfinity");
		uint32_t L_63 = V_4;
		bool L_64 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, 0, L_63, L_64, _stringLiteral76716CD1CBC956A4446CD3E11ED66F9B605A8437, /*hidden argument*/NULL);
		// OpTestAll(0, negInfinity, write, "zero negInfinity");
		uint32_t L_65 = V_5;
		bool L_66 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, 0, L_65, L_66, _stringLiteral0A98291D3C22476A51654CD896BDEBDF63CFB91D, /*hidden argument*/NULL);
		// List<uint> floatInputs = new List<uint>();
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_67 = (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)il2cpp_codegen_object_new(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_il2cpp_TypeInfo_var);
		List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56(L_67, /*hidden argument*/List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_RuntimeMethod_var);
		V_6 = L_67;
		goto IL_01eb;
	}

IL_01d4:
	{
		// floatInputs.Add(Convert.ToUInt32(floatBitsInputReader.ReadLine()));
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_68 = V_6;
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_69 = __this->get_floatBitsInputReader_12();
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_69);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_71;
		L_71 = Convert_ToUInt32_m4A3A2CDB59C68EDF67FF0A6DBD0C7DB206AFA805(L_70, /*hidden argument*/NULL);
		NullCheck(L_68);
		List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08(L_68, L_71, /*hidden argument*/List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_RuntimeMethod_var);
	}

IL_01eb:
	{
		// while (!floatBitsInputReader.EndOfStream)
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_72 = __this->get_floatBitsInputReader_12();
		NullCheck(L_72);
		bool L_73;
		L_73 = StreamReader_get_EndOfStream_m577D5B15A1100691A7AC9B4F6D6D0574EBADC5BA(L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_01d4;
		}
	}
	{
		// floatBitsInputReader.Close();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_74 = __this->get_floatBitsInputReader_12();
		NullCheck(L_74);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_74);
		// for (int i = 0; i < floatInputs.Count; i++)
		V_7 = 0;
		goto IL_0243;
	}

IL_0208:
	{
		// for (int j = i; j < floatInputs.Count; j++)
		int32_t L_75 = V_7;
		V_8 = L_75;
		goto IL_0232;
	}

IL_020e:
	{
		// OpTestAll(floatInputs[i], floatInputs[j], write, "Any");
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_76 = V_6;
		int32_t L_77 = V_7;
		NullCheck(L_76);
		uint32_t L_78;
		L_78 = List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline(L_76, L_77, /*hidden argument*/List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_79 = V_6;
		int32_t L_80 = V_8;
		NullCheck(L_79);
		uint32_t L_81;
		L_81 = List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline(L_79, L_80, /*hidden argument*/List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
		bool L_82 = ___write0;
		DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126(__this, L_78, L_81, L_82, _stringLiteral2CAE80AB1D51FBD688AC5F94AAEA5215A5AC646D, /*hidden argument*/NULL);
		// for (int j = i; j < floatInputs.Count; j++)
		int32_t L_83 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_0232:
	{
		// for (int j = i; j < floatInputs.Count; j++)
		int32_t L_84 = V_8;
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_85 = V_6;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_inline(L_85, /*hidden argument*/List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var);
		if ((((int32_t)L_84) < ((int32_t)L_86)))
		{
			goto IL_020e;
		}
	}
	{
		// for (int i = 0; i < floatInputs.Count; i++)
		int32_t L_87 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_0243:
	{
		// for (int i = 0; i < floatInputs.Count; i++)
		int32_t L_88 = V_7;
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_89 = V_6;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_inline(L_89, /*hidden argument*/List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var);
		if ((((int32_t)L_88) < ((int32_t)L_90)))
		{
			goto IL_0208;
		}
	}
	{
		// if (write)
		bool L_91 = ___write0;
		if (!L_91)
		{
			goto IL_02bd;
		}
	}
	{
		// floatResultsWriter.Close();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_92 = __this->get_floatResultsWriter_13();
		NullCheck(L_92);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_92);
		// dfloatResultsWriter.Close();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_93 = __this->get_dfloatResultsWriter_14();
		NullCheck(L_93);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_93);
		// Log($"Wrote {tests} C# results to {Path.Combine(Application.streamingAssetsPath, floatResultsFilename)}");
		int64_t L_94 = __this->get_tests_18();
		int64_t L_95 = L_94;
		RuntimeObject * L_96 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_95);
		String_t* L_97;
		L_97 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_98;
		L_98 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_97, _stringLiteral5B721CC7B4F0A64DA87E5F6B9B8BA8CB6C032AC7, /*hidden argument*/NULL);
		String_t* L_99;
		L_99 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral929A5166EB80B42C4EDFBEDDFAE33AD260D765DD, L_96, L_98, /*hidden argument*/NULL);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_99, /*hidden argument*/NULL);
		// Log($"Wrote {tests} native Rust results to {Path.Combine(Application.streamingAssetsPath, dfloatResultsFilename)}");
		int64_t L_100 = __this->get_tests_18();
		int64_t L_101 = L_100;
		RuntimeObject * L_102 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_101);
		String_t* L_103;
		L_103 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_104;
		L_104 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_103, _stringLiteralA33A73519FD14B2AEB009EAEDDC0CD3C583E9F1F, /*hidden argument*/NULL);
		String_t* L_105;
		L_105 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3A819DC351CC32C2E1D10A11585AE1973E3548AD, L_102, L_104, /*hidden argument*/NULL);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_105, /*hidden argument*/NULL);
		// }
		goto IL_02d3;
	}

IL_02bd:
	{
		// floatResultsReader.Dispose();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_106 = __this->get_floatResultsReader_15();
		NullCheck(L_106);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_106, /*hidden argument*/NULL);
		// dfloatResultsReader.Dispose();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_107 = __this->get_dfloatResultsReader_16();
		NullCheck(L_107);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_107, /*hidden argument*/NULL);
	}

IL_02d3:
	{
		// if (floatErrors + dfloatErrors > logOutputLimit)
		int64_t L_108 = __this->get_floatErrors_19();
		int64_t L_109 = __this->get_dfloatErrors_20();
		int64_t L_110 = __this->get_logOutputLimit_7();
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_108, (int64_t)L_109))) <= ((int64_t)L_110)))
		{
			goto IL_02f3;
		}
	}
	{
		// LogError("(Reached maximum amount of displayable errors.)");
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, _stringLiteralB2824CD9BC65FC147E19E8E26F22590068B6435F, /*hidden argument*/NULL);
	}

IL_02f3:
	{
		// if (!write)
		bool L_111 = ___write0;
		if (L_111)
		{
			goto IL_037a;
		}
	}
	{
		// Log($"Tested {tests} operations.");
		int64_t L_112 = __this->get_tests_18();
		int64_t L_113 = L_112;
		RuntimeObject * L_114 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_113);
		String_t* L_115;
		L_115 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralCA1BD3C5C5D4D1BE4D11CA8E1DE5D79C8AC7E713, L_114, /*hidden argument*/NULL);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_115, /*hidden argument*/NULL);
		// string floatMessage = $"{floatErrors} errors with C# float operations.";
		int64_t L_116 = __this->get_floatErrors_19();
		int64_t L_117 = L_116;
		RuntimeObject * L_118 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_117);
		String_t* L_119;
		L_119 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB9FFE474A93D2B148F578AD48D73DB1108827424, L_118, /*hidden argument*/NULL);
		V_9 = L_119;
		// if (floatErrors > 0)
		int64_t L_120 = __this->get_floatErrors_19();
		if ((((int64_t)L_120) <= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_033f;
		}
	}
	{
		// LogError(floatMessage);
		String_t* L_121 = V_9;
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, L_121, /*hidden argument*/NULL);
		goto IL_0347;
	}

IL_033f:
	{
		// Log(floatMessage);
		String_t* L_122 = V_9;
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_122, /*hidden argument*/NULL);
	}

IL_0347:
	{
		// string dfloatMessage = $"{dfloatErrors} errors with native (Rust) float operations.";
		int64_t L_123 = __this->get_dfloatErrors_20();
		int64_t L_124 = L_123;
		RuntimeObject * L_125 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_124);
		String_t* L_126;
		L_126 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral28FFE8F5A24FC76DF243029520909890CAF6F4C3, L_125, /*hidden argument*/NULL);
		V_10 = L_126;
		// if (dfloatErrors > 0)
		int64_t L_127 = __this->get_dfloatErrors_20();
		if ((((int64_t)L_127) <= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0372;
		}
	}
	{
		// LogError(dfloatMessage);
		String_t* L_128 = V_10;
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, L_128, /*hidden argument*/NULL);
		goto IL_037a;
	}

IL_0372:
	{
		// Log(dfloatMessage);
		String_t* L_129 = V_10;
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_129, /*hidden argument*/NULL);
	}

IL_037a:
	{
		// stopwatch.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_130 = V_0;
		NullCheck(L_130);
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_130, /*hidden argument*/NULL);
		// Log($"Arithmetic duration: {stopwatch.Elapsed.Milliseconds}ms");
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_131 = V_0;
		NullCheck(L_131);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_132;
		L_132 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_131, /*hidden argument*/NULL);
		V_11 = L_132;
		int32_t L_133;
		L_133 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_11), /*hidden argument*/NULL);
		int32_t L_134 = L_133;
		RuntimeObject * L_135 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_134);
		String_t* L_136;
		L_136 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4A431E5D7E353616953A12F2AE6461EA91E35B28, L_135, /*hidden argument*/NULL);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(__this, L_136, /*hidden argument*/NULL);
		// if (Application.isPlaying)
		bool L_137;
		L_137 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_137)
		{
			goto IL_03c1;
		}
	}
	{
		// output.text = log.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_138 = __this->get_output_6();
		StringBuilder_t * L_139 = __this->get_log_17();
		NullCheck(L_139);
		String_t* L_140;
		L_140 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_139);
		NullCheck(L_138);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_138, L_140);
	}

IL_03c1:
	{
		// }
		return;
	}
}
// System.Void DeterminismTest::OpTestAll(System.UInt32,System.UInt32,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_OpTestAll_mF5D49F3866BD45964EE13CA7723EFAE6F31EF126 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, bool ___write2, String_t* ___messagePrefix3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// Operator op = (Operator)i;
		int32_t L_0 = V_0;
		V_1 = L_0;
		// OpTest(a, b, op, write, messagePrefix);
		uint32_t L_1 = ___a0;
		uint32_t L_2 = ___b1;
		int32_t L_3 = V_1;
		bool L_4 = ___write2;
		String_t* L_5 = ___messagePrefix3;
		DeterminismTest_OpTest_mACB191A7C96E1D848FBD98B882599FE5B395E574(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0016:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DeterminismTest::OpTest(System.UInt32,System.UInt32,DeterminismTest/Operator,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_OpTest_mACB191A7C96E1D848FBD98B882599FE5B395E574 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, int32_t ___op2, bool ___write3, String_t* ___messagePrefix4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Operator_t50F9D7CE958EE720975C8B3D9E21EC2BC84D29C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral391F0D0044D653231640C3CB4CBEBBAB6C72046F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DC4080B87EC23E478DA20D4FAF52C1A9B89175);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		// Operate(a, b, op, out float floatResult, out dfloat dfloatResult);
		uint32_t L_0 = ___a0;
		uint32_t L_1 = ___b1;
		int32_t L_2 = ___op2;
		DeterminismTest_Operate_mA63C2DF25461CF9A3FCBAD7964ECC4AAB0C5ED3F(__this, L_0, L_1, L_2, (float*)(&V_0), (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *)(&V_1), /*hidden argument*/NULL);
		// if (write)
		bool L_3 = ___write3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// floatResultsWriter.WriteLine(FloatToBits(floatResult));
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = __this->get_floatResultsWriter_13();
		float L_5 = V_0;
		uint32_t L_6;
		L_6 = DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< uint32_t >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.UInt32) */, L_4, L_6);
		// dfloatResultsWriter.WriteLine(dfloatResult.Bits);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = __this->get_dfloatResultsWriter_14();
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_8 = V_1;
		uint32_t L_9 = L_8.get_Bits_0();
		NullCheck(L_7);
		VirtActionInvoker1< uint32_t >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.UInt32) */, L_7, L_9);
		// }
		goto IL_0156;
	}

IL_0039:
	{
		// uint floatTruth = Convert.ToUInt32(floatResultsReader.ReadLine());
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_10 = __this->get_floatResultsReader_15();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = Convert_ToUInt32_m4A3A2CDB59C68EDF67FF0A6DBD0C7DB206AFA805(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// uint dfloatTruth = Convert.ToUInt32(dfloatResultsReader.ReadLine());
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_13 = __this->get_dfloatResultsReader_16();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_13);
		uint32_t L_15;
		L_15 = Convert_ToUInt32_m4A3A2CDB59C68EDF67FF0A6DBD0C7DB206AFA805(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// bool floatPass = FloatToBits(floatResult) == floatTruth || (treatAllNaNAlike && float.IsNaN(floatResult) && float.IsNaN(BitsToFloat(floatTruth)));
		float L_16 = V_0;
		uint32_t L_17;
		L_17 = DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68(__this, L_16, /*hidden argument*/NULL);
		uint32_t L_18 = V_2;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_0086;
		}
	}
	{
		bool L_19 = __this->get_treatAllNaNAlike_5();
		if (!L_19)
		{
			goto IL_0083;
		}
	}
	{
		float L_20 = V_0;
		bool L_21;
		L_21 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		uint32_t L_22 = V_2;
		float L_23;
		L_23 = DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3(__this, L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_23, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_24));
		goto IL_0087;
	}

IL_0083:
	{
		G_B8_0 = 0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B8_0 = 1;
	}

IL_0087:
	{
		// bool dfloatPass = dfloatResult.Bits == dfloatTruth || (treatAllNaNAlike && float.IsNaN(dfloat.AsNonDetermFloat(dfloatResult)) && float.IsNaN(BitsToFloat(dfloatTruth)));
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_25 = V_1;
		uint32_t L_26 = L_25.get_Bits_0();
		uint32_t L_27 = V_3;
		G_B9_0 = G_B8_0;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			G_B13_0 = G_B8_0;
			goto IL_00b6;
		}
	}
	{
		bool L_28 = __this->get_treatAllNaNAlike_5();
		G_B10_0 = G_B9_0;
		if (!L_28)
		{
			G_B12_0 = G_B9_0;
			goto IL_00b3;
		}
	}
	{
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_29 = V_1;
		float L_30;
		L_30 = dfloat_AsNonDetermFloat_mEE56F65874FF31C7D5FB9C7D1776CE67D197F2B6(L_29, /*hidden argument*/NULL);
		bool L_31;
		L_31 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_30, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_31)
		{
			G_B12_0 = G_B10_0;
			goto IL_00b3;
		}
	}
	{
		uint32_t L_32 = V_3;
		float L_33;
		L_33 = DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3(__this, L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_33, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)(L_34));
		G_B14_1 = G_B11_0;
		goto IL_00b7;
	}

IL_00b3:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
	}

IL_00b7:
	{
		V_4 = (bool)G_B14_0;
		// if (!floatPass)
		if (G_B14_1)
		{
			goto IL_0107;
		}
	}
	{
		// floatErrors++;
		int64_t L_35 = __this->get_floatErrors_19();
		__this->set_floatErrors_19(((int64_t)il2cpp_codegen_add((int64_t)L_35, (int64_t)((int64_t)((int64_t)1)))));
		// if (floatErrors + dfloatErrors < logOutputLimit)
		int64_t L_36 = __this->get_floatErrors_19();
		int64_t L_37 = __this->get_dfloatErrors_20();
		int64_t L_38 = __this->get_logOutputLimit_7();
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_36, (int64_t)L_37))) >= ((int64_t)L_38)))
		{
			goto IL_0107;
		}
	}
	{
		// LogError($"{messagePrefix} {op} for float: {GetResultString(a, b, FloatToBits(floatResult), floatTruth)}");
		String_t* L_39 = ___messagePrefix4;
		int32_t L_40 = ___op2;
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Operator_t50F9D7CE958EE720975C8B3D9E21EC2BC84D29C7_il2cpp_TypeInfo_var, &L_41);
		uint32_t L_43 = ___a0;
		uint32_t L_44 = ___b1;
		float L_45 = V_0;
		uint32_t L_46;
		L_46 = DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68(__this, L_45, /*hidden argument*/NULL);
		uint32_t L_47 = V_2;
		String_t* L_48;
		L_48 = DeterminismTest_GetResultString_mCC3B02AB81B29BDD959E84F775DC1579809FCEDA(__this, L_43, L_44, L_46, L_47, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral391F0D0044D653231640C3CB4CBEBBAB6C72046F, L_39, L_42, L_48, /*hidden argument*/NULL);
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, L_49, /*hidden argument*/NULL);
	}

IL_0107:
	{
		// if (!dfloatPass)
		bool L_50 = V_4;
		if (L_50)
		{
			goto IL_0156;
		}
	}
	{
		// dfloatErrors++;
		int64_t L_51 = __this->get_dfloatErrors_20();
		__this->set_dfloatErrors_20(((int64_t)il2cpp_codegen_add((int64_t)L_51, (int64_t)((int64_t)((int64_t)1)))));
		// if (floatErrors + dfloatErrors < logOutputLimit)
		int64_t L_52 = __this->get_floatErrors_19();
		int64_t L_53 = __this->get_dfloatErrors_20();
		int64_t L_54 = __this->get_logOutputLimit_7();
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_52, (int64_t)L_53))) >= ((int64_t)L_54)))
		{
			goto IL_0156;
		}
	}
	{
		// LogError($"{messagePrefix} {op} for dfloat: {GetResultString(a, b, dfloatResult.Bits, dfloatTruth)}");
		String_t* L_55 = ___messagePrefix4;
		int32_t L_56 = ___op2;
		int32_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Operator_t50F9D7CE958EE720975C8B3D9E21EC2BC84D29C7_il2cpp_TypeInfo_var, &L_57);
		uint32_t L_59 = ___a0;
		uint32_t L_60 = ___b1;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_61 = V_1;
		uint32_t L_62 = L_61.get_Bits_0();
		uint32_t L_63 = V_3;
		String_t* L_64;
		L_64 = DeterminismTest_GetResultString_mCC3B02AB81B29BDD959E84F775DC1579809FCEDA(__this, L_59, L_60, L_62, L_63, /*hidden argument*/NULL);
		String_t* L_65;
		L_65 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral61DC4080B87EC23E478DA20D4FAF52C1A9B89175, L_55, L_58, L_64, /*hidden argument*/NULL);
		DeterminismTest_LogError_mEE72A8E81065692252E37F6C795D546F63BB62B2(__this, L_65, /*hidden argument*/NULL);
	}

IL_0156:
	{
		// tests++;
		int64_t L_66 = __this->get_tests_18();
		__this->set_tests_18(((int64_t)il2cpp_codegen_add((int64_t)L_66, (int64_t)((int64_t)((int64_t)1)))));
		// }
		return;
	}
}
// System.Void DeterminismTest::Operate(System.UInt32,System.UInt32,DeterminismTest/Operator,System.Single&,dfloat&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest_Operate_mA63C2DF25461CF9A3FCBAD7964ECC4AAB0C5ED3F (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, int32_t ___op2, float* ___floatResult3, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * ___dfloatResult4, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float floatA = BitsToFloat(a);
		uint32_t L_0 = ___a0;
		float L_1;
		L_1 = DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// float floatB = BitsToFloat(b);
		uint32_t L_2 = ___b1;
		float L_3;
		L_3 = DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = ___op2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0066;
			}
			case 3:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_0028:
	{
		// floatResult = floatA + floatB;
		float* L_5 = ___floatResult3;
		float L_6 = V_0;
		float L_7 = V_1;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)L_7));
		// dfloatResult = Mathd.Add(new dfloat(a), new dfloat(b));
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * L_8 = ___dfloatResult4;
		uint32_t L_9 = ___a0;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_10;
		memset((&L_10), 0, sizeof(L_10));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_10), L_9, /*hidden argument*/NULL);
		uint32_t L_11 = ___b1;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_12;
		memset((&L_12), 0, sizeof(L_12));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_12), L_11, /*hidden argument*/NULL);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_13;
		L_13 = Mathd_Add_m614D18FE4883FA30E6BF84C598E558755B56A61B(L_10, L_12, /*hidden argument*/NULL);
		*(dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *)L_8 = L_13;
		// break;
		return;
	}

IL_0047:
	{
		// floatResult = floatA - floatB;
		float* L_14 = ___floatResult3;
		float L_15 = V_0;
		float L_16 = V_1;
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_16));
		// dfloatResult = Mathd.Sub(new dfloat(a), new dfloat(b));
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * L_17 = ___dfloatResult4;
		uint32_t L_18 = ___a0;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_19;
		memset((&L_19), 0, sizeof(L_19));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_19), L_18, /*hidden argument*/NULL);
		uint32_t L_20 = ___b1;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_21;
		memset((&L_21), 0, sizeof(L_21));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_21), L_20, /*hidden argument*/NULL);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_22;
		L_22 = Mathd_Sub_mD6B67692AFB37854D9B9D2FB1FB01E752734A47B(L_19, L_21, /*hidden argument*/NULL);
		*(dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *)L_17 = L_22;
		// break;
		return;
	}

IL_0066:
	{
		// floatResult = floatA * floatB;
		float* L_23 = ___floatResult3;
		float L_24 = V_0;
		float L_25 = V_1;
		*((float*)L_23) = (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25));
		// dfloatResult = Mathd.Mul(new dfloat(a), new dfloat(b));
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * L_26 = ___dfloatResult4;
		uint32_t L_27 = ___a0;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_28;
		memset((&L_28), 0, sizeof(L_28));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_28), L_27, /*hidden argument*/NULL);
		uint32_t L_29 = ___b1;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_30;
		memset((&L_30), 0, sizeof(L_30));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_30), L_29, /*hidden argument*/NULL);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_31;
		L_31 = Mathd_Mul_m389C81B71FE7482C31A6AE298C74F90069C7FD79(L_28, L_30, /*hidden argument*/NULL);
		*(dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *)L_26 = L_31;
		// break;
		return;
	}

IL_0085:
	{
		// floatResult = floatA / floatB;
		float* L_32 = ___floatResult3;
		float L_33 = V_0;
		float L_34 = V_1;
		*((float*)L_32) = (float)((float)((float)L_33/(float)L_34));
		// dfloatResult = Mathd.Div(new dfloat(a), new dfloat(b));
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * L_35 = ___dfloatResult4;
		uint32_t L_36 = ___a0;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_37;
		memset((&L_37), 0, sizeof(L_37));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_37), L_36, /*hidden argument*/NULL);
		uint32_t L_38 = ___b1;
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_39;
		memset((&L_39), 0, sizeof(L_39));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_39), L_38, /*hidden argument*/NULL);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_40;
		L_40 = Mathd_Div_m31DCEAC56DF57867BD8FB66D3DDFD83EB3FE021F(L_37, L_39, /*hidden argument*/NULL);
		*(dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *)L_35 = L_40;
		// break;
		return;
	}

IL_00a4:
	{
		// throw new Exception("Unknown operator.");
		Exception_t * L_41 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB69F5B765EEC7677601BB4FF52A7A4D7D8E3313F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeterminismTest_Operate_mA63C2DF25461CF9A3FCBAD7964ECC4AAB0C5ED3F_RuntimeMethod_var)));
	}
}
// System.String DeterminismTest::GetResultString(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeterminismTest_GetResultString_mCC3B02AB81B29BDD959E84F775DC1579809FCEDA (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___a0, uint32_t ___b1, uint32_t ___result2, uint32_t ___truth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCBAE596892D1B55902BFF891A0598A5BAFA282);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3973FF56BDED4B1E78DAB4319B56262F27BB95D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CC10345C1C7ABA39C3F985889BB8B611C58A19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"result {FloatBitsToVerboseString(result) } != truth {FloatBitsToVerboseString(truth) }\n" +
		//        $"Inputs: {FloatBitsToVerboseString(a) } * {FloatBitsToVerboseString(b) }";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3973FF56BDED4B1E78DAB4319B56262F27BB95D0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3973FF56BDED4B1E78DAB4319B56262F27BB95D0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		uint32_t L_3 = ___result2;
		String_t* L_4;
		L_4 = DeterminismTest_FloatBitsToVerboseString_m89FEABC05F631A296727A96C98016F1FB99BEDF7(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralC3CC10345C1C7ABA39C3F985889BB8B611C58A19);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC3CC10345C1C7ABA39C3F985889BB8B611C58A19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		uint32_t L_7 = ___truth3;
		String_t* L_8;
		L_8 = DeterminismTest_FloatBitsToVerboseString_m89FEABC05F631A296727A96C98016F1FB99BEDF7(__this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral2DCBAE596892D1B55902BFF891A0598A5BAFA282);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2DCBAE596892D1B55902BFF891A0598A5BAFA282);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		uint32_t L_11 = ___a0;
		String_t* L_12;
		L_12 = DeterminismTest_FloatBitsToVerboseString_m89FEABC05F631A296727A96C98016F1FB99BEDF7(__this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral77793DF87854A30D202EA3C188F1A4F21D4DDCBD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		uint32_t L_15 = ___b1;
		String_t* L_16;
		L_16 = DeterminismTest_FloatBitsToVerboseString_m89FEABC05F631A296727A96C98016F1FB99BEDF7(__this, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_14, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String DeterminismTest::FloatBitsToVerboseString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeterminismTest_FloatBitsToVerboseString_m89FEABC05F631A296727A96C98016F1FB99BEDF7 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___bits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35EE5156181C772EB7E5BFC713FCD9E98920835D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{ BitsToFloat(bits)}f : { Convert.ToString(bits, 2).PadLeft(32, '0')} : {bits}";
		uint32_t L_0 = ___bits0;
		float L_1;
		L_1 = DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3(__this, L_0, /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		uint32_t L_4 = ___bits0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Convert_ToString_m06FCEEC9F8C5434D0A2530635B46751F049A477D(((int64_t)((uint64_t)L_4)), 2, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_PadLeft_m7666BD115C91CF7F69642532F4CA9B0726C0A328(L_5, ((int32_t)32), ((int32_t)48), /*hidden argument*/NULL);
		uint32_t L_7 = ___bits0;
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral35EE5156181C772EB7E5BFC713FCD9E98920835D, L_3, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Single DeterminismTest::BitsToFloat(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DeterminismTest_BitsToFloat_m8E075CAC4612D54C410379A7A18709C2AB3A40F3 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, uint32_t ___bits0, const RuntimeMethod* method)
{
	{
		// return *(float*)&bits;
		float L_0 = *((float*)((uintptr_t)(&___bits0)));
		return L_0;
	}
}
// System.UInt32 DeterminismTest::FloatToBits(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DeterminismTest_FloatToBits_mFB85167878094A38D4851A21AA8B293E60384D68 (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// return *(uint*)&f;
		int32_t L_0 = *((uint32_t*)((uintptr_t)(&___f0)));
		return L_0;
	}
}
// System.Void DeterminismTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeterminismTest__ctor_m44887B49A7B53B64AA4667F3C36DEB23BA31773C (DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * __this, const RuntimeMethod* method)
{
	{
		// int count = 100;
		__this->set_count_4(((int32_t)100));
		// long logOutputLimit = 100;
		__this->set_logOutputLimit_7(((int64_t)((int64_t)((int32_t)100))));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.UInt32 Mathd::float_add(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_add_m93807296E1D05BF400D23ABB88048357D75673A1 (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_unity_rust_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unity_rust"), "float_add", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(float_add)(___a0, ___b1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___a0, ___b1);
	#endif

	return returnValue;
}
// System.UInt32 Mathd::float_sub(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_sub_mFD104DA377CD4D9B3C3A933A812A78055AD34D55 (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_unity_rust_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unity_rust"), "float_sub", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(float_sub)(___a0, ___b1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___a0, ___b1);
	#endif

	return returnValue;
}
// System.UInt32 Mathd::float_mul(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_mul_m3CE14A4B840F6027B42EC2B867FB32B2E4A7F252 (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_unity_rust_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unity_rust"), "float_mul", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(float_mul)(___a0, ___b1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___a0, ___b1);
	#endif

	return returnValue;
}
// System.UInt32 Mathd::float_div(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mathd_float_div_mC869252BEBD84D645FF48AE1AE9572EF9641851D (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_unity_rust_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unity_rust"), "float_div", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_unity_rust_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(float_div)(___a0, ___b1);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___a0, ___b1);
	#endif

	return returnValue;
}
// dfloat Mathd::Add(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Add_m614D18FE4883FA30E6BF84C598E558755B56A61B (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method)
{
	{
		// uint bits = float_add(a.Bits, b.Bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_0 = ___a0;
		uint32_t L_1 = L_0.get_Bits_0();
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_2 = ___b1;
		uint32_t L_3 = L_2.get_Bits_0();
		uint32_t L_4;
		L_4 = Mathd_float_add_m93807296E1D05BF400D23ABB88048357D75673A1(L_1, L_3, /*hidden argument*/NULL);
		// return new dfloat(bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_5;
		memset((&L_5), 0, sizeof(L_5));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_5), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// dfloat Mathd::Sub(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Sub_mD6B67692AFB37854D9B9D2FB1FB01E752734A47B (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method)
{
	{
		// uint bits = float_sub(a.Bits, b.Bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_0 = ___a0;
		uint32_t L_1 = L_0.get_Bits_0();
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_2 = ___b1;
		uint32_t L_3 = L_2.get_Bits_0();
		uint32_t L_4;
		L_4 = Mathd_float_sub_mFD104DA377CD4D9B3C3A933A812A78055AD34D55(L_1, L_3, /*hidden argument*/NULL);
		// return new dfloat(bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_5;
		memset((&L_5), 0, sizeof(L_5));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_5), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// dfloat Mathd::Mul(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Mul_m389C81B71FE7482C31A6AE298C74F90069C7FD79 (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method)
{
	{
		// uint bits = float_mul(a.Bits, b.Bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_0 = ___a0;
		uint32_t L_1 = L_0.get_Bits_0();
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_2 = ___b1;
		uint32_t L_3 = L_2.get_Bits_0();
		uint32_t L_4;
		L_4 = Mathd_float_mul_m3CE14A4B840F6027B42EC2B867FB32B2E4A7F252(L_1, L_3, /*hidden argument*/NULL);
		// return new dfloat(bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_5;
		memset((&L_5), 0, sizeof(L_5));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_5), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// dfloat Mathd::Div(dfloat,dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  Mathd_Div_m31DCEAC56DF57867BD8FB66D3DDFD83EB3FE021F (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___a0, dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___b1, const RuntimeMethod* method)
{
	{
		// uint bits = float_div(a.Bits, b.Bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_0 = ___a0;
		uint32_t L_1 = L_0.get_Bits_0();
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_2 = ___b1;
		uint32_t L_3 = L_2.get_Bits_0();
		uint32_t L_4;
		L_4 = Mathd_float_div_mC869252BEBD84D645FF48AE1AE9572EF9641851D(L_1, L_3, /*hidden argument*/NULL);
		// return new dfloat(bits);
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_5;
		memset((&L_5), 0, sizeof(L_5));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_5), L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Menu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Awake_mC6D9273D153EC4E830E40BC8820105394CE6835B (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_U3CAwakeU3Eb__4_0_m9A9C5399BC1A6862F1CEB942556B92B94EACDAB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Menu_U3CAwakeU3Eb__4_1_m6C50C5D96749DF8ECCD7367E9567D0EC7D91FC69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// generateGroundTruthButton.onClick.AddListener(() => GenerateGroundTruth());
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_generateGroundTruthButton_4();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)Menu_U3CAwakeU3Eb__4_0_m9A9C5399BC1A6862F1CEB942556B92B94EACDAB9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// runTestButton.onClick.AddListener(() => RunTest());
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_runTestButton_5();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)Menu_U3CAwakeU3Eb__4_1_m6C50C5D96749DF8ECCD7367E9567D0EC7D91FC69_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// testUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_testUI_7();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// menuUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_menuUI_6();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::GenerateGroundTruth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_GenerateGroundTruth_m7AD2C24D55BCE1ED0C9E8A9F147DCEEAF7304FFA (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<DeterminismTest>().GenerateGroundTruth();
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_0;
		L_0 = Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE(__this, /*hidden argument*/Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE_RuntimeMethod_var);
		NullCheck(L_0);
		DeterminismTest_GenerateGroundTruth_mF8FAF39883AC19126F1F14D7937B723D134A47C3(L_0, /*hidden argument*/NULL);
		// testUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_testUI_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// menuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_menuUI_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::RunTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_RunTest_m1EB6F8D989935937B1062CC3280744A9C62A43D9 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<DeterminismTest>().RunTest();
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_0;
		L_0 = Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE(__this, /*hidden argument*/Component_GetComponent_TisDeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF_m71E6E603961198A7E81501CC24DEBD15F648FEFE_RuntimeMethod_var);
		NullCheck(L_0);
		DeterminismTest_RunTest_mDC0C393F17A0C68235E4B09542BA3B71157F9CD8(L_0, /*hidden argument*/NULL);
		// testUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_testUI_7();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// menuUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_menuUI_6();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::<Awake>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_U3CAwakeU3Eb__4_0_m9A9C5399BC1A6862F1CEB942556B92B94EACDAB9 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// generateGroundTruthButton.onClick.AddListener(() => GenerateGroundTruth());
		Menu_GenerateGroundTruth_m7AD2C24D55BCE1ED0C9E8A9F147DCEEAF7304FFA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::<Awake>b__4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_U3CAwakeU3Eb__4_1_m6C50C5D96749DF8ECCD7367E9567D0EC7D91FC69 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		// runTestButton.onClick.AddListener(() => RunTest());
		Menu_RunTest_m1EB6F8D989935937B1062CC3280744A9C62A43D9(__this, /*hidden argument*/NULL);
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
// System.Void dfloat::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * __this, uint32_t ___bits0, const RuntimeMethod* method)
{
	{
		// Bits = bits;
		uint32_t L_0 = ___bits0;
		__this->set_Bits_0(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_AdjustorThunk (RuntimeObject * __this, uint32_t ___bits0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * _thisAdjusted = reinterpret_cast<dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *>(__this + _offset);
	dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline(_thisAdjusted, ___bits0, method);
}
// System.String dfloat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* dfloat_ToString_m6321E14CED87EC0C4D9620AC5214652A42702BF2 (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return AsNonDetermFloat(this).ToString();
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_0 = (*(dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *)__this);
		float L_1;
		L_1 = dfloat_AsNonDetermFloat_mEE56F65874FF31C7D5FB9C7D1776CE67D197F2B6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* dfloat_ToString_m6321E14CED87EC0C4D9620AC5214652A42702BF2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * _thisAdjusted = reinterpret_cast<dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = dfloat_ToString_m6321E14CED87EC0C4D9620AC5214652A42702BF2(_thisAdjusted, method);
	return _returnValue;
}
// dfloat dfloat::FromNonDetermFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  dfloat_FromNonDetermFloat_m0A34ACA0BF2AD485CDE7CCC1186DCA0B8978FEB4 (float ___f0, const RuntimeMethod* method)
{
	{
		// return new dfloat(*(uint*)&f);
		int32_t L_0 = *((uint32_t*)((uintptr_t)(&___f0)));
		dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  L_1;
		memset((&L_1), 0, sizeof(L_1));
		dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single dfloat::AsNonDetermFloat(dfloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float dfloat_AsNonDetermFloat_mEE56F65874FF31C7D5FB9C7D1776CE67D197F2B6 (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2  ___df0, const RuntimeMethod* method)
{
	{
		// return *(float*)&df.Bits;
		uint32_t* L_0 = (&___df0)->get_address_of_Bits_0();
		float L_1 = *((float*)((uintptr_t)L_0));
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
// System.Void DeterminismTest/<LoadReaders>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadReadersU3Ed__24__ctor_mAE66A167EBD8D3BD26A4A4858F368DB503DD2288 (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DeterminismTest/<LoadReaders>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadReadersU3Ed__24_System_IDisposable_Dispose_m4E9F70D680CBFA137AB89B7AF0BC56A3AA836A8C (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DeterminismTest/<LoadReaders>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadReadersU3Ed__24_MoveNext_m42C0F425AE036483F3CA92BEE0D41846CCFE6BC6 (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral026BD85BC66333D6BAD0B77CC1318FC615342F5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B721CC7B4F0A64DA87E5F6B9B8BA8CB6C032AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A73519FD14B2AEB009EAEDDC0CD3C583E9F1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00d7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UnityWebRequest inputsReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatInputsFilename));
		String_t* L_3;
		L_3 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_3, _stringLiteral026BD85BC66333D6BAD0B77CC1318FC615342F5F, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5;
		L_5 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_4, /*hidden argument*/NULL);
		__this->set_U3CinputsReqU3E5__2_3(L_5);
		// UnityWebRequest floatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatResultsFilename));
		String_t* L_6;
		L_6 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_6, _stringLiteral5B721CC7B4F0A64DA87E5F6B9B8BA8CB6C032AC7, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8;
		L_8 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_7, /*hidden argument*/NULL);
		__this->set_U3CfloatReqU3E5__3_4(L_8);
		// UnityWebRequest dfloatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, dfloatResultsFilename));
		String_t* L_9;
		L_9 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_9, _stringLiteralA33A73519FD14B2AEB009EAEDDC0CD3C583E9F1F, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11;
		L_11 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_10, /*hidden argument*/NULL);
		__this->set_U3CdfloatReqU3E5__4_5(L_11);
		// yield return inputsReq.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CinputsReqU3E5__2_3();
		NullCheck(L_12);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_13;
		L_13 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0095:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return floatReq.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CfloatReqU3E5__3_4();
		NullCheck(L_14);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_15;
		L_15 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00b6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return dfloatReq.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CdfloatReqU3E5__4_5();
		NullCheck(L_16);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_17;
		L_17 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_16, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00d7:
	{
		__this->set_U3CU3E1__state_0((-1));
		// floatBitsInputReader = new StreamReader(new MemoryStream(inputsReq.downloadHandler.data));
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_18 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = __this->get_U3CinputsReqU3E5__2_3();
		NullCheck(L_19);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_20;
		L_20 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
		L_21 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_20, /*hidden argument*/NULL);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_22 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_22, L_21, /*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_23 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905(L_23, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_floatBitsInputReader_12(L_23);
		// floatResultsReader = new StreamReader(new MemoryStream(floatReq.downloadHandler.data));
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_24 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_25 = __this->get_U3CfloatReqU3E5__3_4();
		NullCheck(L_25);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_26;
		L_26 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
		L_27 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_26, /*hidden argument*/NULL);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_28 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_28, L_27, /*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_29 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905(L_29, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_floatResultsReader_15(L_29);
		// dfloatResultsReader = new StreamReader(new MemoryStream(dfloatReq.downloadHandler.data));
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_30 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_31 = __this->get_U3CdfloatReqU3E5__4_5();
		NullCheck(L_31);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_32;
		L_32 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33;
		L_33 = DownloadHandler_get_data_m3AE551AAE6BF21279435D386E76EA7084CC037D3(L_32, /*hidden argument*/NULL);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_34 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_34, L_33, /*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_35 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905(L_35, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_dfloatResultsReader_16(L_35);
		// }
		return (bool)0;
	}
}
// System.Object DeterminismTest/<LoadReaders>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadReadersU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2A7756B4140A34B04A9D06C8A9EBD4080D325B6 (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DeterminismTest/<LoadReaders>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadReadersU3Ed__24_System_Collections_IEnumerator_Reset_m6842E49E39115106707FD460EFF837D28251081A (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadReadersU3Ed__24_System_Collections_IEnumerator_Reset_m6842E49E39115106707FD460EFF837D28251081A_RuntimeMethod_var)));
	}
}
// System.Object DeterminismTest/<LoadReaders>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadReadersU3Ed__24_System_Collections_IEnumerator_get_Current_m1C9A0D39D8F369C2CDF241ADFF23BCBFFB6726E0 (U3CLoadReadersU3Ed__24_tEA870BC82E17FF8A079580BA3F97BF3FC4B26226 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void DeterminismTest/<RunTestRoutine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTestRoutineU3Ed__23__ctor_mC4A6C57BE859DC9576B02AF6AE5851F102045E5B (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DeterminismTest/<RunTestRoutine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTestRoutineU3Ed__23_System_IDisposable_Dispose_m431554732B8033AFA5051A3AF1A19369BF166952 (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DeterminismTest/<RunTestRoutine>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunTestRoutineU3Ed__23_MoveNext_mA1CBD375B2B73C9581384709054E9646F9B105D0 (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CBE4A47CADDAC94C9DDDF4BFBBD52E03FB4718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA13A49A53E9095A1DEE34612C934AC6133B25F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * V_1 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Log("Loading test inputs...");
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_4 = V_1;
		NullCheck(L_4);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(L_4, _stringLiteralD5CBE4A47CADDAC94C9DDDF4BFBBD52E03FB4718, /*hidden argument*/NULL);
		// output.text = log.ToString();
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_5 = V_1;
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5->get_output_6();
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_7 = V_1;
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_log_17();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// var stopwatch = new System.Diagnostics.Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_10 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_10, /*hidden argument*/NULL);
		__this->set_U3CstopwatchU3E5__2_3(L_10);
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_11 = __this->get_U3CstopwatchU3E5__2_3();
		NullCheck(L_11);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_11, /*hidden argument*/NULL);
		// yield return StartCoroutine(LoadReaders());
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_12 = V_1;
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = DeterminismTest_LoadReaders_m2F0B73997E7B0B4A3816B38B94C062B7073AEC76(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_12, L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0070:
	{
		__this->set_U3CU3E1__state_0((-1));
		// stopwatch.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_16 = __this->get_U3CstopwatchU3E5__2_3();
		NullCheck(L_16);
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63(L_16, /*hidden argument*/NULL);
		// Log($"Loading inputs/truths duration: {stopwatch.Elapsed.Milliseconds}ms");
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_17 = V_1;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_18 = __this->get_U3CstopwatchU3E5__2_3();
		NullCheck(L_18);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_19;
		L_19 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		int32_t L_20;
		L_20 = TimeSpan_get_Milliseconds_m7DCE7C8875295A46F8A3ED0326F498F30D1F9BEE((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFFA13A49A53E9095A1DEE34612C934AC6133B25F, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		DeterminismTest_Log_mFE1877809C42A1B5B30C171F1311A6C483A2EA26(L_17, L_23, /*hidden argument*/NULL);
		// output.text = log.ToString();
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_24 = V_1;
		NullCheck(L_24);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = L_24->get_output_6();
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_26 = V_1;
		NullCheck(L_26);
		StringBuilder_t * L_27 = L_26->get_log_17();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_28);
		// Execute(false);
		DeterminismTest_t83BF9EFED10D347840E16D8A8B8654DECE9B4FCF * L_29 = V_1;
		NullCheck(L_29);
		DeterminismTest_Execute_m388F62A01A7E2BCE1A68D853E754A56F7DB6ADAE(L_29, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DeterminismTest/<RunTestRoutine>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunTestRoutineU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m81B2D3DBBD0A99974C9B7D236F89C3E92C0FEA8F (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DeterminismTest/<RunTestRoutine>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTestRoutineU3Ed__23_System_Collections_IEnumerator_Reset_mB0638F5635235820DDDD523A004DA58FD807D524 (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunTestRoutineU3Ed__23_System_Collections_IEnumerator_Reset_mB0638F5635235820DDDD523A004DA58FD807D524_RuntimeMethod_var)));
	}
}
// System.Object DeterminismTest/<RunTestRoutine>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunTestRoutineU3Ed__23_System_Collections_IEnumerator_get_Current_mD736E60C46DBC8B04047393E19544BC67607805B (U3CRunTestRoutineU3Ed__23_t9C43AAFAC109151DB7FA343A9CE3A6074E10EBBF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void dfloat__ctor_mD6FE778845B4F9175B49E603928E847C78C047FE_inline (dfloat_tEEEF983785D22C6E1414C5FE843067B3F04AD1A2 * __this, uint32_t ___bits0, const RuntimeMethod* method)
{
	{
		// Bits = bits;
		uint32_t L_0 = ___bits0;
		__this->set_Bits_0(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)__this->get__items_1();
		int32_t L_3 = ___index0;
		uint32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_2, (int32_t)L_3);
		return (uint32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
