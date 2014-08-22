#include "NYPizzaIngredientFactroy.h"


NYPizzaIngredientFactroy::NYPizzaIngredientFactroy()
{
	this->veggies.push_back(new Garlic());
	this->veggies.push_back(new Mushroom());
	this->veggies.push_back(new Onion());
}

NYPizzaIngredientFactroy::~NYPizzaIngredientFactroy()
{
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