#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main()
{
	PizzaStore *nyps = new NYPizzaStore();
	PizzaStore *cps = new ChicagoPizzaStore();

	nyps->orderPizza("cheese");
	std::cout << "\n" << std::endl;
	cps->orderPizza("cheese");

	std::cout << "\n-------------------------------\n" << std::endl;

	nyps->orderPizza("pepperoni");
	std::cout << "\n" << std::endl;
	cps->orderPizza("pepperoni");

	std::cout << "\n-------------------------------\n" << std::endl;

	nyps->orderPizza("clam");
	std::cout << "\n" << std::endl;
	cps->orderPizza("clam");

	std::cout << "\n-------------------------------\n" << std::endl;

	nyps->orderPizza("veggie");
	std::cout << "\n" << std::endl;
	cps->orderPizza("veggie");

	std::cout << "\n\n" << std::endl;

	return 0;
}