#include "MozzarellaCheese.h"


MozzarellaCheese::MozzarellaCheese()
{
	this->name = "Mozzarella Cheese";
}


MozzarellaCheese::~MozzarellaCheese()
{
}

Ingredient* MozzarellaCheese::createIngredient()
{
	return new MozzarellaCheese();
}
