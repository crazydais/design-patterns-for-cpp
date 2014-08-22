#include "MallardDuck.h"
#include "DecoyDuck.h"

int main()
{
	MallardDuck mallard;
	mallard.display();
	mallard.performFly();

	DecoyDuck decoy;
	decoy.display();
	decoy.performFly();

	decoy.setFlyBehaviour(new FlyWithWings);
	decoy.display();
	decoy.performFly();

	return 0;
}