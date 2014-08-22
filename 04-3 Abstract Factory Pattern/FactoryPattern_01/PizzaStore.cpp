#include "PizzaStore.h"

PizzaStore::PizzaStore()
{
}


PizzaStore::~PizzaStore()
{
}


Pizza* PizzaStore::orderPizza(std::string arg_pizzaType)
{
	Pizza *pizza = this->createPizza(arg_pizzaType);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}