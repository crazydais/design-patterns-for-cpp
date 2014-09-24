#pragma once

#include <string>
#include <vector>


//	Abstract Class
class Ingredient
{
protected:
	std::string name;

public:
	Ingredient()
	{
		this->name = "";
	}

	virtual ~Ingredient() {   }

	virtual std::string toString()
	{
		return this->name;
	}

	virtual Ingredient* createIngredient() = 0;
};

