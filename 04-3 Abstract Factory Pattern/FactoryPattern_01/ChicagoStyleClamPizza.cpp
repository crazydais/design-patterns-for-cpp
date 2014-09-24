#include "ChicagoStyleClamPizza.h"


ChicagoStyleClamPizza::ChicagoStyleClamPizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->setName();
	this->name = "Chicago Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}


ChicagoStyleClamPizza::~ChicagoStyleClamPizza()
{
	delete this;
}

void ChicagoStyleClamPizza::setName()
{
	this->pizzaType = "Clam";
}
