#include "ThickCrustDough.h"


ThickCrustDough::ThickCrustDough()
{
	this->name = "Thick Crust Dough";
}


ThickCrustDough::~ThickCrustDough()
{
}

Ingredient* ThickCrustDough::createIngredient()
{
	return new ThickCrustDough();
}
