#include "ReggianoCheese.h"


ReggianoCheese::ReggianoCheese()
{
	this->name = "Reggiano Cheese";
}


ReggianoCheese::~ReggianoCheese()
{
}

Ingredient* ReggianoCheese::createIngredient()
{
	return new ReggianoCheese();
}
