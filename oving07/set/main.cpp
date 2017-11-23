#include <iostream>
#include "set.h"
#include <vector>
using namespace std;
int main() {
  std::vector<int> v;
  v.emplace_back(1);
  v.emplace_back(3);
  v.emplace_back(7);
  v.emplace_back(3);
  v.emplace_back(9);
  v.emplace_back(4);
  v.emplace_back(0);
  std::vector<int> w;
  w.emplace_back(2);
  w.emplace_back(3);
  w.emplace_back(6);
  w.emplace_back(9);
  w.emplace_back(20);
  Set set(v);
  Set other(w);
  Set unionSet = set + other;

  for (auto &val : unionSet.getEntries()) {
    cout << "union: " << val << endl;
  }
  set = other;
  for (auto &val : set.getEntries()) {
    cout << "set =other " << val << endl;
  }
}
