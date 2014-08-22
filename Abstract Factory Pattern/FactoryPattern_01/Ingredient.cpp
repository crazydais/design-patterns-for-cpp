#include "Ingredient.h"

Ingredient::Ingredient()
{
	this->name = "";
}

Ingredient::~Ingredient()
{

}

std::string Ingredient::toString()
{
	return name;
}
