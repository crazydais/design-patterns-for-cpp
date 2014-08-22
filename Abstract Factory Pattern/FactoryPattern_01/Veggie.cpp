#include "Veggie.h"

Veggie::Veggie()
{
	this->name = "Veggie";
}

Veggie::~Veggie()
{

}

Ingredient* Veggie::createIngredient()
{
	return new Veggie();
}