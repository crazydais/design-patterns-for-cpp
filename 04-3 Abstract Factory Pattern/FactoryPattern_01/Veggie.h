#pragma once

#include "Ingredient.h"

class Veggie : public Ingredient
{
public:
	Veggie::Veggie();
	Veggie::~Veggie();

	Ingredient* createIngredient();
};