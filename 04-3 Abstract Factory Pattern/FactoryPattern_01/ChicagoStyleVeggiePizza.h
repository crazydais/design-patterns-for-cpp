#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ChicagoStyleVeggiePizza : public Pizza
{
public:
	ChicagoStyleVeggiePizza(PizzaIngredientFactory*);
	~ChicagoStyleVeggiePizza();
};

