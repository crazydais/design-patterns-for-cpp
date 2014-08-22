#include "SlicedPepperoni.h"


SlicedPepperoni::SlicedPepperoni()
{
	this->name = "Sliced Pepperoni";
}


SlicedPepperoni::~SlicedPepperoni()
{
}

Ingredient* SlicedPepperoni::createIngredient()
{
	return new SlicedPepperoni();
}
