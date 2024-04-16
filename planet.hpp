#include <string>

using namespace std;

class Planet
{
public:
  string name;
  float distance;

  Planet();
  Planet(string name, float distance);
  bool operator<(Planet planet);
  void print();
};
