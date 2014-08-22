#pragma once

#include "Ingredient.h"

class Peppers : public Ingredient
{
public:
	Peppers();
	~Peppers();

	Ingredient* createIngredient();
};

