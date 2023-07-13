#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// EasyTransition.TransitionManager[]
struct TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BookColision
struct BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6;
// BookCounter
struct BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EasyTransition.CutoutMaskUI
struct CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EasyTransition.DemoLoadScene
struct DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// MainMenuScript
struct MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// ShelfManager
struct ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F;
// Slot
struct Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// EasyTransition.Transition
struct Transition_t39D9D02D5CD62874417708B94489C9786D4E582B;
// EasyTransition.TransitionManager
struct TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C;
// EasyTransition.TransitionSettings
struct TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// WinButtons
struct WinButtons_tC092887387A177E641331CCCFC77D0F55F3865E3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// shelf
struct shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// EasyTransition.TransitionManager/<Start>d__15
struct U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43;
// EasyTransition.TransitionManager/<Timer>d__12
struct U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA;
// EasyTransition.TransitionManager/<Timer>d__13
struct U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327;
// EasyTransition.TransitionManager/<Timer>d__14
struct U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24;

IL2CPP_EXTERN_C RuntimeClass* BookType_tAE297806BDE9F0F4327B087A9C378AB62928F041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShelfType_t433B9AE9DFAF83B954474580959B1E6B7480E551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26;
IL2CPP_EXTERN_C String_t* _stringLiteral078E14735EE684F69282FFE94BDE152096DD68F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEAD6B2BFD82FD8CA47BF3CF8F052CED9EA79AA;
IL2CPP_EXTERN_C String_t* _stringLiteralB5820BB1A44EEDECCBF74FAC22FF63371F9B5C5C;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralBCD5FE87E4DCE559E0C8EB8CF8F44FD91159E566;
IL2CPP_EXTERN_C String_t* _stringLiteralDCE77F0FA90F9FC92838909498CA9FBDD29B8DA8;
IL2CPP_EXTERN_C String_t* _stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D68D42D01BE44A952EF4BA2DB5FDCF516A5E76;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6_m70F6D76C702F3A4FCF9E98EBD3933857FB4D8127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F_mFDF953D77849E32485E5D1BA99F630E729C5690A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisshelf_t2B60F3A81C201834C05E4B3B12B004013AB21613_m7F21A4D92034ED2F51BB0C774F53F36F95D4317F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_m543FFCF10310A057B0649F6DBDE9973AAE866FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__12_System_Collections_IEnumerator_Reset_mC8685C0C1008A7F349736CCBEF5DFC8D20A51D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__13_System_Collections_IEnumerator_Reset_m7DB493B01CB2F8558E5F3B7043C8AFA98D1BF13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__14_System_Collections_IEnumerator_Reset_m73D9974A940C1435742E8CECBF31ED793EACA33B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// EasyTransition.TransitionManager/<Start>d__15
struct U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Start>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Start>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Start>d__15::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_2;
	// System.Int32 EasyTransition.TransitionManager/<Start>d__15::<managerCount>5__1
	int32_t ___U3CmanagerCountU3E5__1_3;
};

// EasyTransition.TransitionManager/<Timer>d__12
struct U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Timer>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String EasyTransition.TransitionManager/<Timer>d__12::sceneName
	String_t* ___sceneName_2;
	// System.Single EasyTransition.TransitionManager/<Timer>d__12::startDelay
	float ___startDelay_3;
	// EasyTransition.TransitionSettings EasyTransition.TransitionManager/<Timer>d__12::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Timer>d__12::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_5;
	// UnityEngine.GameObject EasyTransition.TransitionManager/<Timer>d__12::<template>5__1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtemplateU3E5__1_6;
	// System.Single EasyTransition.TransitionManager/<Timer>d__12::<transitionTime>5__2
	float ___U3CtransitionTimeU3E5__2_7;
};

// EasyTransition.TransitionManager/<Timer>d__13
struct U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Timer>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__13::sceneIndex
	int32_t ___sceneIndex_2;
	// System.Single EasyTransition.TransitionManager/<Timer>d__13::startDelay
	float ___startDelay_3;
	// EasyTransition.TransitionSettings EasyTransition.TransitionManager/<Timer>d__13::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Timer>d__13::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_5;
	// UnityEngine.GameObject EasyTransition.TransitionManager/<Timer>d__13::<template>5__1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtemplateU3E5__1_6;
	// System.Single EasyTransition.TransitionManager/<Timer>d__13::<transitionTime>5__2
	float ___U3CtransitionTimeU3E5__2_7;
};

// EasyTransition.TransitionManager/<Timer>d__14
struct U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Timer>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single EasyTransition.TransitionManager/<Timer>d__14::delay
	float ___delay_2;
	// EasyTransition.TransitionSettings EasyTransition.TransitionManager/<Timer>d__14::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_3;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Timer>d__14::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_4;
	// UnityEngine.GameObject EasyTransition.TransitionManager/<Timer>d__14::<template>5__1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtemplateU3E5__1_5;
	// System.Single EasyTransition.TransitionManager/<Timer>d__14::<transitionTime>5__2
	float ___U3CtransitionTimeU3E5__2_6;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// EasyTransition.TransitionSettings
struct TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Material EasyTransition.TransitionSettings::multiplyColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyColorMaterial_4;
	// UnityEngine.Material EasyTransition.TransitionSettings::addColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___addColorMaterial_5;
	// UnityEngine.Vector2 EasyTransition.TransitionSettings::refrenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___refrenceResolution_6;
	// System.Boolean EasyTransition.TransitionSettings::blockRaycasts
	bool ___blockRaycasts_7;
	// EasyTransition.ColorTintMode EasyTransition.TransitionSettings::colorTintMode
	int32_t ___colorTintMode_8;
	// UnityEngine.Color EasyTransition.TransitionSettings::colorTint
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorTint_9;
	// System.Boolean EasyTransition.TransitionSettings::isCutoutTransition
	bool ___isCutoutTransition_10;
	// System.Single EasyTransition.TransitionSettings::transitionSpeed
	float ___transitionSpeed_11;
	// System.Boolean EasyTransition.TransitionSettings::autoAdjustTransitionTime
	bool ___autoAdjustTransitionTime_12;
	// System.Boolean EasyTransition.TransitionSettings::flipX
	bool ___flipX_13;
	// System.Boolean EasyTransition.TransitionSettings::flipY
	bool ___flipY_14;
	// System.Single EasyTransition.TransitionSettings::transitionTime
	float ___transitionTime_15;
	// System.Single EasyTransition.TransitionSettings::destroyTime
	float ___destroyTime_16;
	// UnityEngine.GameObject EasyTransition.TransitionSettings::transitionIn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transitionIn_17;
	// UnityEngine.GameObject EasyTransition.TransitionSettings::transitionOut
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transitionOut_18;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BookColision
struct BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BookColision/BookType BookColision::bookType
	int32_t ___bookType_4;
};

// BookCounter
struct BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BookCounter::bookCount
	int32_t ___bookCount_4;
	// System.String BookCounter::writeOut
	String_t* ___writeOut_5;
	// TMPro.TMP_Text BookCounter::count
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___count_6;
};

// EasyTransition.DemoLoadScene
struct DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EasyTransition.TransitionSettings EasyTransition.DemoLoadScene::transition
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transition_4;
	// System.Single EasyTransition.DemoLoadScene::startDelay
	float ___startDelay_5;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_CurrentExclusiveProvider
	LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* ___m_CurrentExclusiveProvider_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_TimeMadeExclusive
	float ___m_TimeMadeExclusive_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_Timeout
	float ___m_Timeout_6;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_7;
};

// MainMenuScript
struct MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainMenuScript::inGameUi
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___inGameUi_4;
	// UnityEngine.GameObject MainMenuScript::xrOrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___xrOrigin_5;
};

// ShelfManager
struct ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ShelfManager::shelves
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___shelves_4;
	// UnityEngine.GameObject ShelfManager::winState
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winState_5;
	// System.Int32 ShelfManager::n
	int32_t ___n_6;
};

// Slot
struct Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Slot::isSorted
	bool ___isSorted_4;
};

// EasyTransition.Transition
struct Transition_t39D9D02D5CD62874417708B94489C9786D4E582B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EasyTransition.TransitionSettings EasyTransition.Transition::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// UnityEngine.Transform EasyTransition.Transition::transitionPanelIN
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transitionPanelIN_5;
	// UnityEngine.Transform EasyTransition.Transition::transitionPanelOUT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transitionPanelOUT_6;
	// UnityEngine.UI.CanvasScaler EasyTransition.Transition::transitionCanvas
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___transitionCanvas_7;
	// UnityEngine.Material EasyTransition.Transition::multiplyColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyColorMaterial_8;
	// UnityEngine.Material EasyTransition.Transition::additiveColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___additiveColorMaterial_9;
	// System.Boolean EasyTransition.Transition::hasTransitionTriggeredOnce
	bool ___hasTransitionTriggeredOnce_10;
};

// EasyTransition.TransitionManager
struct TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EasyTransition.TransitionManager::transitionTemplate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transitionTemplate_4;
	// System.Boolean EasyTransition.TransitionManager::runningTransition
	bool ___runningTransition_5;
	// UnityEngine.Events.UnityAction EasyTransition.TransitionManager::onTransitionBegin
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onTransitionBegin_6;
	// UnityEngine.Events.UnityAction EasyTransition.TransitionManager::onTransitionCutPointReached
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onTransitionCutPointReached_7;
	// UnityEngine.Events.UnityAction EasyTransition.TransitionManager::onTransitionEnd
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onTransitionEnd_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WinButtons
struct WinButtons_tC092887387A177E641331CCCFC77D0F55F3865E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// shelf
struct shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// shelf/ShelfType shelf::shelfType
	int32_t ___shelfType_4;
	// BookColision shelf::bookColision
	BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6* ___bookColision_5;
	// UnityEngine.GameObject shelf::book
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___book_6;
	// UnityEngine.Transform shelf::emptySlot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___emptySlot_7;
	// UnityEngine.Vector3 shelf::emptySlotPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___emptySlotPosition_8;
	// UnityEngine.Quaternion shelf::emptySlotRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___emptySlotRotation_9;
	// UnityEngine.GameObject[] shelf::emptySlots
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___emptySlots_10;
	// System.Int32 shelf::currentEmptySlot
	int32_t ___currentEmptySlot_11;
	// System.Boolean shelf::isFull
	bool ___isFull_12;
	// System.Int32 shelf::n
	int32_t ___n_13;
	// BookCounter shelf::count
	BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1* ___count_14;
	// ShelfManager shelf::shelfManager
	ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* ___shelfManager_15;
	// UnityEngine.AudioClip shelf::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_16;
	// UnityEngine.AudioSource shelf::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_17;
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// EasyTransition.CutoutMaskUI
struct CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611  : public Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// EasyTransition.TransitionManager/<Start>d__15

// EasyTransition.TransitionManager/<Start>d__15

// EasyTransition.TransitionManager/<Timer>d__12

// EasyTransition.TransitionManager/<Timer>d__12

// EasyTransition.TransitionManager/<Timer>d__13

// EasyTransition.TransitionManager/<Timer>d__13

// EasyTransition.TransitionManager/<Timer>d__14

// EasyTransition.TransitionManager/<Timer>d__14

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// EasyTransition.TransitionSettings

// EasyTransition.TransitionSettings

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BookColision

// BookColision

// BookCounter

// BookCounter

// EasyTransition.DemoLoadScene

// EasyTransition.DemoLoadScene

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem

// MainMenuScript

// MainMenuScript

// ShelfManager

// ShelfManager

// Slot

// Slot

// EasyTransition.Transition

// EasyTransition.Transition

// EasyTransition.TransitionManager
struct TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields
{
	// EasyTransition.TransitionManager EasyTransition.TransitionManager::instance
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___instance_9;
};

// EasyTransition.TransitionManager

// WinButtons

// WinButtons

// Unity.Template.VR.XRPlatformControllerSetup

// Unity.Template.VR.XRPlatformControllerSetup

// shelf

// shelf

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// EasyTransition.CutoutMaskUI

// EasyTransition.CutoutMaskUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// EasyTransition.TransitionManager[]
struct TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8  : public RuntimeArray
{
	ALIGN_FIELD (8) TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* m_Items[1];

	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m080DDCB03E6111A6FB7C8A5BC2CD1CCBFBE3BECC_gshared (bool ___0_includeInactive, const RuntimeMethod* method) ;

// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<ShelfManager>()
inline ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* GameObject_GetComponentInParent_TisShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F_mFDF953D77849E32485E5D1BA99F630E729C5690A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Slot>()
inline Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2* GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void shelf::CheckEmptySlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shelf_CheckEmptySlot_mB3B03AE7482E69514E35E3DC325B2D4ADCF5A9D1 (shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BookColision>()
inline BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6* Component_GetComponent_TisBookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6_m70F6D76C702F3A4FCF9E98EBD3933857FB4D8127 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Void ShelfManager::CheckShelves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShelfManager_CheckShelves_m7BAA34A84E050341814EB9E35F1C0A59C752733C (ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<shelf>()
inline shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* GameObject_GetComponent_Tisshelf_t2B60F3A81C201834C05E4B3B12B004013AB21613_m7F21A4D92034ED2F51BB0C774F53F36F95D4317F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>()
inline LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// EasyTransition.TransitionManager EasyTransition.TransitionManager::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935 (const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager::Transition(System.String,EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transition, float ___2_startDelay, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Graphic_get_materialForRendering_m4B0017B2B59D2EF578D32ABFCF84A97A835B6B22 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_m8F922348981CDB74700D89D833FE39611FA4BC37 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.UI.Image>(T&)
inline bool GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.UI.Image>(T&)
inline bool Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Animator>(T&)
inline bool GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(T&)
inline bool Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m9D05665D4AEBDA7610D4873EDC74B344F2E5FED1 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, float ___0_delay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transitionSettings, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.String,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m31A6543331F8AD06860FAE6B3E7CBED844E5F658 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Int32,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m27EDDC77C310937C1E4D5C59967A8E344911DAEE (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, int32_t ___0_sceneIndex, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Timer>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12__ctor_mE910E7E4470172567346B7B3E21B3A7A8A3A5E26 (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Timer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13__ctor_m6B396D2730423917A93230EA7ABEC2F22C9B47EC (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Timer>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14__ctor_mC6A7764E3CB1A7E820F6BC2B4C0E4B837CABC0AC (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Start>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mEDA09644404BB45ACE41F0CB519EDA5AF0DFF67A (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.GameObject::GetComponent<EasyTransition.Transition>()
inline Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void EasyTransition.Transition::OnSceneLoad(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<EasyTransition.TransitionManager>(System.Boolean)
inline TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8* Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4 (bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8* (*) (bool, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m080DDCB03E6111A6FB7C8A5BC2CD1CCBFBE3BECC_gshared)(___0_includeInactive, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void BookCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookCounter_Start_mEBABCDA5D25DA783956CB7683F2D9E1C60B6DAE6 (BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1* __this, const RuntimeMethod* method) 
{
	{
		// bookCount = 12;
		__this->___bookCount_4 = ((int32_t)12);
		// }
		return;
	}
}
// System.Void BookCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookCounter_Update_mEAFD8D9E8359C0829138CB060C6C37923942CD1E (BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCD5FE87E4DCE559E0C8EB8CF8F44FD91159E566);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writeOut = bookCount + " / 12 books left";
		int32_t* L_0 = (int32_t*)(&__this->___bookCount_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralBCD5FE87E4DCE559E0C8EB8CF8F44FD91159E566, NULL);
		__this->___writeOut_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writeOut_5), (void*)L_2);
		// count.text = writeOut;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___count_6;
		String_t* L_4 = __this->___writeOut_5;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void BookCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookCounter__ctor_m066430F9F41FFB039A7DD77F01A54CFFC8ED7403 (BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BookColision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BookColision__ctor_m11FCD4D1D46CFCD46D1CFE5D1A6E3E16B99E2EC5 (BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void shelf::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shelf_Start_m488E057A97D10B69035AD6CDCF41DFCBC546FDC8 (shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F_mFDF953D77849E32485E5D1BA99F630E729C5690A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentEmptySlot = 0;
		__this->___currentEmptySlot_11 = 0;
		// shelfManager = this.gameObject.GetComponentInParent<ShelfManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* L_1;
		L_1 = GameObject_GetComponentInParent_TisShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F_mFDF953D77849E32485E5D1BA99F630E729C5690A(L_0, GameObject_GetComponentInParent_TisShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F_mFDF953D77849E32485E5D1BA99F630E729C5690A_RuntimeMethod_var);
		__this->___shelfManager_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shelfManager_15), (void*)L_1);
		// }
		return;
	}
}
// System.Void shelf::CheckEmptySlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shelf_CheckEmptySlot_mB3B03AE7482E69514E35E3DC325B2D4ADCF5A9D1 (shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (emptySlots[n].gameObject.GetComponent<Slot>().isSorted == false)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___emptySlots_10;
		int32_t L_1 = __this->___n_13;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2* L_5;
		L_5 = GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867(L_4, GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = L_5->___isSorted_4;
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		// emptySlot = emptySlots[n].gameObject.GetComponent<Transform>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___emptySlots_10;
		int32_t L_9 = __this->___n_13;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728(L_12, GameObject_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m16304651E2FA050A95BC62AAB3A9D7C9D3A08728_RuntimeMethod_var);
		__this->___emptySlot_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emptySlot_7), (void*)L_13);
		// emptySlotPosition = emptySlot.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___emptySlot_7;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		__this->___emptySlotPosition_8 = L_15;
		// emptySlotRotation = emptySlot.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___emptySlot_7;
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		__this->___emptySlotRotation_9 = L_17;
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void shelf::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shelf_OnTriggerEnter_mB997BD7AD33609B86F8042ABFD9B132D8ABCF20F (shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BookType_tAE297806BDE9F0F4327B087A9C378AB62928F041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6_m70F6D76C702F3A4FCF9E98EBD3933857FB4D8127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShelfType_t433B9AE9DFAF83B954474580959B1E6B7480E551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5820BB1A44EEDECCBF74FAC22FF63371F9B5C5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCE77F0FA90F9FC92838909498CA9FBDD29B8DA8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_5 = NULL;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		// if(other.tag == "book" && n!=emptySlots.Length)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDCE77F0FA90F9FC92838909498CA9FBDD29B8DA8, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = __this->___n_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___emptySlots_10;
		NullCheck(L_4);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_014b;
		}
	}
	{
		// CheckEmptySlot();
		shelf_CheckEmptySlot_mB3B03AE7482E69514E35E3DC325B2D4ADCF5A9D1(__this, NULL);
		// book = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___0_other;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		__this->___book_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___book_6), (void*)L_7);
		// string booktype = other.GetComponent<BookColision>().bookType.ToString();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___0_other;
		NullCheck(L_8);
		BookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6* L_9;
		L_9 = Component_GetComponent_TisBookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6_m70F6D76C702F3A4FCF9E98EBD3933857FB4D8127(L_8, Component_GetComponent_TisBookColision_t7F4C0A43155912195D4990C9E57E73B8D9CB18A6_m70F6D76C702F3A4FCF9E98EBD3933857FB4D8127_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t* L_10 = (int32_t*)(&L_9->___bookType_4);
		Il2CppFakeBox<int32_t> L_11(BookType_tAE297806BDE9F0F4327B087A9C378AB62928F041_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		V_1 = L_12;
		// if(booktype == shelfType.ToString())
		String_t* L_13 = V_1;
		int32_t* L_14 = (int32_t*)(&__this->___shelfType_4);
		Il2CppFakeBox<int32_t> L_15(ShelfType_t433B9AE9DFAF83B954474580959B1E6B7480E551_il2cpp_TypeInfo_var, L_14);
		String_t* L_16;
		L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_16, NULL);
		V_2 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_011f;
		}
	}
	{
		// Destroy(book.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___book_6;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		// GameObject newBook = Instantiate(book.gameObject,emptySlotPosition,emptySlotRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___book_6;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___emptySlotPosition_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = __this->___emptySlotRotation_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_22, L_23, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_3 = L_25;
		// Collider bookCol = newBook.GetComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_3;
		NullCheck(L_26);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_27;
		L_27 = GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C(L_26, GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		V_4 = L_27;
		// Rigidbody bookRb = newBook.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_3;
		NullCheck(L_28);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29;
		L_29 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_28, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_5 = L_29;
		// bookRb.constraints = RigidbodyConstraints.FreezeAll;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = V_5;
		NullCheck(L_30);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_30, ((int32_t)126), NULL);
		// newBook.tag = "BookSorted";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
		NullCheck(L_31);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_31, _stringLiteralB5820BB1A44EEDECCBF74FAC22FF63371F9B5C5C, NULL);
		// emptySlots[currentEmptySlot].gameObject.GetComponent<Slot>().isSorted = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___emptySlots_10;
		int32_t L_33 = __this->___currentEmptySlot_11;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_35, NULL);
		NullCheck(L_36);
		Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2* L_37;
		L_37 = GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867(L_36, GameObject_GetComponent_TisSlot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2_m30EECA292023115A2FD2EBC825FED68712E37867_RuntimeMethod_var);
		NullCheck(L_37);
		L_37->___isSorted_4 = (bool)1;
		// n++;
		int32_t L_38 = __this->___n_13;
		__this->___n_13 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		// count.bookCount--;
		BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1* L_39 = __this->___count_14;
		BookCounter_tE4B29EDF835427E2C46AB479CE814CAF491A07A1* L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->___bookCount_4;
		NullCheck(L_40);
		L_40->___bookCount_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		// audioSource.PlayOneShot(audioClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_42 = __this->___audioSource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_43 = __this->___audioClip_16;
		NullCheck(L_42);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_42, L_43, NULL);
	}

IL_011f:
	{
		// if(n == emptySlots.Length)
		int32_t L_44 = __this->___n_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_45 = __this->___emptySlots_10;
		NullCheck(L_45);
		V_6 = (bool)((((int32_t)L_44) == ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))? 1 : 0);
		bool L_46 = V_6;
		if (!L_46)
		{
			goto IL_014a;
		}
	}
	{
		// isFull = true;
		__this->___isFull_12 = (bool)1;
		// shelfManager.CheckShelves();
		ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* L_47 = __this->___shelfManager_15;
		NullCheck(L_47);
		ShelfManager_CheckShelves_m7BAA34A84E050341814EB9E35F1C0A59C752733C(L_47, NULL);
	}

IL_014a:
	{
	}

IL_014b:
	{
		// }
		return;
	}
}
// System.Void shelf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shelf__ctor_mE2E1E47B7FCC4B0C2BA8BC67CED7201B5DF38BCE (shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFull = false;
		__this->___isFull_12 = (bool)0;
		// int n = 0;
		__this->___n_13 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShelfManager::CheckShelves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShelfManager_CheckShelves_m7BAA34A84E050341814EB9E35F1C0A59C752733C (ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisshelf_t2B60F3A81C201834C05E4B3B12B004013AB21613_m7F21A4D92034ED2F51BB0C774F53F36F95D4317F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for(int i = 0;i < shelves.Length; i++)
		V_0 = 0;
		goto IL_0059;
	}

IL_0005:
	{
		// if (shelves[i].gameObject.GetComponent<shelf>().isFull){
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___shelves_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		shelf_t2B60F3A81C201834C05E4B3B12B004013AB21613* L_5;
		L_5 = GameObject_GetComponent_Tisshelf_t2B60F3A81C201834C05E4B3B12B004013AB21613_m7F21A4D92034ED2F51BB0C774F53F36F95D4317F(L_4, GameObject_GetComponent_Tisshelf_t2B60F3A81C201834C05E4B3B12B004013AB21613_m7F21A4D92034ED2F51BB0C774F53F36F95D4317F_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6 = L_5->___isFull_12;
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// n++;
		int32_t L_8 = __this->___n_6;
		__this->___n_6 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0031:
	{
		// if (n == shelves.Length){
		int32_t L_9 = __this->___n_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___shelves_4;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// winState.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___winState_5;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
	}

IL_0054:
	{
		// for(int i = 0;i < shelves.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0059:
	{
		// for(int i = 0;i < shelves.Length; i++)
		int32_t L_14 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___shelves_4;
		NullCheck(L_15);
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShelfManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShelfManager__ctor_m5859730D792753F5626EC1DE6CF2D96B3A95CC35 (ShelfManager_tCD7D20FB20FE628C471655E7DA982D49A2AB278F* __this, const RuntimeMethod* method) 
{
	{
		// private int n = 0;
		__this->___n_6 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Slot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slot__ctor_m67B2CD572C432B806CDC5EEE03B93D62B001CCDB (Slot_tC1CF93C4345A89624C638031DE98B5A9AD59E0E2* __this, const RuntimeMethod* method) 
{
	{
		// public bool isSorted = false;
		__this->___isSorted_4 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MainMenuScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_Start_mC1D05E15D183A59D0A7AB8AB22E0AA1BBFD1F78F (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xrOrigin.GetComponent<LocomotionSystem>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___xrOrigin_5;
		NullCheck(L_0);
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_1;
		L_1 = GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116(L_0, GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript_StartGame_mC875857E84B43F5F6B65F608292E425641281439 (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xrOrigin.GetComponent<LocomotionSystem>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___xrOrigin_5;
		NullCheck(L_0);
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_1;
		L_1 = GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116(L_0, GameObject_GetComponent_TisLocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B_m27B02B6C9EA1FD2EB1559AD755DF00C3133D7116_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// inGameUi.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___inGameUi_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuScript__ctor_m3C51F6D5E8055AD49954985F1F0D54DDB8A2FEBB (MainMenuScript_tE48C74D2C0B2E001BA00CACB8CF59B50BA024B4C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WinButtons::ReloadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinButtons_ReloadScene_m40F0671DD53A641DD8079E57646517AACC3C3F7C (WinButtons_tC092887387A177E641331CCCFC77D0F55F3865E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void WinButtons::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinButtons_Quit_m3564E135D633E2B121FD37820E6F0C0F04EABB5F (WinButtons_tC092887387A177E641331CCCFC77D0F55F3865E3* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void WinButtons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinButtons__ctor_m54DAC4B99234E9C22EECC4537E942729722CBB3C (WinButtons_tC092887387A177E641331CCCFC77D0F55F3865E3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EasyTransition.DemoLoadScene::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLoadScene_LoadScene_m839F73705892FA9293A65C3193255DF904FE9522 (DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7* __this, String_t* ___0__sceneName, const RuntimeMethod* method) 
{
	{
		// TransitionManager.Instance().Transition(_sceneName, transition, startDelay);
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_0;
		L_0 = TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935(NULL);
		String_t* L_1 = ___0__sceneName;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_2 = __this->___transition_4;
		float L_3 = __this->___startDelay_5;
		NullCheck(L_0);
		TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.DemoLoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLoadScene__ctor_m34FFAE9FC73B5ABE41428862A760FD6EAB3E56FA (DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Material EasyTransition.CutoutMaskUI::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* CutoutMaskUI_get_materialForRendering_mB9CC0DA0652224332EC8E938021A1A2365CA53D2 (CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		// Material material = new Material(base.materialForRendering);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Graphic_get_materialForRendering_m4B0017B2B59D2EF578D32ABFCF84A97A835B6B22(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_1, L_0, NULL);
		V_0 = L_1;
		// material.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = V_0;
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E, 6, NULL);
		// return material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = V_0;
		V_1 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_1;
		return L_4;
	}
}
// System.Void EasyTransition.CutoutMaskUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CutoutMaskUI__ctor_m9F0EF583991DE926CC37C9C36350ED4835788C0B (CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		Image__ctor_m8F922348981CDB74700D89D833FE39611FA4BC37(__this, NULL);
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
// System.Void EasyTransition.Transition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_Start_mF9E1AC57B1ECC4B191D1B721308160F2D3CCBD4A (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D68D42D01BE44A952EF4BA2DB5FDCF516A5E76);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B35_0 = 0;
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// transitionCanvas.referenceResolution = transitionSettings.refrenceResolution;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_1 = __this->___transitionCanvas_7;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_2 = __this->___transitionSettings_4;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2->___refrenceResolution_6;
		NullCheck(L_1);
		CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D(L_1, L_3, NULL);
		// transitionPanelIN.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___transitionPanelIN_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// transitionPanelOUT.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transitionPanelOUT_6;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// transitionPanelIN.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transitionPanelIN_5;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// GameObject transitionIn = Instantiate(transitionSettings.transitionIn, transitionPanelIN);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_10 = __this->___transitionSettings_4;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___transitionIn_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transitionPanelIN_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_13;
		// transitionIn.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_15;
		L_15 = GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA(L_14, GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_16 = __this->___transitionSettings_4;
		NullCheck(L_16);
		bool L_17 = L_16->___blockRaycasts_7;
		NullCheck(L_15);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_15, L_17, NULL);
		// multiplyColorMaterial = transitionSettings.multiplyColorMaterial;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_18 = __this->___transitionSettings_4;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = L_18->___multiplyColorMaterial_4;
		__this->___multiplyColorMaterial_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplyColorMaterial_8), (void*)L_19);
		// additiveColorMaterial = transitionSettings.addColorMaterial;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_20 = __this->___transitionSettings_4;
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = L_20->___addColorMaterial_5;
		__this->___additiveColorMaterial_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___additiveColorMaterial_9), (void*)L_21);
		// if (multiplyColorMaterial == null || additiveColorMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___multiplyColorMaterial_8;
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_23)
		{
			goto IL_00c6;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___additiveColorMaterial_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_25));
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B3_0 = 1;
	}

IL_00c7:
	{
		V_2 = (bool)G_B3_0;
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00d6;
		}
	}
	{
		// Debug.LogWarning("There are no color tint materials set for the transition. Changing the color tint will not affect the transition anymore!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralF6D68D42D01BE44A952EF4BA2DB5FDCF516A5E76, NULL);
	}

IL_00d6:
	{
		// if (!transitionSettings.isCutoutTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_27 = __this->___transitionSettings_4;
		NullCheck(L_27);
		bool L_28 = L_27->___isCutoutTransition_10;
		V_3 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_024f;
		}
	}
	{
		// if (transitionIn.TryGetComponent<Image>(out Image parentImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_0;
		NullCheck(L_30);
		bool L_31;
		L_31 = GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB(L_30, (&V_4), GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		V_5 = L_31;
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_0183;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_33 = __this->___transitionSettings_4;
		NullCheck(L_33);
		int32_t L_34 = L_33->___colorTintMode_8;
		V_6 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_0141;
		}
	}
	{
		// parentImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___multiplyColorMaterial_8;
		NullCheck(L_36);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_36, L_37);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = V_4;
		NullCheck(L_38);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39;
		L_39 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_38);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_40 = __this->___transitionSettings_4;
		NullCheck(L_40);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = L_40->___colorTint_9;
		NullCheck(L_39);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_39, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_41, NULL);
		goto IL_0182;
	}

IL_0141:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_42 = __this->___transitionSettings_4;
		NullCheck(L_42);
		int32_t L_43 = L_42->___colorTintMode_8;
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)1))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_0182;
		}
	}
	{
		// parentImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = __this->___additiveColorMaterial_9;
		NullCheck(L_45);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_45, L_46);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = V_4;
		NullCheck(L_47);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48;
		L_48 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_47);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_49 = __this->___transitionSettings_4;
		NullCheck(L_49);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = L_49->___colorTint_9;
		NullCheck(L_48);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_48, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_50, NULL);
	}

IL_0182:
	{
	}

IL_0183:
	{
		// for (int i = 0; i < transitionIn.transform.childCount; i++)
		V_8 = 0;
		goto IL_0236;
	}

IL_018b:
	{
		// if (transitionIn.transform.GetChild(i).TryGetComponent<Image>(out Image childImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_0;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_51, NULL);
		int32_t L_53 = V_8;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_52, L_53, NULL);
		NullCheck(L_54);
		bool L_55;
		L_55 = Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C(L_54, (&V_9), Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		V_10 = L_55;
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_022f;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_57 = __this->___transitionSettings_4;
		NullCheck(L_57);
		int32_t L_58 = L_57->___colorTintMode_8;
		V_11 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_11;
		if (!L_59)
		{
			goto IL_01ed;
		}
	}
	{
		// childImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60 = V_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->___multiplyColorMaterial_8;
		NullCheck(L_60);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_60, L_61);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62 = V_9;
		NullCheck(L_62);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63;
		L_63 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_62);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_64 = __this->___transitionSettings_4;
		NullCheck(L_64);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65 = L_64->___colorTint_9;
		NullCheck(L_63);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_63, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_65, NULL);
		goto IL_022e;
	}

IL_01ed:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_66 = __this->___transitionSettings_4;
		NullCheck(L_66);
		int32_t L_67 = L_66->___colorTintMode_8;
		V_12 = (bool)((((int32_t)L_67) == ((int32_t)1))? 1 : 0);
		bool L_68 = V_12;
		if (!L_68)
		{
			goto IL_022e;
		}
	}
	{
		// childImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = V_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70 = __this->___additiveColorMaterial_9;
		NullCheck(L_69);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_69, L_70);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = V_9;
		NullCheck(L_71);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72;
		L_72 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_71);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_73 = __this->___transitionSettings_4;
		NullCheck(L_73);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = L_73->___colorTint_9;
		NullCheck(L_72);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_72, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_74, NULL);
	}

IL_022e:
	{
	}

IL_022f:
	{
		// for (int i = 0; i < transitionIn.transform.childCount; i++)
		int32_t L_75 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0236:
	{
		// for (int i = 0; i < transitionIn.transform.childCount; i++)
		int32_t L_76 = V_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = V_0;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		NullCheck(L_78);
		int32_t L_79;
		L_79 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_78, NULL);
		V_13 = (bool)((((int32_t)L_76) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_13;
		if (L_80)
		{
			goto IL_018b;
		}
	}
	{
	}

IL_024f:
	{
		// if (transitionSettings.flipX)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_81 = __this->___transitionSettings_4;
		NullCheck(L_81);
		bool L_82 = L_81->___flipX_13;
		V_14 = L_82;
		bool L_83 = V_14;
		if (!L_83)
		{
			goto IL_02a2;
		}
	}
	{
		// transitionIn.transform.localScale = new Vector3(-transitionIn.transform.localScale.x, transitionIn.transform.localScale.y, transitionIn.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_0;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_0;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_87, NULL);
		float L_89 = L_88.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = V_0;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_90, NULL);
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_91, NULL);
		float L_93 = L_92.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = V_0;
		NullCheck(L_94);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_94, NULL);
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_95, NULL);
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((-L_89)), L_93, L_97, /*hidden argument*/NULL);
		NullCheck(L_85);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_85, L_98, NULL);
	}

IL_02a2:
	{
		// if (transitionSettings.flipY)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_99 = __this->___transitionSettings_4;
		NullCheck(L_99);
		bool L_100 = L_99->___flipY_14;
		V_15 = L_100;
		bool L_101 = V_15;
		if (!L_101)
		{
			goto IL_02f5;
		}
	}
	{
		// transitionIn.transform.localScale = new Vector3(transitionIn.transform.localScale.x, -transitionIn.transform.localScale.y, transitionIn.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = V_0;
		NullCheck(L_102);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_102, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_0;
		NullCheck(L_104);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_104, NULL);
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_105, NULL);
		float L_107 = L_106.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = V_0;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_108, NULL);
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_109, NULL);
		float L_111 = L_110.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = V_0;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_112, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_113, NULL);
		float L_115 = L_114.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_116), L_107, ((-L_111)), L_115, /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_103, L_116, NULL);
	}

IL_02f5:
	{
		// if (transitionIn.TryGetComponent<Animator>(out Animator parentAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = V_0;
		NullCheck(L_117);
		bool L_118;
		L_118 = GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B(L_117, (&V_1), GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		if (!L_118)
		{
			goto IL_0316;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_119 = __this->___transitionSettings_4;
		NullCheck(L_119);
		float L_120 = L_119->___transitionSpeed_11;
		G_B29_0 = ((((int32_t)((((float)L_120) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0317;
	}

IL_0316:
	{
		G_B29_0 = 0;
	}

IL_0317:
	{
		V_16 = (bool)G_B29_0;
		bool L_121 = V_16;
		if (!L_121)
		{
			goto IL_0331;
		}
	}
	{
		// parentAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_122 = V_1;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_123 = __this->___transitionSettings_4;
		NullCheck(L_123);
		float L_124 = L_123->___transitionSpeed_11;
		NullCheck(L_122);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_122, L_124, NULL);
		goto IL_039c;
	}

IL_0331:
	{
		// for (int c = 0; c < transitionIn.transform.childCount; c++)
		V_17 = 0;
		goto IL_0386;
	}

IL_0337:
	{
		// if(transitionIn.transform.GetChild(c).TryGetComponent<Animator>(out Animator childAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_0;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		int32_t L_127 = V_17;
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128;
		L_128 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_126, L_127, NULL);
		NullCheck(L_128);
		bool L_129;
		L_129 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(L_128, (&V_18), Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		if (!L_129)
		{
			goto IL_0365;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_130 = __this->___transitionSettings_4;
		NullCheck(L_130);
		float L_131 = L_130->___transitionSpeed_11;
		G_B35_0 = ((((int32_t)((((float)L_131) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0366;
	}

IL_0365:
	{
		G_B35_0 = 0;
	}

IL_0366:
	{
		V_19 = (bool)G_B35_0;
		bool L_132 = V_19;
		if (!L_132)
		{
			goto IL_037f;
		}
	}
	{
		// childAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_133 = V_18;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_134 = __this->___transitionSettings_4;
		NullCheck(L_134);
		float L_135 = L_134->___transitionSpeed_11;
		NullCheck(L_133);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_133, L_135, NULL);
	}

IL_037f:
	{
		// for (int c = 0; c < transitionIn.transform.childCount; c++)
		int32_t L_136 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_0386:
	{
		// for (int c = 0; c < transitionIn.transform.childCount; c++)
		int32_t L_137 = V_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = V_0;
		NullCheck(L_138);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_138, NULL);
		NullCheck(L_139);
		int32_t L_140;
		L_140 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_139, NULL);
		V_20 = (bool)((((int32_t)L_137) < ((int32_t)L_140))? 1 : 0);
		bool L_141 = V_20;
		if (L_141)
		{
			goto IL_0337;
		}
	}
	{
	}

IL_039c:
	{
		// SceneManager.sceneLoaded += OnSceneLoad;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_142 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_142);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_142, __this, (intptr_t)((void*)Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_142, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.Transition::OnSceneLoad(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t V_18 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B26_0 = 0;
	int32_t G_B32_0 = 0;
	{
		// if (hasTransitionTriggeredOnce) return;
		bool L_0 = __this->___hasTransitionTriggeredOnce_10;
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (hasTransitionTriggeredOnce) return;
		goto IL_0369;
	}

IL_0010:
	{
		// transitionPanelIN.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transitionPanelIN_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// transitionPanelOUT.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___transitionPanelOUT_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// GameObject transitionOut = Instantiate(transitionSettings.transitionOut, transitionPanelOUT);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_6 = __this->___transitionSettings_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___transitionOut_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transitionPanelOUT_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_9;
		// transitionOut.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_11;
		L_11 = GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA(L_10, GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_12 = __this->___transitionSettings_4;
		NullCheck(L_12);
		bool L_13 = L_12->___blockRaycasts_7;
		NullCheck(L_11);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_11, L_13, NULL);
		// if (!transitionSettings.isCutoutTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_14 = __this->___transitionSettings_4;
		NullCheck(L_14);
		bool L_15 = L_14->___isCutoutTransition_10;
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_01dd;
		}
	}
	{
		// if (transitionOut.TryGetComponent<Image>(out Image parentImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB(L_17, (&V_5), GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0111;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_20 = __this->___transitionSettings_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___colorTintMode_8;
		V_7 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00cf;
		}
	}
	{
		// parentImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___multiplyColorMaterial_8;
		NullCheck(L_23);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_23, L_24);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = V_5;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_25);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_27 = __this->___transitionSettings_4;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = L_27->___colorTint_9;
		NullCheck(L_26);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_26, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_28, NULL);
		goto IL_0110;
	}

IL_00cf:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_29 = __this->___transitionSettings_4;
		NullCheck(L_29);
		int32_t L_30 = L_29->___colorTintMode_8;
		V_8 = (bool)((((int32_t)L_30) == ((int32_t)1))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_0110;
		}
	}
	{
		// parentImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___additiveColorMaterial_9;
		NullCheck(L_32);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_32, L_33);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34 = V_5;
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_34);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_36 = __this->___transitionSettings_4;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = L_36->___colorTint_9;
		NullCheck(L_35);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_35, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_37, NULL);
	}

IL_0110:
	{
	}

IL_0111:
	{
		// for (int i = 0; i < transitionOut.transform.childCount; i++)
		V_9 = 0;
		goto IL_01c4;
	}

IL_0119:
	{
		// if (transitionOut.transform.GetChild(i).TryGetComponent<Image>(out Image childImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_0;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		int32_t L_40 = V_9;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_39, L_40, NULL);
		NullCheck(L_41);
		bool L_42;
		L_42 = Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C(L_41, (&V_10), Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		V_11 = L_42;
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_01bd;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_44 = __this->___transitionSettings_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->___colorTintMode_8;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_017b;
		}
	}
	{
		// childImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = V_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = __this->___multiplyColorMaterial_8;
		NullCheck(L_47);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_47, L_48);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49 = V_10;
		NullCheck(L_49);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50;
		L_50 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_49);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_51 = __this->___transitionSettings_4;
		NullCheck(L_51);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = L_51->___colorTint_9;
		NullCheck(L_50);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_50, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_52, NULL);
		goto IL_01bc;
	}

IL_017b:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_53 = __this->___transitionSettings_4;
		NullCheck(L_53);
		int32_t L_54 = L_53->___colorTintMode_8;
		V_13 = (bool)((((int32_t)L_54) == ((int32_t)1))? 1 : 0);
		bool L_55 = V_13;
		if (!L_55)
		{
			goto IL_01bc;
		}
	}
	{
		// childImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_56 = V_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = __this->___additiveColorMaterial_9;
		NullCheck(L_56);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_56, L_57);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_58 = V_10;
		NullCheck(L_58);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59;
		L_59 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_58);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_60 = __this->___transitionSettings_4;
		NullCheck(L_60);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61 = L_60->___colorTint_9;
		NullCheck(L_59);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_59, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_61, NULL);
	}

IL_01bc:
	{
	}

IL_01bd:
	{
		// for (int i = 0; i < transitionOut.transform.childCount; i++)
		int32_t L_62 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01c4:
	{
		// for (int i = 0; i < transitionOut.transform.childCount; i++)
		int32_t L_63 = V_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_0;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_64, NULL);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_65, NULL);
		V_14 = (bool)((((int32_t)L_63) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_14;
		if (L_67)
		{
			goto IL_0119;
		}
	}
	{
	}

IL_01dd:
	{
		// if (transitionSettings.flipX)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_68 = __this->___transitionSettings_4;
		NullCheck(L_68);
		bool L_69 = L_68->___flipX_13;
		V_15 = L_69;
		bool L_70 = V_15;
		if (!L_70)
		{
			goto IL_0230;
		}
	}
	{
		// transitionOut.transform.localScale = new Vector3(-transitionOut.transform.localScale.x, transitionOut.transform.localScale.y, transitionOut.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_0;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_0;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_74, NULL);
		float L_76 = L_75.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = V_0;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_78, NULL);
		float L_80 = L_79.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_0;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_82, NULL);
		float L_84 = L_83.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_85), ((-L_76)), L_80, L_84, /*hidden argument*/NULL);
		NullCheck(L_72);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_72, L_85, NULL);
	}

IL_0230:
	{
		// if (transitionSettings.flipY)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_86 = __this->___transitionSettings_4;
		NullCheck(L_86);
		bool L_87 = L_86->___flipY_14;
		V_16 = L_87;
		bool L_88 = V_16;
		if (!L_88)
		{
			goto IL_0283;
		}
	}
	{
		// transitionOut.transform.localScale = new Vector3(transitionOut.transform.localScale.x, -transitionOut.transform.localScale.y, transitionOut.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = V_0;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_0;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_92, NULL);
		float L_94 = L_93.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = V_0;
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_95, NULL);
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_96, NULL);
		float L_98 = L_97.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = V_0;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_99, NULL);
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_100, NULL);
		float L_102 = L_101.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_103), L_94, ((-L_98)), L_102, /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_90, L_103, NULL);
	}

IL_0283:
	{
		// if (transitionOut.TryGetComponent<Animator>(out Animator parentAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = V_0;
		NullCheck(L_104);
		bool L_105;
		L_105 = GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B(L_104, (&V_1), GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		if (!L_105)
		{
			goto IL_02a4;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_106 = __this->___transitionSettings_4;
		NullCheck(L_106);
		float L_107 = L_106->___transitionSpeed_11;
		G_B26_0 = ((((int32_t)((((float)L_107) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02a5;
	}

IL_02a4:
	{
		G_B26_0 = 0;
	}

IL_02a5:
	{
		V_17 = (bool)G_B26_0;
		bool L_108 = V_17;
		if (!L_108)
		{
			goto IL_02bf;
		}
	}
	{
		// parentAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_109 = V_1;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_110 = __this->___transitionSettings_4;
		NullCheck(L_110);
		float L_111 = L_110->___transitionSpeed_11;
		NullCheck(L_109);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_109, L_111, NULL);
		goto IL_032a;
	}

IL_02bf:
	{
		// for (int c = 0; c < transitionOut.transform.childCount; c++)
		V_18 = 0;
		goto IL_0314;
	}

IL_02c5:
	{
		// if (transitionOut.transform.GetChild(c).TryGetComponent<Animator>(out Animator childAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = V_0;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_112, NULL);
		int32_t L_114 = V_18;
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115;
		L_115 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_113, L_114, NULL);
		NullCheck(L_115);
		bool L_116;
		L_116 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(L_115, (&V_19), Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		if (!L_116)
		{
			goto IL_02f3;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_117 = __this->___transitionSettings_4;
		NullCheck(L_117);
		float L_118 = L_117->___transitionSpeed_11;
		G_B32_0 = ((((int32_t)((((float)L_118) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02f4;
	}

IL_02f3:
	{
		G_B32_0 = 0;
	}

IL_02f4:
	{
		V_20 = (bool)G_B32_0;
		bool L_119 = V_20;
		if (!L_119)
		{
			goto IL_030d;
		}
	}
	{
		// childAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_120 = V_19;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_121 = __this->___transitionSettings_4;
		NullCheck(L_121);
		float L_122 = L_121->___transitionSpeed_11;
		NullCheck(L_120);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_120, L_122, NULL);
	}

IL_030d:
	{
		// for (int c = 0; c < transitionOut.transform.childCount; c++)
		int32_t L_123 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_0314:
	{
		// for (int c = 0; c < transitionOut.transform.childCount; c++)
		int32_t L_124 = V_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_0;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		NullCheck(L_126);
		int32_t L_127;
		L_127 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_126, NULL);
		V_21 = (bool)((((int32_t)L_124) < ((int32_t)L_127))? 1 : 0);
		bool L_128 = V_21;
		if (L_128)
		{
			goto IL_02c5;
		}
	}
	{
	}

IL_032a:
	{
		// hasTransitionTriggeredOnce = true;
		__this->___hasTransitionTriggeredOnce_10 = (bool)1;
		// float destroyTime = transitionSettings.destroyTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_129 = __this->___transitionSettings_4;
		NullCheck(L_129);
		float L_130 = L_129->___destroyTime_16;
		V_2 = L_130;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_131 = __this->___transitionSettings_4;
		NullCheck(L_131);
		bool L_132 = L_131->___autoAdjustTransitionTime_12;
		V_22 = L_132;
		bool L_133 = V_22;
		if (!L_133)
		{
			goto IL_035c;
		}
	}
	{
		// destroyTime = destroyTime / transitionSettings.transitionSpeed;
		float L_134 = V_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_135 = __this->___transitionSettings_4;
		NullCheck(L_135);
		float L_136 = L_135->___transitionSpeed_11;
		V_2 = ((float)(L_134/L_136));
	}

IL_035c:
	{
		// Destroy(gameObject, destroyTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137;
		L_137 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_138 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_137, L_138, NULL);
	}

IL_0369:
	{
		// }
		return;
	}
}
// System.Void EasyTransition.Transition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition__ctor_mCB7605F9B2911606574ACFD6366BA926180D7E45 (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EasyTransition.TransitionManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Awake_mC3F2CD7D65D26FD1B569F0FE7E6DF5C418F8F4EE (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9), (void*)__this);
		// }
		return;
	}
}
// EasyTransition.TransitionManager EasyTransition.TransitionManager::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral078E14735EE684F69282FFE94BDE152096DD68F7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* V_1 = NULL;
	{
		// if (instance == null)
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_0 = ((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// Debug.LogError("You tried to access the instance before it exists.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral078E14735EE684F69282FFE94BDE152096DD68F7, NULL);
	}

IL_001b:
	{
		// return instance;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_3 = ((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9;
		V_1 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_4 = V_1;
		return L_4;
	}
}
// System.Void EasyTransition.TransitionManager::Transition(EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_mDF51A18F677902160CBB0A1A9F21F8246505DB0D (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___0_transition, float ___1_startDelay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (transition == null || runningTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_0 = ___0_transition;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = __this->___runningTransition_5;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("You have to assing a transition.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9, NULL);
		// return;
		goto IL_003b;
	}

IL_0025:
	{
		// runningTransition = true;
		__this->___runningTransition_5 = (bool)1;
		// StartCoroutine(Timer(startDelay, transition));
		float L_4 = ___1_startDelay;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_5 = ___0_transition;
		RuntimeObject* L_6;
		L_6 = TransitionManager_Timer_m9D05665D4AEBDA7610D4873EDC74B344F2E5FED1(__this, L_4, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void EasyTransition.TransitionManager::Transition(System.String,EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transition, float ___2_startDelay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (transition == null || runningTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_0 = ___1_transition;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = __this->___runningTransition_5;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("You have to assing a transition.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9, NULL);
		// return;
		goto IL_003c;
	}

IL_0025:
	{
		// runningTransition = true;
		__this->___runningTransition_5 = (bool)1;
		// StartCoroutine(Timer(sceneName, startDelay, transition));
		String_t* L_4 = ___0_sceneName;
		float L_5 = ___2_startDelay;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_6 = ___1_transition;
		RuntimeObject* L_7;
		L_7 = TransitionManager_Timer_m31A6543331F8AD06860FAE6B3E7CBED844E5F658(__this, L_4, L_5, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void EasyTransition.TransitionManager::Transition(System.Int32,EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_mBB625C55AA961F8F5381F06861CF53CA399CE1A4 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, int32_t ___0_sceneIndex, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transition, float ___2_startDelay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (transition == null || runningTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_0 = ___1_transition;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2 = __this->___runningTransition_5;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.LogError("You have to assing a transition.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9, NULL);
		// return;
		goto IL_003c;
	}

IL_0025:
	{
		// runningTransition = true;
		__this->___runningTransition_5 = (bool)1;
		// StartCoroutine(Timer(sceneIndex, startDelay, transition));
		int32_t L_4 = ___0_sceneIndex;
		float L_5 = ___2_startDelay;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_6 = ___1_transition;
		RuntimeObject* L_7;
		L_7 = TransitionManager_Timer_m27EDDC77C310937C1E4D5C59967A8E344911DAEE(__this, L_4, L_5, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Int32 EasyTransition.TransitionManager::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionManager_GetSceneIndex_m249C684C61D0CB0A174F2090BB4C7126725C2E24 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return SceneManager.GetSceneByName(sceneName).buildIndex;
		String_t* L_0 = ___0_sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.String,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m31A6543331F8AD06860FAE6B3E7CBED844E5F658 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_0 = (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA*)il2cpp_codegen_object_new(U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__12__ctor_mE910E7E4470172567346B7B3E21B3A7A8A3A5E26(L_0, 0, NULL);
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_2 = L_1;
		String_t* L_3 = ___0_sceneName;
		NullCheck(L_2);
		L_2->___sceneName_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sceneName_2), (void*)L_3);
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_4 = L_2;
		float L_5 = ___1_startDelay;
		NullCheck(L_4);
		L_4->___startDelay_3 = L_5;
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_6 = L_4;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_7 = ___2_transitionSettings;
		NullCheck(L_6);
		L_6->___transitionSettings_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___transitionSettings_4), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Int32,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m27EDDC77C310937C1E4D5C59967A8E344911DAEE (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, int32_t ___0_sceneIndex, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_0 = (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327*)il2cpp_codegen_object_new(U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__13__ctor_m6B396D2730423917A93230EA7ABEC2F22C9B47EC(L_0, 0, NULL);
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_2 = L_1;
		int32_t L_3 = ___0_sceneIndex;
		NullCheck(L_2);
		L_2->___sceneIndex_2 = L_3;
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_4 = L_2;
		float L_5 = ___1_startDelay;
		NullCheck(L_4);
		L_4->___startDelay_3 = L_5;
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_6 = L_4;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_7 = ___2_transitionSettings;
		NullCheck(L_6);
		L_6->___transitionSettings_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___transitionSettings_4), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m9D05665D4AEBDA7610D4873EDC74B344F2E5FED1 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, float ___0_delay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transitionSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_0 = (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24*)il2cpp_codegen_object_new(U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__14__ctor_mC6A7764E3CB1A7E820F6BC2B4C0E4B837CABC0AC(L_0, 0, NULL);
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_2 = L_1;
		float L_3 = ___0_delay;
		NullCheck(L_2);
		L_2->___delay_2 = L_3;
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_4 = L_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_5 = ___1_transitionSettings;
		NullCheck(L_4);
		L_4->___transitionSettings_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___transitionSettings_3), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Start_mF2A7353A274247C8C7389E8AC963B65C9F3AA24B (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* L_0 = (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43*)il2cpp_codegen_object_new(U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__15__ctor_mEDA09644404BB45ACE41F0CB519EDA5AF0DFF67A(L_0, 0, NULL);
		U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EasyTransition.TransitionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager__ctor_m5EBDA751B7211440BE7F29D2F30E6411E8BE9FDB (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EasyTransition.TransitionManager/<Timer>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12__ctor_mE910E7E4470172567346B7B3E21B3A7A8A3A5E26 (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12_System_IDisposable_Dispose_m12E453F44514537276D9BEE38838F25619E5998B (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Timer>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__12_MoveNext_m72047C53F15F4D7D407E7CA6BA9228DB11BC14D3 (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B9_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B16_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B15_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B20_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B19_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_001f:
	{
		goto IL_002f;
	}

IL_0021:
	{
		goto IL_0051;
	}

IL_0023:
	{
		goto IL_00ed;
	}

IL_0028:
	{
		goto IL_0136;
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(startDelay);
		float L_2 = __this->___startDelay_3;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_3 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_3, L_2, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionBegin?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_4 = __this->___U3CU3E4__this_5;
		NullCheck(L_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = L_4->___onTransitionBegin_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		G_B9_0 = L_6;
		if (L_6)
		{
			G_B10_0 = L_6;
			goto IL_0069;
		}
	}
	{
		goto IL_006f;
	}

IL_0069:
	{
		NullCheck(G_B10_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B10_0, NULL);
	}

IL_006f:
	{
		// GameObject template = Instantiate(transitionTemplate) as GameObject;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_7 = __this->___U3CU3E4__this_5;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___transitionTemplate_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___U3CtemplateU3E5__1_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtemplateU3E5__1_6), (void*)L_9);
		// template.GetComponent<Transition>().transitionSettings = transitionSettings;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___U3CtemplateU3E5__1_6;
		NullCheck(L_10);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_11;
		L_11 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_10, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_12 = __this->___transitionSettings_4;
		NullCheck(L_11);
		L_11->___transitionSettings_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___transitionSettings_4), (void*)L_12);
		// float transitionTime = transitionSettings.transitionTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_4;
		NullCheck(L_13);
		float L_14 = L_13->___transitionTime_15;
		__this->___U3CtransitionTimeU3E5__2_7 = L_14;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_15 = __this->___transitionSettings_4;
		NullCheck(L_15);
		bool L_16 = L_15->___autoAdjustTransitionTime_12;
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00d3;
		}
	}
	{
		// transitionTime = transitionTime / transitionSettings.transitionSpeed;
		float L_18 = __this->___U3CtransitionTimeU3E5__2_7;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_19 = __this->___transitionSettings_4;
		NullCheck(L_19);
		float L_20 = L_19->___transitionSpeed_11;
		__this->___U3CtransitionTimeU3E5__2_7 = ((float)(L_18/L_20));
	}

IL_00d3:
	{
		// yield return new WaitForSecondsRealtime(transitionTime);
		float L_21 = __this->___U3CtransitionTimeU3E5__2_7;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_22 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionCutPointReached?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_23 = __this->___U3CU3E4__this_5;
		NullCheck(L_23);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23->___onTransitionCutPointReached_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = L_24;
		G_B15_0 = L_25;
		if (L_25)
		{
			G_B16_0 = L_25;
			goto IL_0105;
		}
	}
	{
		goto IL_010b;
	}

IL_0105:
	{
		NullCheck(G_B16_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B16_0, NULL);
	}

IL_010b:
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_26 = __this->___sceneName_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_26, NULL);
		// yield return new WaitForSecondsRealtime(transitionSettings.destroyTime);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_27 = __this->___transitionSettings_4;
		NullCheck(L_27);
		float L_28 = L_27->___destroyTime_16;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_29 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_29, L_28, NULL);
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0136:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionEnd?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_30 = __this->___U3CU3E4__this_5;
		NullCheck(L_30);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = L_30->___onTransitionEnd_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_32 = L_31;
		G_B19_0 = L_32;
		if (L_32)
		{
			G_B20_0 = L_32;
			goto IL_014e;
		}
	}
	{
		goto IL_0154;
	}

IL_014e:
	{
		NullCheck(G_B20_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B20_0, NULL);
	}

IL_0154:
	{
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43A1ADA13C05B60A809D7630DB37640A7CEFDBCB (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12_System_Collections_IEnumerator_Reset_mC8685C0C1008A7F349736CCBEF5DFC8D20A51D7A (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__12_System_Collections_IEnumerator_Reset_mC8685C0C1008A7F349736CCBEF5DFC8D20A51D7A_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__12_System_Collections_IEnumerator_get_Current_m2564F95DF19485AF2B42FD1098A1E8CC929B418C (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EasyTransition.TransitionManager/<Timer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13__ctor_m6B396D2730423917A93230EA7ABEC2F22C9B47EC (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13_System_IDisposable_Dispose_mD2CCF85AA56A4DBD659EF10D7C6D9A9D389F013B (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Timer>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__13_MoveNext_m9535E4C855751FD5C03D8ED332602E825E2E2B06 (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B9_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B16_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B15_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B20_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B19_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_001f:
	{
		goto IL_002f;
	}

IL_0021:
	{
		goto IL_0051;
	}

IL_0023:
	{
		goto IL_00ed;
	}

IL_0028:
	{
		goto IL_0136;
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(startDelay);
		float L_2 = __this->___startDelay_3;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_3 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_3, L_2, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionBegin?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_4 = __this->___U3CU3E4__this_5;
		NullCheck(L_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = L_4->___onTransitionBegin_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		G_B9_0 = L_6;
		if (L_6)
		{
			G_B10_0 = L_6;
			goto IL_0069;
		}
	}
	{
		goto IL_006f;
	}

IL_0069:
	{
		NullCheck(G_B10_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B10_0, NULL);
	}

IL_006f:
	{
		// GameObject template = Instantiate(transitionTemplate) as GameObject;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_7 = __this->___U3CU3E4__this_5;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___transitionTemplate_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___U3CtemplateU3E5__1_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtemplateU3E5__1_6), (void*)L_9);
		// template.GetComponent<Transition>().transitionSettings = transitionSettings;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___U3CtemplateU3E5__1_6;
		NullCheck(L_10);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_11;
		L_11 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_10, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_12 = __this->___transitionSettings_4;
		NullCheck(L_11);
		L_11->___transitionSettings_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___transitionSettings_4), (void*)L_12);
		// float transitionTime = transitionSettings.transitionTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_4;
		NullCheck(L_13);
		float L_14 = L_13->___transitionTime_15;
		__this->___U3CtransitionTimeU3E5__2_7 = L_14;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_15 = __this->___transitionSettings_4;
		NullCheck(L_15);
		bool L_16 = L_15->___autoAdjustTransitionTime_12;
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00d3;
		}
	}
	{
		// transitionTime = transitionTime / transitionSettings.transitionSpeed;
		float L_18 = __this->___U3CtransitionTimeU3E5__2_7;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_19 = __this->___transitionSettings_4;
		NullCheck(L_19);
		float L_20 = L_19->___transitionSpeed_11;
		__this->___U3CtransitionTimeU3E5__2_7 = ((float)(L_18/L_20));
	}

IL_00d3:
	{
		// yield return new WaitForSecondsRealtime(transitionTime);
		float L_21 = __this->___U3CtransitionTimeU3E5__2_7;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_22 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionCutPointReached?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_23 = __this->___U3CU3E4__this_5;
		NullCheck(L_23);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23->___onTransitionCutPointReached_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = L_24;
		G_B15_0 = L_25;
		if (L_25)
		{
			G_B16_0 = L_25;
			goto IL_0105;
		}
	}
	{
		goto IL_010b;
	}

IL_0105:
	{
		NullCheck(G_B16_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B16_0, NULL);
	}

IL_010b:
	{
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_26 = __this->___sceneIndex_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_26, NULL);
		// yield return new WaitForSecondsRealtime(transitionSettings.destroyTime);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_27 = __this->___transitionSettings_4;
		NullCheck(L_27);
		float L_28 = L_27->___destroyTime_16;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_29 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_29, L_28, NULL);
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0136:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionEnd?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_30 = __this->___U3CU3E4__this_5;
		NullCheck(L_30);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = L_30->___onTransitionEnd_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_32 = L_31;
		G_B19_0 = L_32;
		if (L_32)
		{
			G_B20_0 = L_32;
			goto IL_014e;
		}
	}
	{
		goto IL_0154;
	}

IL_014e:
	{
		NullCheck(G_B20_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B20_0, NULL);
	}

IL_0154:
	{
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m682ADE71B56003A227542B3479A57A11C95DC208 (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13_System_Collections_IEnumerator_Reset_m7DB493B01CB2F8558E5F3B7043C8AFA98D1BF13B (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__13_System_Collections_IEnumerator_Reset_m7DB493B01CB2F8558E5F3B7043C8AFA98D1BF13B_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__13_System_Collections_IEnumerator_get_Current_mD1A3CF72AEFF1DEA91924496AAD343C4BBF0354F (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EasyTransition.TransitionManager/<Timer>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14__ctor_mC6A7764E3CB1A7E820F6BC2B4C0E4B837CABC0AC (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14_System_IDisposable_Dispose_m7A09F9788B4D4A84D877EC8B7D467FA8C2F25801 (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Timer>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__14_MoveNext_m83B81BD1CCD46543CBAC6648C80BF57A0EC29CCC (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B9_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B16_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B15_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B20_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B19_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0023;
			}
			case 3:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_001f:
	{
		goto IL_002f;
	}

IL_0021:
	{
		goto IL_0051;
	}

IL_0023:
	{
		goto IL_00ed;
	}

IL_0028:
	{
		goto IL_0141;
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(delay);
		float L_2 = __this->___delay_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_3 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_3, L_2, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionBegin?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_4 = __this->___U3CU3E4__this_4;
		NullCheck(L_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = L_4->___onTransitionBegin_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5;
		G_B9_0 = L_6;
		if (L_6)
		{
			G_B10_0 = L_6;
			goto IL_0069;
		}
	}
	{
		goto IL_006f;
	}

IL_0069:
	{
		NullCheck(G_B10_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B10_0, NULL);
	}

IL_006f:
	{
		// GameObject template = Instantiate(transitionTemplate) as GameObject;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_7 = __this->___U3CU3E4__this_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___transitionTemplate_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___U3CtemplateU3E5__1_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtemplateU3E5__1_5), (void*)L_9);
		// template.GetComponent<Transition>().transitionSettings = transitionSettings;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___U3CtemplateU3E5__1_5;
		NullCheck(L_10);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_11;
		L_11 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_10, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_12 = __this->___transitionSettings_3;
		NullCheck(L_11);
		L_11->___transitionSettings_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___transitionSettings_4), (void*)L_12);
		// float transitionTime = transitionSettings.transitionTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_3;
		NullCheck(L_13);
		float L_14 = L_13->___transitionTime_15;
		__this->___U3CtransitionTimeU3E5__2_6 = L_14;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_15 = __this->___transitionSettings_3;
		NullCheck(L_15);
		bool L_16 = L_15->___autoAdjustTransitionTime_12;
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00d3;
		}
	}
	{
		// transitionTime = transitionTime / transitionSettings.transitionSpeed;
		float L_18 = __this->___U3CtransitionTimeU3E5__2_6;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_19 = __this->___transitionSettings_3;
		NullCheck(L_19);
		float L_20 = L_19->___transitionSpeed_11;
		__this->___U3CtransitionTimeU3E5__2_6 = ((float)(L_18/L_20));
	}

IL_00d3:
	{
		// yield return new WaitForSecondsRealtime(transitionTime);
		float L_21 = __this->___U3CtransitionTimeU3E5__2_6;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_22 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionCutPointReached?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_23 = __this->___U3CU3E4__this_4;
		NullCheck(L_23);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23->___onTransitionCutPointReached_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = L_24;
		G_B15_0 = L_25;
		if (L_25)
		{
			G_B16_0 = L_25;
			goto IL_0105;
		}
	}
	{
		goto IL_010b;
	}

IL_0105:
	{
		NullCheck(G_B16_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B16_0, NULL);
	}

IL_010b:
	{
		// template.GetComponent<Transition>().OnSceneLoad(SceneManager.GetActiveScene(), LoadSceneMode.Single);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___U3CtemplateU3E5__1_5;
		NullCheck(L_26);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_27;
		L_27 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_26, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_28;
		L_28 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		NullCheck(L_27);
		Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C(L_27, L_28, 0, NULL);
		// yield return new WaitForSecondsRealtime(transitionSettings.destroyTime);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_29 = __this->___transitionSettings_3;
		NullCheck(L_29);
		float L_30 = L_29->___destroyTime_16;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_31 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0141:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionEnd?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_32 = __this->___U3CU3E4__this_4;
		NullCheck(L_32);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_33 = L_32->___onTransitionEnd_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_34 = L_33;
		G_B19_0 = L_34;
		if (L_34)
		{
			G_B20_0 = L_34;
			goto IL_0159;
		}
	}
	{
		goto IL_015f;
	}

IL_0159:
	{
		NullCheck(G_B20_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B20_0, NULL);
	}

IL_015f:
	{
		// runningTransition = false;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_35 = __this->___U3CU3E4__this_4;
		NullCheck(L_35);
		L_35->___runningTransition_5 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5B78F2190769586AFC1C3303672A52A3600C1B12 (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14_System_Collections_IEnumerator_Reset_m73D9974A940C1435742E8CECBF31ED793EACA33B (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__14_System_Collections_IEnumerator_Reset_m73D9974A940C1435742E8CECBF31ED793EACA33B_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__14_System_Collections_IEnumerator_get_Current_m1E67AED1711AD301B775F9304FF480555405973D (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EasyTransition.TransitionManager/<Start>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mEDA09644404BB45ACE41F0CB519EDA5AF0DFF67A (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Start>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_System_IDisposable_Dispose_m91FF2F8BAD40E447B814BE59991BE791C564AB5C (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Start>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__15_MoveNext_m5D4EC5A80C85CC142A093D03995EC7E3A3983405 (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEAD6B2BFD82FD8CA47BF3CF8F052CED9EA79AA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0077;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_007f;
	}

IL_0022:
	{
		// var managerCount = GameObject.FindObjectsOfType<TransitionManager>(true).Length;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8* L_3;
		L_3 = Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4((bool)1, Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4_RuntimeMethod_var);
		NullCheck(L_3);
		__this->___U3CmanagerCountU3E5__1_3 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// if (managerCount > 1)
		int32_t L_4 = __this->___U3CmanagerCountU3E5__1_3;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogError($"There are {managerCount.ToString()} Transition Managers in your scene. Please ensure there is only one Transition Manager in your scene or overlapping transitions may occur.");
		int32_t* L_6 = (int32_t*)(&__this->___U3CmanagerCountU3E5__1_3);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26, L_7, _stringLiteral4FEAD6B2BFD82FD8CA47BF3CF8F052CED9EA79AA, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
	}

IL_005e:
	{
		// yield return new WaitForSecondsRealtime(1f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_9 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_9, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007f:
	{
		// while (this.gameObject.activeInHierarchy)
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_11, NULL);
		V_2 = L_12;
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Start>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB47DDBBF4396D856EBD7EF09BB3D17C66393F63C (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Start>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_m543FFCF10310A057B0649F6DBDE9973AAE866FED (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_m543FFCF10310A057B0649F6DBDE9973AAE866FED_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Start>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__15_System_Collections_IEnumerator_get_Current_m537B932054415362608C4CAEFB2FFD23D90D2566 (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EasyTransition.TransitionSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionSettings__ctor_m6CC3860A609B31549137C50D53C9C0C983229B55 (TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 refrenceResolution = new Vector2(1920, 1080);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1920.0f), (1080.0f), /*hidden argument*/NULL);
		__this->___refrenceResolution_6 = L_0;
		// public bool blockRaycasts = true;
		__this->___blockRaycasts_7 = (bool)1;
		// public ColorTintMode colorTintMode = ColorTintMode.Multiply;
		__this->___colorTintMode_8 = 0;
		// public Color colorTint = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___colorTint_9 = L_1;
		// public bool isCutoutTransition = false;
		__this->___isCutoutTransition_10 = (bool)0;
		// public float transitionSpeed = 1;
		__this->___transitionSpeed_11 = (1.0f);
		// public bool autoAdjustTransitionTime = true;
		__this->___autoAdjustTransitionTime_12 = (bool)1;
		// public bool flipX = false;
		__this->___flipX_13 = (bool)0;
		// public bool flipY = false;
		__this->___flipY_14 = (bool)0;
		// public float transitionTime = 1.5f;
		__this->___transitionTime_15 = (1.5f);
		// public float destroyTime = 3f;
		__this->___destroyTime_16 = (3.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		V_0 = L_2;
		// foreach (var loader in loaders)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_001b_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
				L_8 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (loader.name.Equals("Oculus Loader"))
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				NullCheck(L_10);
				bool L_11;
				L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_006d_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_RightController_5;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_LeftController_4;
				NullCheck(L_14);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
			}

IL_006d_1:
			{
			}

IL_006e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
