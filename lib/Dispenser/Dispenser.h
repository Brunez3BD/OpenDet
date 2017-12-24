/*
 * FlowSensor.h - Library for XXXX flow sensors
 * Created by Michele Brunelli on 12 dec 2017
 * Ask the creator if you want to use this library, email me at brunellim94@gmail.com
 */

#ifndef DISPENSER_H
#define DISPENSER_H

#include <Controllino.h>

class Dispenser{
  public:

    Dispenser(int, int, int, int, String, int);
    int getBtnPin();
    int getFlowPin();
    int getPulses();
    int getPumpPin();
    String getDetName();
    int getPrice();
    void dispense(double = 1);

  private:

    int _btnPin;
    int _flowPin;
    int _pulsesPerLiter;
    int _pumpPin;
    String _detName;
    int _detPrice;
};

#endif
