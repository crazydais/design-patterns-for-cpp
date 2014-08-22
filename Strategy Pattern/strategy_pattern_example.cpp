/************************************************

    Written by Bill O'Sullivan, August 2014
    
    Aspire Technology
    www.aspiretechnology.com

************************************************/


#include <iostream>

using namespace std;

/////////////////////////////
//  Fly behaviour classes  //
/////////////////////////////
class FlyBehaviour     // interface which all flying behaviour classes implement
{
  public:
    virtual void fly() = 0;
};

class FlyWithWings: public FlyBehaviour
{
  public:
    void fly()
    {
      cout << "Flap flap flap...\n\n";
      return;
    }
};

class FlyNoWay: public FlyBehaviour
{
  public:
    void fly()
    {
      cout << "I can't fly\n\n";
      return;
    }
};

////////////////////
//  Duck classes  //
////////////////////
class Duck
{
  protected:
    FlyBehaviour*  flyBehaviour;        // reference to an object which implements flyBehaviour interface
    
  public:  
    void performFly()
    {
      flyBehaviour->fly();              // delegate to the behaviour class
    }
    
    void setFlyBehaviour(FlyBehaviour*  fb)     // allow the behaviour to be set at run-time
    {
      delete flyBehaviour;            // delete the old flybehaviour pointer, as not to cause a memory leak
      flyBehaviour = fb;
      
    }
    void swim()
    {
      cout << "splash splash...\n";
    }
       
    virtual void display() = 0;
    virtual ~Duck(){};
};

class MallardDuck: public Duck                 // concrete class
{
  public:
    MallardDuck()
    {
      flyBehaviour = new FlyWithWings;
    }
    
    ~MallardDuck()
    {
      delete flyBehaviour;
    }
    
    void display()
    {
      cout <<"Mallard Duck\n";
      return;
    }
};

class DecoyDuck: public Duck
{
  public:
    DecoyDuck()
    {
      flyBehaviour = new FlyNoWay;
    }
    
    ~DecoyDuck()
    {
      delete flyBehaviour;
    }
    
    void display()
    {
      cout <<"Decoy Duck\n";
      return;
    }    
};

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

/*
esekilx6279{xbilosu_main_rh}:=> g++ strategy.cpp
esekilx6279{xbilosu_main_rh}:=> ./a.out
Mallard Duck
Flap flap flap...

Decoy Duck
I can't fly

Decoy Duck
Flap flap flap...
*/
