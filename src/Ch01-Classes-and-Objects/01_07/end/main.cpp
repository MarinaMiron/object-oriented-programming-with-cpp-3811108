#include <iostream>
#include "thermostat.h"

int main()
{
  Thermostat livingRoomThermostat = Thermostat(21.3, 1, "Living room");
  
  livingRoomThermostat.displayStatus();
}