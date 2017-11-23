#ifndef BROEK_DEFINERT
#define BROEK_DEFINERT

#include <ostream>

class Broek {
public:
  Broek();
  Broek(int initTeller, int initNevner);
  void settBroek(int nyTeller, int nyNevner = 1);
  friend std::ostream &operator<<(std::ostream &ut, const Broek &broek);

private:
  void forkort();
  int teller;
  int nevner;
};
#endif
