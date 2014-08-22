#include "Garlic.h"


Garlic::Garlic()
{
	this->name = "Garlic";
}

Garlic::~Garlic()
{
}

Ingredient* Garlic::createIngredient()
{
	return new Garlic();
}