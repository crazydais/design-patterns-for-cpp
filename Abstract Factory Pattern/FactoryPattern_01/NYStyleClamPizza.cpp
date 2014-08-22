#include "NYStyleClamPizza.h"

NYStyleClamPizza::NYStyleClamPizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->name = "NY Style Clam Pizza";

	this->dough = arg_ingredientFactory->createDough();
	this->sauce = arg_ingredientFactory->createSauce();
	this->cheese = arg_ingredientFactory->createCheese();
	this->veggies = arg_ingredientFactory->createVeggies();

	std::cout << "Creating " << this->getName() << std::endl;
}

NYStyleClamPizza::~NYStyleClamPizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}
