#include <iostream>
#include "planet.hpp"

using namespace std;

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
      cout << "Hello " << *(ptr + i) << endl;
    }
    cout << endl;
  }
};

int main()
{
  int int_arr[5] = {1, 2, 3, 4, 5};
  HelloArray<int> hello_int_arr(int_arr, 5);
  hello_int_arr.print();

  char char_arr[3] = {'a', 'b', 'c'};
  HelloArray<char> hello_char_arr(char_arr, 3);
  hello_char_arr.print();

  string string_arr[4] = {"These", "are", "fantastic", "strings"};
  HelloArray<string> hello_string_arr(string_arr, 4);
  hello_string_arr.print();

  // This does not work :(
  // Planet planet[8] = {Planet("Earth", 1.00),
  //                     Planet("Neptune", 30.06),
  //                     Planet("Jupiter", 5.20),
  //                     Planet("Mercury", 0.39),
  //                     Planet("Mars", 1.52),
  //                     Planet("Uranus", 19.22),
  //                     Planet("Saturn", 9.54),
  //                     Planet("Venus", 0.72)};

  // HelloArray<Planet> hello_planets(planet, 8);
  // hello_planets.print();

  return 0;
}
