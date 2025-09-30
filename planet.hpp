#pragma once

#include <string>

class Planet
{
public:
  std::string name;
  float distance;

  Planet();
  Planet(std::string name, float distance);
  bool operator<(Planet planet);
};
