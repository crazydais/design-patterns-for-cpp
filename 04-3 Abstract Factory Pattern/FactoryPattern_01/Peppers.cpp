#include "Peppers.h"


Peppers::Peppers()
{
	this->name = "Peppers";
}


Peppers::~Peppers()
{
}

Ingredient* Peppers::createIngredient()
{
	return new Peppers();
}
