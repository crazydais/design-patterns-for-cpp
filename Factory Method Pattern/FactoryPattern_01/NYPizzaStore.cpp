#include "NYPizzaStore.h"

NYPizzaStore::NYPizzaStore()
{
}


NYPizzaStore::~NYPizzaStore()
{
}

Pizza* NYPizzaStore::createPizza(std::string arg_pizzaType)
{
	if (arg_pizzaType == "cheese")
	{
		pizza = new NYStyleCheesePizza();
	}
	else if (arg_pizzaType == "pepperoni")
	{
		pizza = new NYStylePepperoniPizza();
	}
	else if (arg_pizzaType == "clam")
	{
		pizza = new NYStyleClamPizza();
	}
	else if (arg_pizzaType == "veggie")
	{
		pizza = new NYStyleVeggiePizza();
	}

	return pizza;
}
