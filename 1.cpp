#include <iostream>

#include "complex_number.hpp"

using namespace std;

int my_add(int x, int y)
{
  return x + y;
}

string my_add(string x, string y)
{
  return x + y;
}

char my_add(char x, char y)
{
  return x + y;
}

ComplexNumber my_add(ComplexNumber x, ComplexNumber y)
{
  return x + y;
}

int main()
{
  cout << endl;

  // INTEGERS

  int x = 5;
  int y = 7;

  cout << my_add(x, y) << endl;

  // STRINGS

  string a = "This is ";
  string b = "my string.";

  cout << my_add(a, b) << endl;

  // CHARS

  char u = 'u';
  char v = 'v';

  cout << my_add(u, v) << endl;

  // COMPLEX NUMBERS

  ComplexNumber c1 = ComplexNumber(1, 2);
  ComplexNumber c2 = ComplexNumber(3, 4);
  ComplexNumber result = my_add(c1, c2);

  result.pp();
}
