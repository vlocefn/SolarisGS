#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xBF0 - 0xB90)
// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
class ULocalUserEntry_C : public UFortLocalUserEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hovered;                                           // 0xB98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_OnlineStatusIndicator;                      // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_MicIcon;                                     // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               LocalUserEntryBorder;                              // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SettingsIcon;                                      // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Online;                                            // 0xBC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Offline;                                           // 0xBD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Away;                                              // 0xBE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULocalUserEntry_C* GetDefaultObj();

	void HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus, enum class ELocalUserOnlineStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus);
	void ExecuteUbergraph_LocalUserEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ELocalUserOnlineStatus K2Node_Event_OnlineStatus);
};

}


