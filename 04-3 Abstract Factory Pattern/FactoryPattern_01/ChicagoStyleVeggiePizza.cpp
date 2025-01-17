#include "ChicagoStyleVeggiePizza.h"


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza(PizzaIngredientFactory* arg_ingredientFactory)
{
	this->setName();
	this->name = "Chicago Style " + this->pizzaType + " Pizza";
	this->setupIngredients(arg_ingredientFactory);
}


ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{
	delete this;
}

void ChicagoStyleVeggiePizza::setName()
{
	this->pizzaType = "Veggi";
}
