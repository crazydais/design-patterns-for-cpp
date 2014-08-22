#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

#include "PizzaIngredientFactory.h"
#include "Ingredient.h"

//	Abstract Class
class Pizza
{
public:
	Pizza();							// must override this in the subclass
	virtual ~Pizza();

	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	virtual std::string getName();
	virtual std::string getDough();
	virtual std::string getSauce();

protected:
	std::string name;
	Ingredient* dough;
	Ingredient* sauce;
	Ingredient* cheese;
	Ingredient* pepperoni;
	Ingredient* clams;
	std::vector<Ingredient*> veggies;

	PizzaIngredientFactory* ingredientFactory;

};
