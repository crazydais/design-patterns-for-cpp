#pragma once

#include "Pizza.h"


class NYStyleClamPizza : public Pizza
{
public:
	NYStyleClamPizza(PizzaIngredientFactory*);
	~NYStyleClamPizza();
};