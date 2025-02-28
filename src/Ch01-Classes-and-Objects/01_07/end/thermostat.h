#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>

class Thermostat
{
private:
  float temperature;
  unsigned int mode;
  std::string location;

public:
  Thermostat(float t, unsigned int m, std::string l);
  ~Thermostat();
  void displayStatus();
};
#endif