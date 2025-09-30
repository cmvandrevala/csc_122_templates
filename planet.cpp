#include <iostream>

#include "planet.hpp"

Planet::Planet()
{
  this->name = "";
  this->distance = 0;
}

Planet::Planet(std::string name, float distance)
{
  this->name = name;
  this->distance = distance;
}

bool Planet::operator<(Planet planet)
{
  return this->distance < planet.distance;
}

