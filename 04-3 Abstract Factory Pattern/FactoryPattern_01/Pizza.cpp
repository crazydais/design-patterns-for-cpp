#include "Pizza.h"

Pizza::Pizza()
{ }


Pizza::~Pizza()
{
	std::cout << "Destroying " << this->getName() << std::endl;
}


std::string Pizza::getName()
{
	return this->name;
}

std::string Pizza::getDough()
{
	return this->dough->toString();
}

std::string Pizza::getSauce()
{
	return this->sauce->toString();
}

void Pizza::prepare()
{
	std::cout << "Preparing " << this->getName() << " with " << this->getDough() << " and " << this->getSauce() << ",\ntopped with";
	if (this->veggies.empty() != true)
	{
		for (std::vector<Ingredient*>::iterator it = this->veggies.begin(); it != this->veggies.end(); ++it)
		{
			Ingredient* temp = *it;
			std::cout << " " << temp->toString();

			//	Get the next iterator so long as it's not the last element or the second last element (ie, -1 from the end)
			if (std::next(it) != this->veggies.end() && std::next(it) != this->veggies.end() - 1)
			{
				std::cout << ", ";
			}
			//	If it is the second last element, print out ", and" after having printed the second last element
			if (std::next(it) == this->veggies.end() - 1)
			{
				std::cout << ", and ";
			}
		}
	}
	else
	{
		std::cout << " no toppings";
	}
		std::cout << std::endl;
}


void Pizza::bake()
{
	std::cout << "Baking " << this->getName() << std::endl;
}


void Pizza::cut()
{
	std::cout << "Cutting " << this->getName() << " into diagonal slices" << std::endl;
}


void Pizza::box()
{
	std::cout << "Boxing " << this->getName() << std::endl;
}