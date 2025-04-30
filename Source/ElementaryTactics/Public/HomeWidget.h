#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HomeWidget.generated.h"

UCLASS()
class ELEMENTARYTACTICS_API UHomeWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual bool Initialize() override;
	UPROPERTY(meta = (BindWidget))
	class UImage* BackgroundImage;
};
