#include "ThinCrustDough.h"

ThinCrustDough::ThinCrustDough()
{
	this->name = "Thin Crust Dough";
}

ThinCrustDough::~ThinCrustDough()
{

}

Ingredient* ThinCrustDough::createIngredient()
{
	return new ThinCrustDough();
}