#pragma once

#include <string>

//	Abstract
class Ingredient
{
public:
	Ingredient();
	virtual ~Ingredient();

	virtual std::string toString();
	virtual Ingredient* createIngredient() = 0;

protected:
	std::string name;
};

