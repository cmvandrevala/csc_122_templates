#include <iostream>

#include "complex_number.hpp"
#include "planet.hpp"
#include "custom_ostream.hpp"

template <class T>
void bubbleSort(T a[], int n)
{
  for (int i = 0; i < n - 1; i++)
    for (int j = n - 1; i < j; j--)
      if (a[j] < a[j - 1])
        std::swap(a[j], a[j - 1]);
}

int main()
{
  // INTEGERS

  int integers[5] = {10, 50, 30, 40, 20};

  bubbleSort<int>(integers, 5);

  for (int i = 0; i < 5; i++)
  {
    std::cout << integers[i] << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  // COMPLEX NUMBERS

  ComplexNumber complex_numbers[4] = {ComplexNumber(5, -1), ComplexNumber(2, 7), ComplexNumber(1, 0), ComplexNumber(0, 2)};

  bubbleSort<ComplexNumber>(complex_numbers, 4);

  for (int i = 0; i < 4; i++)
  {
    std::cout << complex_numbers[i] << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  // PLANETS

  Planet planets[8] = {Planet("Earth", 1.00),
                       Planet("Neptune", 30.06),
                       Planet("Jupiter", 5.20),
                       Planet("Mercury", 0.39),
                       Planet("Mars", 1.52),
                       Planet("Uranus", 19.22),
                       Planet("Saturn", 9.54),
                       Planet("Venus", 0.72)};

  bubbleSort<Planet>(planets, 8);

  for (int i = 0; i < 8; i++)
  {
    std::cout << planets[i] << std::endl;
  }

  return 0;
}
