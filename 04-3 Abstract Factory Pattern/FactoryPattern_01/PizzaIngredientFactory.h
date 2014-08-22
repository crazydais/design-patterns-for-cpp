#pragma once

#include <vector>

#include "Ingredient.h"


//	Interface
class PizzaIngredientFactory
{
public:
	PizzaIngredientFactory();
	virtual ~PizzaIngredientFactory();

	virtual Ingredient* createDough() = 0;
	virtual Ingredient* createSauce() = 0;
	virtual Ingredient* createCheese() = 0;
	virtual std::vector<Ingredient*> createVeggies() = 0;
	virtual Ingredient* createPepperoni() = 0;
	virtual Ingredient* createClams() = 0;

protected:
	std::vector<Ingredient*> veggies;
};

