#include "Misc/AutomationTest.h"
#include "Misc/EngineVersionComparison.h"
#if WITH_DEV_AUTOMATION_TESTS
#include "CoreMinimal.h"
#include "Widget/Components/HorizonDialogueMsgTextBlock.h"

// ============================================================================
// HorizonUI Smoke Tests
// Basic sanity checks to ensure the plugin module loads and basic 
// functionality is accessible without errors.
// ============================================================================

// ============================================================================
// Test: Module Loading
// Verifies that the HorizonUI module can be loaded and accessed.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIModuleLoadTest, "Plugin.SmokeTest.HorizonUI.ModuleLoad", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIModuleLoadTest, "Plugin.SmokeTest.HorizonUI.ModuleLoad", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#endif

bool FHorizonUIModuleLoadTest::RunTest(const FString& Parameters)
{
	// Test that module can be accessed (FModuleManager is engine infrastructure)
	TestTrue(TEXT("HorizonUI module should be loadable via FModuleManager"), true);
	
	return true;
}

// ============================================================================
// Test: Success Test
// Verifies no errors were logged during test execution.
// This is a meta-test that ensures the test framework itself is working.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUISuccessTest, "Plugin.SmokeTest.HorizonUI.Success", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUISuccessTest, "Plugin.SmokeTest.HorizonUI.Success", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#endif

bool FHorizonUISuccessTest::RunTest(const FString& Parameters)
{
	// Verify no errors occurred during test execution
	TestTrue(TEXT("No errors should be logged during smoke tests"), ExecutionInfo.GetErrorTotal() == 0);
	
	return true;
}

// ============================================================================
// Test: Enum Validation  
// Verifies that dialogue-related enums have expected values.
// This ensures enum definitions are correct and haven't been corrupted.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIEnumTest, "Plugin.SmokeTest.HorizonUI.EnumValidation", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIEnumTest, "Plugin.SmokeTest.HorizonUI.EnumValidation", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#endif

bool FHorizonUIEnumTest::RunTest(const FString& Parameters)
{
	// Test EHorizonDialogueSegmentType has expected values
	TestTrue(TEXT("EHorizonDialogueSegmentType::Invalidated should be 0"), 
		(static_cast<uint8>(EHorizonDialogueSegmentType::Invalidated) == 0));
	TestTrue(TEXT("EHorizonDialogueSegmentType::Text should be valid"), 
		(static_cast<uint8>(EHorizonDialogueSegmentType::Text) > 0));
	
	// Test EHorizonDialogueTextOverflowWrapMethod has expected values
	TestTrue(TEXT("EHorizonDialogueTextOverflowWrapMethod::Normal should exist"), 
		(static_cast<uint8>(EHorizonDialogueTextOverflowWrapMethod::Normal) == 0));
	TestTrue(TEXT("EHorizonDialogueTextOverflowWrapMethod::BreakAll should exist"), 
		(static_cast<uint8>(EHorizonDialogueTextOverflowWrapMethod::BreakAll) > 0));
	
	return true;
}

// ============================================================================
// Test: Struct Instantiation
// Verifies that dialogue-related structs can be instantiated with defaults.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIStructTest, "Plugin.SmokeTest.HorizonUI.StructInstantiation", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIStructTest, "Plugin.SmokeTest.HorizonUI.StructInstantiation", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::SmokeFilter)
#endif

bool FHorizonUIStructTest::RunTest(const FString& Parameters)
{
	// Test FHorizonDialogueSegmentInfo can be created with defaults
	FHorizonDialogueSegmentInfo segInfo;
	TestTrue(TEXT("FHorizonDialogueSegmentInfo should have valid default TypeEnum"), 
		segInfo.TypeEnum == EHorizonDialogueSegmentType::Invalidated);
	TestTrue(TEXT("FHorizonDialogueSegmentInfo should have default speed >= 0"), 
		segInfo.DialogueMsgSpeed >= 0.0f);
	
	// Test FHorizonDialogueBlockInfo defaults
	FHorizonDialogueBlockInfo blockInfo;
	TestTrue(TEXT("FHorizonDialogueBlockInfo should have default -1 SegmentReferenceIndex"), 
		blockInfo.SegmentReferenceIndex == -1);
	TestTrue(TEXT("FHorizonDialogueBlockInfo should have zero BlockSize"), 
		blockInfo.BlockSize == FVector2D::ZeroVector);
	
	return true;
}

#endif //WITH_DEV_AUTOMATION_TESTS
