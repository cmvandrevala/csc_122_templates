#pragma once

#include <ostream>

#include "complex_number.hpp"
#include "planet.hpp"

std::ostream& operator<<(std::ostream& os, const ComplexNumber& complex)
{
    os << complex.x << " + " << complex.y << "i";
    return os;
}

std::ostream& operator<<(std::ostream& os, const Planet& planet)
{
    os << planet.name << ": " << planet.distance << " AU";
    return os;
}
