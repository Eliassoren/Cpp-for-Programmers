#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

template <typename type1, typename type2>
class Pair {

public:
  type1 type_1;
  type2 type_2;

  Pair(type1 t1, type2 t2) {
    type_1 = t1;
    type_2 = t2;
  }


  Pair operator+(const Pair<type1, type2> &otherPair) const {
    Pair<type1, type2> pair(type_1 + otherPair.type_1,
                            type_2 + otherPair.type_2);
    return pair;
  }

  // Casting between type 1 and 2 must be safe
  bool operator>(const Pair<type1, type2> &otherPair) const {
    type1 thisSum = type_1 + (type1)type_2;
    type1 otherSum = otherPair.type_1 + (type1)otherPair.type_2;

    return thisSum > otherSum;
  }
};

int main() {
  Pair<int, double> pair1(3, 2.0);
  Pair<int, double> pair2(2, 2.1);
  cout << "Pair1 : " << pair1.type_1 << ", " << pair1.type_2 << endl;
  cout << "Pair2: " << pair2.type_1 << ", " << pair2.type_2 << endl;
  if (pair1 > pair2)
    cout << "Pair1 > pair2 " << endl;
  auto sum = pair1 + pair2;
  cout << "Sum : " << sum.type_1 << ", " << sum.type_2 << endl;
  return 0;
}