#include "NYStyleCheesePizza.h"

NYStyleCheesePizza::NYStyleCheesePizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->setName();
	this->name = "NY Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}

NYStyleCheesePizza::~NYStyleCheesePizza()
{
	delete this;
}

void NYStyleCheesePizza::setName()
{
	this->pizzaType = "Cheese";
}



