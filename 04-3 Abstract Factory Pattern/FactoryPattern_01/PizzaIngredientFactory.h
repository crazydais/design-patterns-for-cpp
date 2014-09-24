#pragma once

#include <vector>

#include "Ingredient.h"

//	NY Ingredients
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "SlicedPepperoni.h"
#include "FreshClams.h"
#include "Veggie.h"
#include "Garlic.h"
#include "Onion.h"
#include "Mushroom.h"
#include "Sweetcorn.h"

 //	Chicago Ingredients
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozzarellaCheese.h"
#include "FrozenClams.h"
#include "Peppers.h"

//	Interface
class PizzaIngredientFactory
{
protected:
	std::vector<Ingredient*> veggies;

public:
	PizzaIngredientFactory() {   }
	virtual ~PizzaIngredientFactory()
	{
		for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
		{
			delete *it;
		}

		this->veggies.erase(this->veggies.begin(), this->veggies.end());
	}

	virtual Ingredient* createDough() = 0;
	virtual Ingredient* createSauce() = 0;
	virtual Ingredient* createCheese() = 0;
	virtual std::vector<Ingredient*> createVeggies() = 0;
	virtual Ingredient* createPepperoni() = 0;
	virtual Ingredient* createClams() = 0;
};

