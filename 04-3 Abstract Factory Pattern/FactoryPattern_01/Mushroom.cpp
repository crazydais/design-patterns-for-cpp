#include "Mushroom.h"


Mushroom::Mushroom()
{
	this->name = "Mushroom";
}


Mushroom::~Mushroom()
{
}

Ingredient* Mushroom::createIngredient()
{
	return new Mushroom();
}
