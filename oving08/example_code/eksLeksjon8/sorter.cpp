#include <iostream>
#include <random>
#include <vector>

using namespace std;

template <class type>
void sorter(type &data) {
  for (size_t i = 0; i < data.size(); ++i) {
    int hittilMinst = i;
    for (size_t j = i + 1; j < data.size(); ++j) {
      if (data[j] < data[hittilMinst])
        hittilMinst = j;
    }
    auto hjelp = data[i];
    data[i] = data[hittilMinst];
    data[hittilMinst] = hjelp;
  }
}

int main() {
  std::default_random_engine generator;
  std::uniform_real_distribution<double> distribusjon(0.0, 10.0);

  vector<double> tabell;
  for (size_t i = 0; i < 10; ++i)
    tabell.emplace_back(distribusjon(generator));

  sorter(tabell);

  for (auto &tall : tabell)
    cout << tall << endl;
}

/*Eksempel kjøring av programmet:
0.850324
1.8969
3.98008
5.11713
5.6039
7.43512
8.09567
8.91611
9.66611
9.95085
*/
