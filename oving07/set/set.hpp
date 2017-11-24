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
// Empty set
Set::Set() {
  entries = {

  };
}

Set::Set(std::vector<int> vec) : entries(vec) {
}

// Union of two sets
Set Set::operator+(Set &otherSet) const {
  std::set<int> unionEntries;
  for (auto &val : entries) {
    // Add element if search is unsuccessful. No duplicates
    if (unionEntries.find(val) == unionEntries.end()) {
      unionEntries.insert(val);
    }
  }
  for (auto &val : otherSet.getEntries()) {
    // Add element if search for element was unsuccessful. No duplicates
    if (unionEntries.find(val) == unionEntries.end()) {
      unionEntries.insert(val);
    }
  }
  vector<int> newEntries(unionEntries.begin(), unionEntries.end());
  Set newSet(newEntries);
  return newSet;
}

// Add element
Set Set::operator+(int &val) const {

  std::set<int> values(entries.begin(), entries.end());
  if (values.find(val) == values.end())
    values.insert(val);
  vector<int> newEntries(values.begin(), values.end());
  Set set(newEntries);
  return set;
}
// Assign set to other set.
void Set::operator=(Set &set) {
  entries = set.getEntries();
}
