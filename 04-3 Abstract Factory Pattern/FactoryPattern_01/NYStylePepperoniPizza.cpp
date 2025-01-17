#include "NYStylePepperoniPizza.h"

NYStylePepperoniPizza::NYStylePepperoniPizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->setName();
	this->name = "NY Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}

NYStylePepperoniPizza::~NYStylePepperoniPizza()
{
	delete this;
}

void NYStylePepperoniPizza::setName()
{
	this->pizzaType = "Pepperoni";
}
