#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManagerWidget.generated.h"

UCLASS()
class ELEMENTARYTACTICS_API AManagerWidget : public AActor
{
    GENERATED_BODY()

public:
    AManagerWidget();

protected:
    virtual void BeginPlay() override; 

private:
    UPROPERTY(EditAnywhere, Category = "UI")  
        TSubclassOf<class UUserWidget> ManagerWidgetClass;
};