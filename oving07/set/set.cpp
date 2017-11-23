// #include "set.h"
// #include <set>
// using namespace std;

// Set::Set(std::vector<int> vec) {
//   entries = vec;
// }

// Set Set::operator+(Set &otherSet) const {
//   std::set<int> unionSet;
//   for (auto &val : entries) {
//     if (unionSet.find(val) == unionSet.end()) {
//       unionSet.insert(val);
//     }
//   }
//   for (auto &val : otherSet.getEntries()) {
//     // Search for element was unsuccessful
//     if (unionSet.find(val) == unionSet.end()) {
//       unionSet.insert(val);
//     }
//   }
//   vector<int> newEntries(unionSet.begin(), unionSet.end());
//   Set newSet(newEntries);
//   return newSet;
// }

// Set Set::operator+(int &val) const {
//   Set set();
//   return set;
// }

// Set Set::operator+=(Set &set) {
//   Set set();
//   return set;
// }

// Set Set::operator+=(int &val) {
//   Set set();
//   return set;
// }
// Set Set::operator=(Set set) const {
//   Set set();
//   return set;
// }