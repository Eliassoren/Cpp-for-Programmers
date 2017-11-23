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

Set::Set() {
  entries = {

  };
}

Set::Set(std::vector<int> vec) {
  entries = vec;
}


Set Set::operator+(Set &otherSet) const {
  std::set<int> unionSet;
  for (auto &val : entries) {
    if (unionSet.find(val) == unionSet.end()) {
      unionSet.insert(val);
    }
  }
  for (auto &val : otherSet.getEntries()) {
    // Search for element was unsuccessful
    if (unionSet.find(val) == unionSet.end()) {
      unionSet.insert(val);
    }
  }
  vector<int> newEntries(unionSet.begin(), unionSet.end());
  Set newSet(newEntries);
  return newSet;
}
Set Set::operator+(int &val) const {

  std::set<int> values(entries.begin(), entries.end());
  if (values.find(val) == values.end())
    values.insert(val);
  vector<int> newEntries(values.begin(), values.end());
  Set set(newEntries);
  return set;
}

void Set::operator=(Set &set) {
  entries = set.getEntries();
}
