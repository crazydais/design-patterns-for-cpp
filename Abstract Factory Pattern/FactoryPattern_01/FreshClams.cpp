#include "FreshClams.h"


FreshClams::FreshClams()
{
	this->name = "Fresh Clams";
}

FreshClams::~FreshClams()
{
}

Ingredient* FreshClams::createIngredient()
{
	return new FreshClams();
}
