#pragma once

#include "PizzaIngredientFactory.h"
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozzarellaCheese.h"
#include "SlicedPepperoni.h"
#include "FrozenClams.h"
#include "Veggie.h"
#include "Garlic.h"
#include "Onion.h"
#include "Peppers.h"

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

