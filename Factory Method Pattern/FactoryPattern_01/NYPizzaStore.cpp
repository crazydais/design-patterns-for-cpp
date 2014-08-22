#include "NYPizzaStore.h"

NYPizzaStore::NYPizzaStore()
{
}


NYPizzaStore::~NYPizzaStore()
{
	delete this->pizza;
}

Pizza* NYPizzaStore::createPizza(std::string arg_pizzaType)
{
	if (arg_pizzaType == "cheese")
	{
		this->pizza = new NYStyleCheesePizza();
	}
	else if (arg_pizzaType == "pepperoni")
	{
		this->pizza = new NYStylePepperoniPizza();
	}
	else if (arg_pizzaType == "clam")
	{
		this->pizza = new NYStyleClamPizza();
	}
	else if (arg_pizzaType == "veggie")
	{
		this->pizza = new NYStyleVeggiePizza();
	}

	return this->pizza;
}
