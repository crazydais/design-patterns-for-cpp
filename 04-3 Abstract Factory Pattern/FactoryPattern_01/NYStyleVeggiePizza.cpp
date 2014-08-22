#include "NYStyleVeggiePizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->name = "NY Style Veggie Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();
	this->veggies = arg_ingredientFactory->createVeggies();

	std::cout << "Creating " << this->getName() << std::endl;
}

NYStyleVeggiePizza::~NYStyleVeggiePizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}

void NYStyleVeggiePizza::cut()
{
	for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
	{
		delete *it;
	}

	this->veggies.erase(this->veggies.begin(), this->veggies.end());

	delete this->dough;
	delete this->sauce;
	delete this->cheese;
}

