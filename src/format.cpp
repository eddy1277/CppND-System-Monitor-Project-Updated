#include "format.h"

#include <string>

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  long h = seconds / 3600;
  seconds = seconds % 3600;
  long m = seconds / 60;
  long s = seconds % 60;
  string HH = std::to_string(h);
  HH = string(std::max(0, 2 - int(HH.length())), '0') + HH;
  string MM = std::to_string(m);
  MM = string(std::max(0, 2 - int(MM.length())), '0') + MM;
  string SS = std::to_string(s);
  SS = string(std::max(0, 2 - int(SS.length())), '0') + SS;
}