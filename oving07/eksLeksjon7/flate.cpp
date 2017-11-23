#include "flate.h" // funksjonen fabs()
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

Flate::Flate(const string &startNavn, double startLengde, double startBredde) : navn(startNavn), lengde(startLengde), bredde(startBredde) {}

Flate::Flate(double areal) : navn("ukjent") {
  lengde = sqrt(areal);
  bredde = lengde;
}

double Flate::finnAreal() const {
  return bredde * lengde;
}

double Flate::finnOmkrets() const {
  return 2 * (lengde + bredde);
}

int Flate::sammenlign(const Flate &denAndre) const {
  const double toleranse = 0.00001;
  double areal1 = finnAreal();
  double areal2 = denAndre.finnAreal();
  if (fabs(areal2 - areal1) < toleranse)
    return 0;
  else if (areal1 < areal2)
    return -1;
  else
    return 1;
}

bool Flate::operator<(const Flate &denAndre) const {
  return (sammenlign(denAndre) < 0);
}

int main() {
  Flate f1("Flate1", 3, 3);
  Flate f2("Flate2", 2, 5);

  int res = f1.sammenlign(f2);
  if (res == 0)
    cout << "Flatene er like\n";
  else if (res < 0)
    cout << f1.finnNavn() << " er minst\n";
  else
    cout << f1.finnNavn() << " er størst\n";

  if (f1 < f2)
    cout << f1.finnNavn() << " er minst\n";
  if (f1.operator<(f2))
    cout << f1.finnNavn() << " er minst\n";

  Flate f3 = 25;
  // Flate f3(25); nødvendig hvis explicit brukes
  cout << "Lengde = " << f3.finnLengde() << ", bredde = " << f3.finnBredde() << endl;

  f2 = 50; // dette går ikke hvis explicit brukes
  cout << "Lengde = " << f2.finnLengde() << ", bredde = " << f2.finnBredde() << endl;
  return 0;
}
