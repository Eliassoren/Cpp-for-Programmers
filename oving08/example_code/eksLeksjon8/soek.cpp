#include <iostream>
#include <random>
#include <vector>

using namespace std;

template <class type>
size_t soek(const vector<type> &data, type soekEtter) {
  size_t i = 0;
  while (i < data.size() && data[i] != soekEtter)
    ++i;
  if (i < data.size())
    return i;
  else
    return -1;
}

int main() {
  vector<double> tabell;
  for (size_t i = 0; i < 10; ++i)
    tabell.emplace_back(static_cast<double>(i) / 2.0); // static_cast<double>(1.0) er en moderne (og tryggere) måte å skrive (double)1.0 på

  cout << soek(tabell, 0.5) << endl;
  //cout << soek(tabell, 1) << endl; // Prøv å kompiler med denne linjen
  cout << soek(tabell, 1.0) << endl;
  cout << soek(tabell, static_cast<double>(1.0)) << endl;
}
/* Utskrift:
1
2
2
*/
