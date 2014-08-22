#include "FrozenClams.h"


FrozenClams::FrozenClams()
{
	this->name = "Frozen Clams";
}


FrozenClams::~FrozenClams()
{
}

Ingredient* FrozenClams::createIngredient()
{
	return new FrozenClams();
}
