#include "thermostat.h"

Thermostat::Thermostat(float t, unsigned int m, std::string l)
{
  temperature = t;
  mode = m;
  location = l;
}

Thermostat::~Thermostat()
{
  std::cout << "Thermostat in " << location << " is being destroyed" << std::endl;
}
void Thermostat::displayStatus()
{
  std::string smode;
  if (mode == 0)
  {
    smode = "OFF";
  }
  else if (mode == 1)
  {
    smode = "COOLING";
  }
  else if (mode == 2)
  {
    smode = "HEATING";
  }
  else
  {
    smode = "Wrong function";
  }

  std::cout << "Temperature: " << temperature << "°C\nMode: " << smode << "\nLocation: " << location << std::endl;
}