//-------------------------------------------------------------------
//
// broek.cpp - implementasjonsfil
//
#include "broek.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Broek::Broek(int initTeller, int initNevner) {
  settBroek(initTeller, initNevner);
}

void Broek::settBroek(int nyTeller, int nyNevner) {
  if (nyNevner != 0) {
    teller = nyTeller;
    nevner = nyNevner;
    forkort();
  } else {
    throw "nevneren ble null";
  }
}


//-------------------------------------------------------------------
//
// Sørg for at nevneren alltid er positiv, og brøken mest mulig
// forkortet. Bruker Euclids algoritme for å finne fellesnevneren.
//
void Broek::forkort() {
  if (nevner < 0) {
    teller = -teller;
    nevner = -nevner;
  }
  int a = teller;
  int b = nevner;
  int c;
  if (a < 0)
    a = -a;

  while (b > 0) {
    c = a % b;
    a = b;
    b = c;
  }
  teller /= a;
  nevner /= a;
}
