#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  vector<int> v2 = {2, 3, 12, 14, 24};

  // a)

  vector<int>::iterator it = find_if(v1.begin(), v1.end(), [](int i) {
    return i > 15;
  });

  cout << "First value over 15: " << *it << endl;
  // b)
  vector<int> v1plus5(v1.begin(), v1.begin() + 5);
  bool eq = equal(v2.begin(), v2.end(), v1plus5, [](int i1, int i2) {
    return abs(i1 - i2) < 2;
  });
  string output = eq ? "Equal" : "Not equal";
  cout << output << endl;
}