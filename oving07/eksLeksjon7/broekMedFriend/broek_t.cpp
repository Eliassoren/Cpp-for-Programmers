//-------------------------------------------------------------------
//
// broek_t.cpp
//
// Program som tester noen av funksjonene i klassen brøk.
//
#include "broek.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Broek a(10, 20);
  cout << "Brøken: " << a << endl;
  return 0;
}

//-------------------------------------------------------------------
//
// Funksjon for å skrive ut en brøk. friend av klassen Broek.
//
ostream &operator<<(ostream &ut, const Broek &broek) {
  ut << broek.teller << "/" << broek.nevner;
  return ut;
}

/* Utskrift:
Brøken: 1/2
*/