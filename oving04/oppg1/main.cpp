#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void oppg1() {
  vector<double> arr;
  vector<double>::iterator itr;
  arr.push_back(5.1);
  arr.push_back(7.8);
  arr.push_back(71.33);
  arr.push_back(1.);
  arr.push_back(101.101);
  cout << "Front: " << arr.front() << endl;
  cout << "Back: " << arr.back() << endl;
  arr.emplace(arr.begin(), 2.6);
  cout << "Front: " << arr.front() << endl;
  itr = find(arr.begin(), arr.end(), 1.);
  if (itr != arr.end())
    cout << "Verdi funnet i tabell: " << *itr << endl;
  else
    cout << "Verdi ikke funnet" << endl;
}

int main() {
  oppg1();
}
