#include "ChicagoPizzaIngredientFactory.h"


ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{
	this->veggies.push_back(new Garlic());
	this->veggies.push_back(new Peppers());
	this->veggies.push_back(new Onion());
}


ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{
	for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
	{
		delete *it;
	}

	this->veggies.erase(this->veggies.begin(), this->veggies.end());
}

Ingredient* ChicagoPizzaIngredientFactory::createDough()
{
	return new ThickCrustDough();
}

Ingredient* ChicagoPizzaIngredientFactory::createSauce()
{
	return new PlumTomatoSauce();
}

Ingredient* ChicagoPizzaIngredientFactory::createCheese()
{
	return new MozzarellaCheese();
}

Ingredient* ChicagoPizzaIngredientFactory::createPepperoni()
{
	return new SlicedPepperoni();
}

Ingredient* ChicagoPizzaIngredientFactory::createClams()
{
	return new FrozenClams();
}

std::vector<Ingredient*> ChicagoPizzaIngredientFactory::createVeggies()
{
	return this->veggies;
}