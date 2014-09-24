#include "ChicagoStyleCheesePizza.h"


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(PizzaIngredientFactory *arg_ingredientFactory)
{
	this->setName();
	this->name = "Chicago Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{
	delete this;
}

void ChicagoStyleCheesePizza::setName()
{
	this->pizzaType = "Cheese";
}
