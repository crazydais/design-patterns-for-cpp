/************************************************

    Written by Bill O'Sullivan, August 2014
    
    Aspire Technology
    www.aspiretechnology.com

************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//////////////////////////
//  observer interface  //
//////////////////////////
class Observer                                              // observer interface
{
  public:
    virtual void update(int temperature, int pressure, int humidity) = 0;
    virtual ~Observer(){};
};

//////////////////////////////////////////////
//  subject interface and concrete subject  //
//////////////////////////////////////////////
class Subject                                               // subject interface
{
  public:
    virtual void registerObserver(Observer* obs) = 0;
    virtual void removeObserver(Observer* obs) = 0;
    virtual void notifyObservers() = 0;
};

class WeatherData: public Subject                           // concrete subject
{
  private:
    vector <Observer*> observers;
    int temperature;
    int pressure;
    int humidity;
    
  public:
    void registerObserver(Observer* obs)
    {
      observers.push_back(obs);
      cout << "WeatherData: Observer registered. Number of observers = " << observers.size()  << "\n";
    }
    
    void removeObserver(Observer* obs)
    {
      observers.erase(remove(observers.begin(), observers.end(), obs), observers.end()); 
      cout << "WeatherData: Observer unregistered. Number of observers = " << observers.size()  << "\n";

    }
    
    void notifyObservers()
    {
      for (int i = 0; i < observers.size(); i++ )
      {
        observers[i]->update(temperature, pressure, humidity);
      }
    }
    
    void setWeatherData(int t, int p, int h)
    {
      temperature = t;
      pressure = p;
      humidity = h;
      notifyObservers();
    }
};

//////////////////////////
//  concrete observers  //
//////////////////////////
class DisplayCurrentTemperature: public Observer            //  observer concrete class
{
  private:
    int temperature;
    Subject* weatherdata;
  
  public:  
    DisplayCurrentTemperature(Subject* s)
    {
      weatherdata = s;
      weatherdata->registerObserver(this);
    }
    
    ~DisplayCurrentTemperature()
    {
      weatherdata->removeObserver(this);
    }
    
    void update(int t, int p, int h)
    {
      temperature = t;
      display();
    }
    
    void display()
    {
      cout << "DisplayCurrentTemperature : temperature = " << temperature << endl;
    }
};

class DisplayCurrentConditions: public Observer            //  observer concrete class
{  
  private:
    int temperature;
    int pressure;
    int humidity;
    Subject* weatherdata;
  
  public:  
    DisplayCurrentConditions(Subject* s)
    {
      weatherdata = s;
      weatherdata->registerObserver(this);
    }
    
    ~DisplayCurrentConditions()
    {
      weatherdata->removeObserver(this);
    }
    
    void update(int t, int p, int h)
    {
      temperature = t;
      pressure = p;
      humidity = h;
      display();
    }
    
    void display()
    {
      cout << "DisplayCurrentConditions : temperature = " << temperature;
      cout << ", pressure    = " << pressure;
      cout << ", humidity    = " << humidity << endl;
    }
};

////////////////
//  Test ...  //
////////////////
int main()
{  
  cout << "\nCreate WeatherData object and 2 display observer objects...\n";
  WeatherData* weather = new WeatherData;                                          // create subject object  
  DisplayCurrentConditions* conditions = new DisplayCurrentConditions(weather);    // create observer objects
  DisplayCurrentTemperature* temperature = new DisplayCurrentTemperature(weather);
  
  cout << "\nCall setWeatherData()...\n";
  weather->setWeatherData(12, 960, 50);

  cout << "\nCall setWeatherData()...\n";
  weather->setWeatherData(14, 980, 60);

  cout << "\nDetete current conditions display object and call setWeatherData()...\n";
  delete conditions;
  weather->setWeatherData(16, 1000, 70);

  cout << "\nDetete current temperature display object and call setWeatherData()...\n";
  delete temperature;
  weather->setWeatherData(18, 1010, 80);
  
  delete weather;   
  return 0;
}

/*
esekilx6279{xbilosu_main_rh}:=> g++ ./observer_pattern_example.cpp
esekilx6279{xbilosu_main_rh}:=> ./a.out

Create WeatherData object and 2 display observer objects...
WeatherData: Observer registered. Number of observers = 1
WeatherData: Observer registered. Number of observers = 2

Call setWeatherData()...
DisplayCurrentConditions : temperature = 12, pressure    = 960, humidity    = 50
DisplayCurrentTemperature : temperature = 12

Call setWeatherData()...
DisplayCurrentConditions : temperature = 14, pressure    = 980, humidity    = 60
DisplayCurrentTemperature : temperature = 14

Detete current conditions display object and call setWeatherData()...
WeatherData: Observer unregistered. Number of observers = 1
DisplayCurrentTemperature : temperature = 16

Detete current temperature display object and call setWeatherData()...
WeatherData: Observer unregistered. Number of observers = 0
*/