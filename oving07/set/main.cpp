#include <iostream>
#include "set.hpp"
#include <vector>
using namespace std;

ostream &operator<<(ostream &stream, Set &set) {
  for (auto &val : set.getEntries()) {
    stream << val;
    stream << endl;
  }
  return stream;
}

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
  // a
  Set empty;
  Set set(v);
  Set other(w);

  // b
  Set unionSet = set + other;
  for (auto &val : unionSet.getEntries()) {
    cout << "union: " << val << endl;
  }
  //c
  // Set add = set+1;

  // d
  set = other;
  for (auto &val : set.getEntries()) {
    cout << "set =other " << val << endl;
  }

  Set n = empty + set;
  // e
  cout << n << endl;


  return 0;
}
