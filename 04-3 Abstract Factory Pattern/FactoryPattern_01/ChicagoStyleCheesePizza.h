#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"


class ChicagoStyleCheesePizza : public Pizza
{
public:
	ChicagoStyleCheesePizza(PizzaIngredientFactory*);
	~ChicagoStyleCheesePizza();
	void setName();
};

