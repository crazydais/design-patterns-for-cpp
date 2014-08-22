#pragma once

#include "PizzaIngredientFactory.h"


class NYPizzaIngredientFactroy : public PizzaIngredientFactory
{
public:
	NYPizzaIngredientFactroy();
	~NYPizzaIngredientFactroy();

	Ingredient* createDough();
	Ingredient* createSauce();
	Ingredient* createCheese();
	Ingredient* createPepperoni();
	Ingredient* createClams();
	std::vector<Ingredient*> createVeggies();
};

