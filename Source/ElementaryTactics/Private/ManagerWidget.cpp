#include "ManagerWidget.h"
#include "Blueprint/UserWidget.h"

AManagerWidget::AManagerWidget()
{
    PrimaryActorTick.bCanEverTick = false; 

    static ConstructorHelpers::FClassFinder<UUserWidget> WidgetBP(TEXT("/Game/UI/WBP_Menu"));
    if (WidgetBP.Succeeded()) 
    {
        ManagerWidgetClass = WidgetBP.Class;
    }
}

void AManagerWidget::BeginPlay()
{
    Super::BeginPlay();

    if (ManagerWidgetClass)
    {
        UUserWidget* Menu = CreateWidget<UUserWidget>(GetWorld(), ManagerWidgetClass); 
        if (Menu)
        {
            Menu->AddToViewport();
        }
    }
}
