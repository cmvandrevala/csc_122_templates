#include <iostream>
#include "planet.hpp"

Planet::Planet(string name, float distance)
{
  this->name = name;
  this->distance = distance;
}

bool Planet::operator<(Planet planet)
{
  return this->distance < planet.distance;
}

void Planet::print()
{
  std::cout << this->name << ": " << this->distance << std::endl;
}
