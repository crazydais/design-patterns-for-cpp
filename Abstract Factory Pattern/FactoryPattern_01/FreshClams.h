#pragma once

#include "Ingredient.h"

class FreshClams : public Ingredient
{
public:
	FreshClams();
	~FreshClams();

	Ingredient* FreshClams::createIngredient();
};

