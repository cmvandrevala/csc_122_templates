#include <iostream>
#include <cmath>

#include "complex_number.hpp"

ComplexNumber::ComplexNumber(float x, float y)
{
  this->x = x;
  this->y = y;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber c)
{
  return ComplexNumber(x + c.x, y + c.y);
}

bool ComplexNumber::operator<(ComplexNumber c)
{
  return std::sqrt(x * x + y * y) < std::sqrt(c.x * c.x + c.y * c.y);
}

void ComplexNumber::pp()
{
  std::cout << this->x << " + " << this->y << "i" << std::endl;
}
