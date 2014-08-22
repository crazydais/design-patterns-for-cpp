#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"

int main()
{
	PizzaStore *nyps = new NYPizzaStore();
	nyps->orderPizza("cheese");

	std::cout << "\n-------------------------------\n" << std::endl;

	nyps->orderPizza("pepperoni");

	std::cout << "\n-------------------------------\n" << std::endl;

	nyps->orderPizza("clam");

	std::cout << "\n-------------------------------\n" << std::endl;

	nyps->orderPizza("veggie");

	std::cout << "\n\n" << std::endl;

	return 0;
}