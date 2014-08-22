#pragma once

#include "SimpleFactory.h"
#include "Pizza.h"

class PizzaStore
{
protected:
	Pizza *pizza;
	SimpleFactory* sf = new SimpleFactory();

public:
	PizzaStore() {  }
	~PizzaStore()
	{
		delete this->pizza;
		delete this->sf;
	}

	Pizza* orderPizza(std::string arg_pizzaType)
	{
		Pizza *pizza = sf->createPizza(arg_pizzaType);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
	}
};