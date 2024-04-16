#include <iostream>

#include "complex_number.hpp"
#include "planet.hpp"

using namespace std;

template <class T>
void bubbleSort(T a[], int n)
{
  for (int i = 0; i < n - 1; i++)
    for (int j = n - 1; i < j; j--)
      if (a[j] < a[j - 1])
        swap(a[j], a[j - 1]);
}

int main()
{
  // INTEGERS

  int a[5] = {10, 50, 30, 40, 20};

  bubbleSort<int>(a, 5);

  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << endl;
  }

  cout << endl;
  cout << endl;

  // COMPLEX NUMBERS

  ComplexNumber complex[4] = {ComplexNumber(5, -1), ComplexNumber(2, 7), ComplexNumber(1, 0), ComplexNumber(0, 2)};

  bubbleSort<ComplexNumber>(complex, 4);

  for (int i = 0; i < 4; i++)
  {
    complex[i].pp();
  }

  cout << endl;
  cout << endl;

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
    planets[i].print();
  }

  return 0;
}
