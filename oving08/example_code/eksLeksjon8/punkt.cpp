#include <iostream>

using namespace std;

template <class type>
class Punkt {
public:
  type x, y, z;
  Punkt(type x, type y, type z) : x(x), y(y), z(z) {}

  Punkt operator+(const Punkt &andre) {
    Punkt punkt = *this;
    punkt.x += andre.x;
    punkt.y += andre.y;
    punkt.z += andre.z;
    return punkt;
  }

  friend ostream &operator<<(ostream &os, const Punkt &punkt) {
    return os << "(" << punkt.x << ", " << punkt.y << ", " << punkt.z << ")";
  }
};

int main() {
  {
    Punkt<int> p1(1, 2, 3), p2(2, 2, 2);

    cout << (p1 + p2) << endl;
  }
  {
    Punkt<double> p1(1.5, 2.5, 3.5), p2(2.0, 2.0, 2.0);

    cout << (p1 + p2) << endl;
  }
}
/* Utskrift:
(3, 4, 5)
(3.5, 4.5, 5.5)
*/
