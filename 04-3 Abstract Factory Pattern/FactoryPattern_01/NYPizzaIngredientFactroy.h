#pragma once

#include <vector>

#include "PizzaIngredientFactory.h"
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "SlicedPepperoni.h"
#include "FreshClams.h"
#include "Veggie.h"
#include "Garlic.h"
#include "Onion.h"
#include "Mushroom.h"


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

