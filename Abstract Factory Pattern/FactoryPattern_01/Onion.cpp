#include "Onion.h"


Onion::Onion()
{
	this->name = "Onion";
}


Onion::~Onion()
{
}

Ingredient* Onion::createIngredient()
{
	return new Onion();
}