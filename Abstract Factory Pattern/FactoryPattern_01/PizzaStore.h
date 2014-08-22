#pragma once

#include "Pizza.h"
#include "NYPizzaIngredientFactroy.h"
#include "ChicagoPizzaIngredientFactory.h"


//	Interface
class PizzaStore
{
public:
	PizzaStore();
	virtual ~PizzaStore();

	virtual Pizza* orderPizza(std::string) final;
	virtual Pizza* createPizza(std::string) = 0;

protected:
	Pizza *pizza;

};