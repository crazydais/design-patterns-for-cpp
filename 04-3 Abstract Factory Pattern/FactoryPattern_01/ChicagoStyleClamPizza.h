#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ChicagoStyleClamPizza :
	public Pizza
{
public:
	ChicagoStyleClamPizza(PizzaIngredientFactory*);
	~ChicagoStyleClamPizza();
};

