#include "MarinaraSauce.h"


MarinaraSauce::MarinaraSauce()
{
	this->name = "Marinara Sauce";
}


MarinaraSauce::~MarinaraSauce()
{
}

Ingredient* MarinaraSauce::createIngredient()
{
	return new MarinaraSauce();
}
