#include "broek.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void skriv(const string &tekst, const Broek &broek) {
  cout << tekst << broek.finnTeller() << " / ";
  cout << broek.finnNevner() << endl;
}
void skriv(const string &tekst, const int i) {
  cout << tekst << i << endl;
}

int operator-(const int &a, const Broek &b) {
  Broek temp(a, 1);
  return (temp - b).toInt();
}

int main() {
  Broek a(10, 20);
  Broek b(3, 4);
  Broek c(1, 4);
  Broek d = a / b;
  Broek e(1, 4);

  skriv("a = ", a);
  skriv("b = ", b);
  skriv("c = ", c);
  skriv("d = ", d);

  b += a;
  ++c;
  d *= d;

  skriv("b = ", b);
  skriv("c = ", c);
  skriv("d = ", d);

  c = a + b - d * a;
  c = -c;

  skriv("c = ", c);

  if (a + b != c + d)
    cout << "a + b != c + d" << endl;
  else
    cout << " a + b == c + d" << endl;
  while (b > a)
    b -= a;
  skriv("b = ", b);

  Broek br = a - 5;


  // Oppg a
  skriv("a-5= ", br);
  skriv("5-1/2= ", 5 - a);


  skriv("5-1/4= ", 5 - e);

  skriv("Resultat av 5-1/4 direkte: ", 19 / 4);

  /* Oppg b
   * Tolker først 5-3 = 2, og 2-a = 1, siden a > 0, og den alltid må runde ned.
   * 1-7 = -6, og -6 - 0.25 = -6.
   * */
  skriv("5-3-1/2-7-1/4: ", 5 - 3 - a - 7 - e);

  return 0;
}
