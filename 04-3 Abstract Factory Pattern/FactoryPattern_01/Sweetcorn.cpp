#include "Sweetcorn.h"


Sweetcorn::Sweetcorn()
{
	this->name = "Sweetcorn";
}


Sweetcorn::~Sweetcorn()
{
}

Ingredient* Sweetcorn::createIngredient()
{
	return new Sweetcorn();
}
