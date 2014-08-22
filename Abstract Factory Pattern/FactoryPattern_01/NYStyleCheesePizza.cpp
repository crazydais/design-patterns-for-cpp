#include "NYStyleCheesePizza.h"

NYStyleCheesePizza::NYStyleCheesePizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->name = "NY Style Cheese Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();

	std::cout << "Creating " << this->getName() << std::endl;
}

NYStyleCheesePizza::~NYStyleCheesePizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}


