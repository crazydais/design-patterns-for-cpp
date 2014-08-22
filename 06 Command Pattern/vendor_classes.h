using namespace std;

class Light     
{
  public:
    void on()
    {
      cout << "Light is on\n";
    }
    
    void off()
    {
      cout << "Light is off\n";
    }
};

class Stereo     
{
  public:
    int volume;
    
    Stereo(){volume = 0;}
    
    void on()
    {
      cout << "Stereo is on; ";
    }
    
    void off()
    {
      cout << "Stereo is off\n";
    }
    
    void setCD()
    {
      cout << "Stereo is set for CD; ";
    }
    
    void setRadio()
    {
      cout << "Stereo is set for radio\n";
    }
    
    void setVolume(int volume)
    {
      this->volume = volume;
      cout << "Stereo volume is set to "<<volume << "\n";
    }
    
    int getVolume()
    {
      return volume;
    }
};
