#include <iostream>

using namespace std;

template <class type1, class type2>
void skriv(const type1 &objekt1, const type2 &objekt2) {
  cout << objekt1 << " " << objekt2 << endl;
}

int main() {
  int antall = 5;
  skriv("Svaret er ", antall);
  skriv(100, 0.05);
  skriv('\n', "Hallo");
  return 0;
}

/* Kjøring av programmet:

Svaret er  5
100 0.05

 Hallo
*/
