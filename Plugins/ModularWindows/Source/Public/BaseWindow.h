// Copyright Wil Simpson All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/TabWidget.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "MoveableResizableWidget.h"
#include "BaseWindow.generated.h"


/**
 * 
 */
UCLASS()
class MODULARWINDOWS_API UBaseWindow : public UMoveableResizeableWidget
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	UTabWidget* ActiveTab;
	
	FTabSelectedDelegate OnTabSelected;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCanvasPanel* OuterPanel;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* CloseButton;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UNamedSlot* ContentSlot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UImage* WindowBackgroundImage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UBorder* WindowBorder;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UHorizontalBox* Tabs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UTabWidget*, UUserWidget*> TabMapping;

	/** Tab Widget BP Class that creates the UI */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UTabWidget> TabWidgetClass;

public:
	UTabWidget* GetActiveTab() const { return ActiveTab; }
	
public:
	virtual void NativeConstruct() override;
	
	UBaseWindow();
	
	// Panel management functions
	/** Adds a new tab to the chat panel*/
	UFUNCTION(BlueprintCallable)
	UTabWidget* CreateTab(const FText& TabName, UUserWidget* Content);

	UFUNCTION(BlueprintCallable)
	void AppendTab(UTabWidget* Tab, UUserWidget* Content);

	/** Focuses the given tab and shows the paired chatbox */
	UFUNCTION(BlueprintCallable)
	void FocusTab(UTabWidget* Tab);

	UFUNCTION(BlueprintCallable)
	void SetCloseable(bool IsCloseable);

	virtual FVector2D GetMinSize() override;
};
