#pragma once

#include "PizzaIngredientFactory.h"


class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	ChicagoPizzaIngredientFactory();
	~ChicagoPizzaIngredientFactory();

	Ingredient* createDough();
	Ingredient* createSauce();
	Ingredient* createCheese();
	Ingredient* createPepperoni();
	Ingredient* createClams();
	std::vector<Ingredient*> createVeggies();
};

