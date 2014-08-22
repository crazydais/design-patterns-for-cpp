#pragma once

#include "Ingredient.h"

class Garlic : 	public Ingredient
{
public:
	Garlic();
	~Garlic();

	Ingredient* Garlic::createIngredient();
};

