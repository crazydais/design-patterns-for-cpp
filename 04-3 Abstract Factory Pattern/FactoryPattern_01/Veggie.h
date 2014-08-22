#pragma once

#include "Ingredient.h"
#include <vector>

class Veggie : public Ingredient
{
public:
	Veggie::Veggie();
	Veggie::~Veggie();

	Ingredient* Veggie::createIngredient();
};