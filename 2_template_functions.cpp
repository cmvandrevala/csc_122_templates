#include <iostream>

#include "complex_number.hpp"
#include "custom_ostream.hpp"

using namespace std;

template <typename T>
T my_add(T x, T y)
{
  return x + y;
}

template <typename T>
T my_max(T x, T y)
{
  return (x < y) ? y : x;
}

int main()
{
  cout << endl;

  // INTEGERS

  int x = 5;
  int y = 7;

  cout << "Adding Integers: " << my_add(x, y) << endl;
  cout << "Max of Integers: " << my_max(x, y) << endl;

  // STRINGS

  string a = "This is ";
  string b = "my string.";

  cout << "Adding Strings: " << my_add(a, b) << endl;
  cout << "Max of Strings: " << my_max(a, b) << endl;

  // CHARS

  char u = 'u';
  char v = 'v';

  cout << "Adding Chars: " << my_add(u, v) << endl;
  cout << "Max of Chars: " << my_max(u, v) << endl;

  // COMPLEX NUMBERS

  ComplexNumber c1 = ComplexNumber(1, 2);
  ComplexNumber c2 = ComplexNumber(3, 4);

  cout << "Adding Complex Numbers: " << my_add(c1, c2) << endl;
  cout << "Max of Complex Numbers: " << my_max(c1, c2) << endl;
}
