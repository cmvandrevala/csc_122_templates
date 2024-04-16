class ComplexNumber
{
public:
  float x;
  float y;

  ComplexNumber(float x, float y);
  ComplexNumber operator+(ComplexNumber c);
  bool operator<(ComplexNumber c);
  void pp();
};
