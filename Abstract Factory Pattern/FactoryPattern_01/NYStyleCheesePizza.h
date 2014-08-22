#pragma once

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class NYStyleCheesePizza : public Pizza
{
public:
	NYStyleCheesePizza(PizzaIngredientFactory*);
	~NYStyleCheesePizza();

};
