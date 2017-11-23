#ifndef FLATE_H
#define FLATE_H

#include <string>

class Flate {
public:
  Flate(const std::string &startNavn, double startLengde, double startBredde);
  Flate(double areal); // navn blir "ukjent", bredde = lengde = sqrt(areal)
  // explicit Flate(double areal); // navn blir "ukjent", bredde = lengde = sqrt(areal)

  std::string finnNavn() const { return navn; }
  double finnLengde() const { return lengde; }
  double finnBredde() const { return bredde; }
  double finnAreal() const;
  double finnOmkrets() const;
  int sammenlign(const Flate &denAndre) const;
  bool operator<(const Flate &denAndre) const;

private:
  std::string navn; // til identifikasjon
  double lengde;
  double bredde;
};
#endif
