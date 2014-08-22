#include "SimpleFactory.h"


SimpleFactory::SimpleFactory()
{
}


SimpleFactory::~SimpleFactory()
{
}

Pizza* SimpleFactory::createPizza(std::string arg_pizzaType)
{
	if (arg_pizzaType == "cheese")
	{
		this->pizza = new CheesePizza();
	}
	else if (arg_pizzaType == "pepperoni")
	{
		this->pizza = new PepperoniPizza();
	}
	else if (arg_pizzaType == "clam")
	{
		this->pizza = new ClamPizza();
	}
	else if (arg_pizzaType == "veggie")
	{
		this->pizza = new VeggiePizza();
	}

	return this->pizza;
}
