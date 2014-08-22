#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <iostream>


//	Abstract Class
class Pizza
{
public:
	Pizza();							// must override this in the subclass
	virtual ~Pizza();

	virtual void prepare();
	virtual void bake();
	virtual void cut();
	virtual void box();
	virtual std::string getName();
	virtual std::string getDough();
	virtual std::string getSauce();

protected:
	std::string name = "standard pizza";
	std::string dough = "standard dough";
	std::string sauce = "standard sauce";
	std::vector<std::string> toppings;

};
