#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ChicagoStylePepperoniPizza :
	public Pizza
{
public:
	ChicagoStylePepperoniPizza(PizzaIngredientFactory*);
	~ChicagoStylePepperoniPizza();
};

