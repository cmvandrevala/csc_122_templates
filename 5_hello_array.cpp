#include <iostream>

#include "complex_number.hpp"
#include "planet.hpp"
#include "custom_ostream.hpp"

template <typename T>
class HelloArray
{
private:
  T *ptr;
  int size;

public:
  HelloArray(T arr[], int s)
  {
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
      ptr[i] = arr[i];
  }
  void print()
  {
    for (int i = 0; i < size; i++)
    {
      std::cout << "Hello " << *(ptr + i) << std::endl;
    }
    std::cout << std::endl;
  }
};

int main()
{
  int integers[5] = {1, 2, 3, 4, 5};
  HelloArray<int> hello_integers(integers, 5);
  hello_integers.print();

  char chars[3] = {'a', 'b', 'c'};
  HelloArray<char> hello_chars(chars, 3);
  hello_chars.print();

  std::string strings[4] = {"These", "are", "fantastic", "strings"};
  HelloArray<std::string> hello_strings(strings, 4);
  hello_strings.print();

  ComplexNumber complex_numbers[3] = { ComplexNumber(3, 5), ComplexNumber(4, 9), ComplexNumber(12,2) };
  HelloArray<ComplexNumber> hello_complex_numbers(complex_numbers, 3);
  hello_complex_numbers.print();

  Planet planets[8] = {Planet("Earth", 1.00),
                      Planet("Neptune", 30.06),
                      Planet("Jupiter", 5.20),
                      Planet("Mercury", 0.39),
                      Planet("Mars", 1.52),
                      Planet("Uranus", 19.22),
                      Planet("Saturn", 9.54),
                      Planet("Venus", 0.72)};
  HelloArray<Planet> hello_planets(planets, 8);
  hello_planets.print();

  return 0;
}
