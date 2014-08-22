#pragma once

#include "Pizza.h"


//	Abstract Class
class PizzaStore
{
protected:
	Pizza *pizza;

public:
	PizzaStore() {  }
	virtual ~PizzaStore() {  }
	
	virtual Pizza* createPizza(std::string) = 0;

	virtual Pizza* orderPizza(std::string arg_pizzaType) final
	{
		Pizza *pizza = createPizza(arg_pizzaType);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
	}
};