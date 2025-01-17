#pragma once

#include "Pizza.h"
#include "NYPizzaIngredientFactroy.h"
#include "ChicagoPizzaIngredientFactory.h"


//	Abstract Class
class PizzaStore
{
protected:
	Pizza *pizza;

public:
	PizzaStore() {   }
	virtual ~PizzaStore()
	{
		delete this->pizza;
	}

	virtual Pizza* createPizza(std::string) = 0;

	virtual Pizza* orderPizza(std::string arg_pizzaType) final
	{
		Pizza *pizza = this->createPizza(arg_pizzaType);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
	}
};