#include "PlumTomatoSauce.h"


PlumTomatoSauce::PlumTomatoSauce()
{
	this->name = "Plum Tomato Sauce";
}


PlumTomatoSauce::~PlumTomatoSauce()
{
}

Ingredient* PlumTomatoSauce::createIngredient()
{
	return new PlumTomatoSauce();
}

