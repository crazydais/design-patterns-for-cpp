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
	std::cout << "Cutting " << this->getName() << " into rectangle slices" << std::endl;
}

