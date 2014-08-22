#include <iostream>
#include "vendor_classes.h"                   // the receiver classes

using namespace std;

//////////////////////
// Command classes  //
//////////////////////
class Command                                // Command interface
{
  public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};

class LightOnCommand: public Command         // ConcreteCommand
{
  private:
    Light* light;           
    
  public:
    LightOnCommand(Light* l):light(l) {};   // encapsulate receiver object...
    
    void execute()
    {
      light->on();                          // call appropriate receiver object method...
      return;
    }
    
    void undo()
    {
      light->off();
      return;
    }
};

class LightOffCommand: public Command         // ConcreteCommand
{
  private:
    Light* light;
    
  public:
    LightOffCommand(Light* l):light(l) {};
    
    void execute()
    {
      light->off();
      return;
    }
    
    void undo()
    {
      light->on();
      return;
    }
};

class StereoOnCommand: public Command         // ConcreteCommand
{
  private:
    Stereo* stereo;
    
  public:
    StereoOnCommand(Stereo* s):stereo(s) {};
    
    void execute()
    {
      stereo->on();
      stereo->setCD();
      stereo->setVolume(6);
      return;
    }
    
    void undo()
    {
      stereo->off();
      return;
    }
};

class StereoOffCommand: public Command       // ConcreteCommand
{
  private:
    Stereo* stereo;
    int previousVolume;                     // save the previous volume to allow undo
    
  public:
    StereoOffCommand(Stereo* s):stereo(s) {previousVolume = 0;}
        
    void execute()
    {
      previousVolume = stereo->getVolume();  // Stereo class includes volume level 
      stereo->off();
      return;
    }
    
    void undo()
    {
      stereo->on();
      stereo->setCD();
      stereo->setVolume(previousVolume);
      return;
    }
};

class NoCommand: public Command                // Null object
{    
  public:    
    void execute() {cout << "execute: do nothing\n";}    
    void undo() {cout << "undo: do nothing\n";}
};


////////////////////////////////////
// Invoker - remote control class //
////////////////////////////////////
const int numSlots = 3;

class RemoteControl
{
  private:
   Command* onCommands[numSlots];            
   Command* offCommands[numSlots];
   Command* undoCommand;                    // save the last executed command to support undo 
   NoCommand noCommand;                     // NULL object
  
  public:
    RemoteControl()
    {
      for (int i = 0; i < numSlots; i++)           // initialise the slots and undo with NULL object
      {
        onCommands[i] = &noCommand;
	    offCommands[i] = &noCommand;
      }
      undoCommand = &noCommand;
    }
    
    void setCommand (int slot, Command* onCommand, Command* offCommand)     // parameterize slot with command objects
    {
      onCommands[slot] = onCommand;
      offCommands[slot] = offCommand;
    }
    
    void onButtonWasPushed(int slot)
    {
      onCommands[slot]->execute();
      undoCommand = onCommands[slot];      // save last executed command
    }
    
    void offButtonWasPushed(int slot)
    {
      offCommands[slot]->execute();
      undoCommand = offCommands[slot];     // save last executed command
    }
    
    void undo()
    {
      undoCommand->undo();
    }
};


int main()
{ 
  // create receiver objects from vendor classes
  Light light;
  Stereo stereo;

  // create the On and Off Command Objects
  LightOnCommand lightOnCommand(&light);
  LightOffCommand lightOffCommand(&light);  
  StereoOnCommand stereoOnCommand(&stereo);
  StereoOffCommand stereoOffCommand(&stereo);
  
  // create and load invoker - the remote control
  RemoteControl remoteControl;
  remoteControl.setCommand(0, &lightOnCommand, &lightOffCommand);      // slot 0 if for the light
  remoteControl.setCommand(1, &stereoOnCommand, &stereoOffCommand);    // slot 1 is for the stereo
  
  // test on and off buttons
  cout << "\nTest On and Off buttons:\n";
  for (int i = 0; i < numSlots; i++)
  {
    remoteControl.onButtonWasPushed(i);
    remoteControl.offButtonWasPushed(i);
  }

  // test undo button
  cout << "\nTest Undo after On and after Off:\n";
  for (int i = 0; i < 2; i++)
  {
    remoteControl.onButtonWasPushed(i);
    remoteControl.undo();
    remoteControl.offButtonWasPushed(i);
    remoteControl.undo();
  }
  return 0;
}

/*
esekilx6279{xbilosu_main_rh}:=> g++ command_pattern_example.cpp 
esekilx6279{xbilosu_main_rh}:=> ./a.out 

Test On and Off buttons:
Light is on
Light is off
Stereo is on; Stereo is set for CD; Stereo volume is set to 6
Stereo is off
execute: do nothing
execute: do nothing

Test Undo after On and after Off:
Light is on
Light is off
Light is off
Light is on
Stereo is on; Stereo is set for CD; Stereo volume is set to 6
Stereo is off
Stereo is off
Stereo is on; Stereo is set for CD; Stereo volume is set to 6
*/