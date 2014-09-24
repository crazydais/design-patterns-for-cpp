#include "NYPizzaIngredientFactroy.h"


NYPizzaIngredientFactroy::NYPizzaIngredientFactroy()
{
	this->veggies.push_back(new Garlic());
	this->veggies.push_back(new Mushroom());
	this->veggies.push_back(new Sweetcorn());
}

NYPizzaIngredientFactroy::~NYPizzaIngredientFactroy()
{
	for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
	{
		delete *it;
	}

	this->veggies.erase(this->veggies.begin(), this->veggies.end());
}

Ingredient* NYPizzaIngredientFactroy::createDough()
{
	return new ThinCrustDough();
}

Ingredient* NYPizzaIngredientFactroy::createSauce()
{
	return new MarinaraSauce();
}

Ingredient* NYPizzaIngredientFactroy::createCheese()
{
	return new ReggianoCheese();
}

Ingredient* NYPizzaIngredientFactroy::createPepperoni()
{
	return new SlicedPepperoni();
}

Ingredient* NYPizzaIngredientFactroy::createClams()
{
	return new FreshClams();
}

std::vector<Ingredient*> NYPizzaIngredientFactroy::createVeggies()
{
	return this->veggies;
}