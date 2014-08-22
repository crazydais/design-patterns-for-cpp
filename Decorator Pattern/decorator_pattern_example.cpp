/************************************************

    Written by Bill O'Sullivan, August 2014
    
    Aspire Technology
    www.aspiretechnology.com

************************************************/


#include <iostream>
#include <string>

using namespace std;

////////////////////////
//  Beverage classes  //
////////////////////////
class Beverage
{  
  public:
    string description;
    
    Beverage()
    {
      description = "Unknown Beverage";
    }

    virtual string getDescription()        // concrete class may over ride this method
    {
      return description;
    };
    
    virtual int getCost() = 0;             // Beverage is an abstract class
};

class Coffee: public Beverage
{
  public:
    Coffee()
    {
      description = "Coffee";
    }
    
    int getCost()
    {
      return 20;
    }
};

class Tea: public Beverage
{
  public:
    Tea()
    {
      description = "Tea";
    }
    
    int getCost()
    {
      return 10;
    }
};

/////////////////////////
//  Decorator classes  //
/////////////////////////
class CondimentDecorator: public Beverage     // Use inheritance for type matching
{
  virtual string getDescription() = 0;        // condiment decorator classes must reimplement getDescription()
};

class Milk: public CondimentDecorator
{
  private:
    Beverage* beverage;                      // The beverage which is being wrapped ...

  public:  
    Milk(Beverage* b) : beverage(b){};       // ... set in constructor
    
    string getDescription()
    {
      return beverage->getDescription().append(" + milk");  // first delegate to wrapped object then append "+ milk"
    }
    
    int getCost()
    {
      return beverage->getCost() + 5;
    }
};

class Sugar: public CondimentDecorator
{
  private:
    Beverage* beverage;  
      
  public:  
    Sugar(Beverage* b) : beverage(b){};
    
    string getDescription()
    {
      return beverage->getDescription().append(" + sugar");
    }
    
    int getCost()
    {
      return beverage->getCost() + 2;
    }
};

////////////////////////////
//  Function for testing  //
////////////////////////////
void printOrder(Beverage* order)
{
    cout << "Beverage: " << order->getDescription() << "  Price = " << order->getCost() << endl;
}

int main()
{
  // Coffee
  Coffee order1;
  printOrder(&order1);
  
  // Coffee with milk
  Milk order2(&order1);
  printOrder(&order2);
  
  // Coffee with sugar
  Sugar order3(&order1);
  printOrder(&order3);
  
  // Coffee with milk and sugar
  Sugar order4(&order2);
  printOrder(&order4);
  
  // Tea with 2 sugars
  Tea order5;
  Sugar order6(&order5);
  Sugar order7(&order6);
  printOrder(&order7);
  
  return 0;
}

/*
esekilx6279{xbilosu_main_rh}:=> g++ decorator.cpp 
esekilx6279{xbilosu_main_rh}:=> ./a.out 
Beverage: Coffee  Price = 20
Beverage: Coffee + milk  Price = 25
Beverage: Coffee + sugar  Price = 22
Beverage: Coffee + milk + sugar  Price = 27
Beverage: Tea + sugar + sugar  Price = 14
*/
