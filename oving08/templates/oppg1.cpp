#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

template <class type>
bool equals(type a, type b) {
  cout << "Type" << endl;
  return a == b;
}

bool equals(double a, double b) {
  cout << "Double" << endl;
  return abs(a - b) < 0.000001;
}

int main() {
  int A = 1;
  int B = 2;
  int C = 1;
  cout << "A equals B :" << equals(A, B) << endl;
  cout << "A equals C :" << equals(A, C) << endl;

  double a = 1.01;
  double b = 0.0002;
  double c = 1.00999;
  double d = 1.0099999;
  cout << "a equals b :" << equals(a, b) << endl;
  cout << "a equals c :" << equals(a, c) << endl;
  cout << "a equals d :" << equals(a, d) << endl;
}
