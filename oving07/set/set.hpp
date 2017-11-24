#include <vector>
#include <ostream>
#include <set>
#ifndef SET
#define SET
using namespace std;
class Set {
public:
  Set();
  Set(std::vector<int> entries);
  Set operator+(Set &set) const;
  Set operator+(int &val) const;
  void operator=(Set &set);
  vector<int> getEntries() { return entries; }

private:
  vector<int> entries;
};
#endif
