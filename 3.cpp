#include <iostream>

#include "complex_number.hpp"

using namespace std;

template <typename T, typename U>
T my_max(T x, U y)
{
    return (x < y) ? y : x;
}

int main()
{
    int a = 5;
    int b = 7;
    cout << "Two Ints: " << my_max(a, b) << endl;

    float c = 5.2;
    float d = 7.3;
    cout << "Two Floats: " << my_max(c, d) << endl;

    int e = 5;
    float f = 7.3;
    cout << "Int and float: " << my_max(e, f) << endl; // uh oh... what is happening here?

    ComplexNumber g(3, 4);
    ComplexNumber h(7, 1);
    cout << "Two Complex Numbers: ";
    my_max(g, h).pp();

    // int i = 5;
    // ComplexNumber j(7, 2);
    // cout << "Int and complex number: " << my_max(i, j) << endl; // uh oh... what is happening here?

    return 0;
}