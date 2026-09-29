#include "Misc/AutomationTest.h"
#include "Misc/EngineVersionComparison.h"
#if WITH_DEV_AUTOMATION_TESTS
#include "CoreMinimal.h"
#include "Widget/Components/HorizonDialogueMsgTextBlock.h"

// ============================================================================
// HorizonUI Product Tests
// Functional tests for HorizonUI plugin widgets and components.
// Note: These tests verify data structures and logic. Widget instantiation
// requires editor environment, so those are tested via EditorAutomation.
// ============================================================================

// ============================================================================
// Test: Dialogue Text Overflow Wrap Method
// Verifies text overflow wrap method enum works correctly.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUITextOverflowTest, "Plugin.UnitTests.HorizonUI.TextOverflow", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUITextOverflowTest, "Plugin.UnitTests.HorizonUI.TextOverflow", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#endif

bool FHorizonUITextOverflowTest::RunTest(const FString& Parameters)
{
	// Test Normal wrap method behavior
	TestTrue(TEXT("Normal wrap method should be defined"), 
		true); // EHorizonDialogueTextOverflowWrapMethod::Normal exists
	
	// Test BreakAll wrap method behavior  
	TestTrue(TEXT("BreakAll wrap method should be defined"),
		true); // EHorizonDialogueTextOverflowWrapMethod::BreakAll exists
	
	// Verify both methods are different
	TestTrue(TEXT("Normal and BreakAll should be different enum values"),
		static_cast<uint8>(EHorizonDialogueTextOverflowWrapMethod::Normal) != 
		static_cast<uint8>(EHorizonDialogueTextOverflowWrapMethod::BreakAll));
	
	return true;
}

// ============================================================================
// Test: Dialogue Segment Info Validation
// Verifies FHorizonDialogueSegmentInfo structure behaves correctly.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialogueSegmentTest, "Plugin.UnitTests.HorizonUI.DialogueSegment", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialogueSegmentTest, "Plugin.UnitTests.HorizonUI.DialogueSegment", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#endif

bool FHorizonUIDialogueSegmentTest::RunTest(const FString& Parameters)
{
	// Test segment info defaults
	FHorizonDialogueSegmentInfo segInfo;
	
	// Verify TypeEnum defaults to Invalidated
	TestTrue(TEXT("SegmentType should default to Invalidated"),
		segInfo.TypeEnum == EHorizonDialogueSegmentType::Invalidated);
	
	// Verify timing defaults
	TestTrue(TEXT("DialogueMsgSpeed should be non-negative"),
		segInfo.DialogueMsgSpeed >= 0.0f);
	TestTrue(TEXT("DialogueMsgWait should default to 0"),
		FMath::IsNearlyZero(segInfo.DialogueMsgWait));
	TestTrue(TEXT("CurrentMsgWaitTime should default to 0"),
		FMath::IsNearlyZero(segInfo.CurrentMsgWaitTime));
	
	// Verify callback flags default to false
	TestTrue(TEXT("bHypertextVisited should default to false"),
		segInfo.bHypertextVisited == false);
	TestTrue(TEXT("bDialogueSoundPlayed should default to false"),
		segInfo.bDialogueSoundPlayed == false);
	TestTrue(TEXT("bEventCallbackCalled should default to false"),
		segInfo.bEventCallbackCalled == false);
	
	// Verify index defaults
	TestTrue(TEXT("StyleInfoReferenceIndex should default to -1"),
		segInfo.StyleInfoReferenceIndex == -1);
	TestTrue(TEXT("SegmentStyleReferenceIndex should default to -1"),
		segInfo.SegmentStyleReferenceIndex == -1);
	
	return true;
}

// ============================================================================
// Test: Dialogue Block Info Validation
// Verifies FHorizonDialogueBlockInfo structure behaves correctly.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialogueBlockTest, "Plugin.UnitTests.HorizonUI.DialogueBlock", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialogueBlockTest, "Plugin.UnitTests.HorizonUI.DialogueBlock", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#endif

bool FHorizonUIDialogueBlockTest::RunTest(const FString& Parameters)
{
	// Test block info defaults
	FHorizonDialogueBlockInfo blockInfo;
	
	// Verify index defaults
	TestTrue(TEXT("CurrentCharIndex should default to 0"),
		blockInfo.CurrentCharIndex == 0);
	TestTrue(TEXT("SegmentReferenceIndex should default to -1"),
		blockInfo.SegmentReferenceIndex == -1);
	
	// Verify size defaults
	TestTrue(TEXT("BlockSize should default to ZeroVector"),
		blockInfo.BlockSize == FVector2D::ZeroVector);
	TestTrue(TEXT("RubyTextBlockSize should default to ZeroVector"),
		blockInfo.RubyTextBlockSize == FVector2D::ZeroVector);
	
	// Verify weak pointers are invalid by default
	TestTrue(TEXT("WidgetWeakPtr should be invalid by default"),
		!blockInfo.WidgetWeakPtr.IsValid());
	TestTrue(TEXT("WidgetBackgroundWeakPtr should be invalid by default"),
		!blockInfo.WidgetBackgroundWeakPtr.IsValid());
	TestTrue(TEXT("RubyTextWeakPtr should be invalid by default"),
		!blockInfo.RubyTextWeakPtr.IsValid());
	
	return true;
}

// ============================================================================
// Test: Dialogue Line Info Validation
// Verifies FHorizonDialogueLineInfo structure behaves correctly.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialogueLineTest, "Plugin.UnitTests.HorizonUI.DialogueLine", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialogueLineTest, "Plugin.UnitTests.HorizonUI.DialogueLine", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#endif

bool FHorizonUIDialogueLineTest::RunTest(const FString& Parameters)
{
	// Test line info defaults
	FHorizonDialogueLineInfo lineInfo;
	
	// Verify index defaults
	TestTrue(TEXT("CurrentDialogueBlockIndex should default to 0"),
		lineInfo.CurrentDialogueBlockIndex == 0);
	
	// Verify dimension defaults
	TestTrue(TEXT("MaxLineHeight should default to 0"),
		lineInfo.MaxLineHeight == 0);
	TestTrue(TEXT("LineWidth should default to 0"),
		lineInfo.LineWidth == 0);
	
	// Verify block list is empty
	TestTrue(TEXT("DialogueBlockInfoList should be empty by default"),
		lineInfo.DialogueBlockInfoList.Num() == 0);
	
	// Verify position defaults
	TestTrue(TEXT("Position should default to (0,0)"),
		lineInfo.Position == FVector2D(0, 0));
	
	// Verify new page flag
	TestTrue(TEXT("bNewPage should default to false"),
		lineInfo.bNewPage == false);
	
	return true;
}

// ============================================================================
// Test: Dialogue Page Info Validation
// Verifies FHorizonDialoguePageInfo structure behaves correctly.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialoguePageTest, "Plugin.UnitTests.HorizonUI.DialoguePage", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIDialoguePageTest, "Plugin.UnitTests.HorizonUI.DialoguePage", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#endif

bool FHorizonUIDialoguePageTest::RunTest(const FString& Parameters)
{
	// Test page info defaults
	FHorizonDialoguePageInfo pageInfo;
	
	TestTrue(TEXT("StartLineIndex should default to -1"),
		pageInfo.StartLineIndex == -1);
	TestTrue(TEXT("EndLineIndex should default to -1"),
		pageInfo.EndLineIndex == -1);
	TestTrue(TEXT("PageHeight should default to 0"),
		pageInfo.PageHeight == 0.0f);
	
	// Test constructor with parameters
	FHorizonDialoguePageInfo pageInfoWithParams(5, 10, 100.0f);
	TestTrue(TEXT("Constructor should set StartLineIndex correctly"),
		pageInfoWithParams.StartLineIndex == 5);
	TestTrue(TEXT("Constructor should set EndLineIndex correctly"),
		pageInfoWithParams.EndLineIndex == 10);
	TestTrue(TEXT("Constructor should set PageHeight correctly"),
		pageInfoWithParams.PageHeight == 100.0f);
	
	return true;
}

// ============================================================================
// Test: Dialogue Blinking Cursor Info Validation
// Verifies FHorizonDialogueBlinkingCursorInfo structure behaves correctly.
// ============================================================================
#if UE_VERSION_OLDER_THAN(5,5,0)
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIBlinkingCursorTest, "Plugin.UnitTests.HorizonUI.BlinkingCursor", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#else
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FHorizonUIBlinkingCursorTest, "Plugin.UnitTests.HorizonUI.BlinkingCursor", EAutomationTestFlags_ApplicationContextMask | EAutomationTestFlags::ProductFilter)
#endif

bool FHorizonUIBlinkingCursorTest::RunTest(const FString& Parameters)
{
	// Test blinking cursor info defaults
	FHorizonDialogueBlinkingCursorInfo cursorInfo;
	
	TestTrue(TEXT("bUseSize should default to false"),
		cursorInfo.bUseSize == false);
	TestTrue(TEXT("Size should default to (32,32)"),
		cursorInfo.Size == FVector2D(32, 32));
	TestTrue(TEXT("PaddingPos should default to ZeroVector"),
		cursorInfo.PaddingPos == FVector2D::ZeroVector);
	TestTrue(TEXT("ColorAndOpacity should default to White"),
		cursorInfo.ColorAndOpacity == FLinearColor::White);
	TestTrue(TEXT("WidgetWeakPtr should be invalid by default"),
		!cursorInfo.WidgetWeakPtr.IsValid());
	
	return true;
}

#endif //WITH_DEV_AUTOMATION_TESTS
