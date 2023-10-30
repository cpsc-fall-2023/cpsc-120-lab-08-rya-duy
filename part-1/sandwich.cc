// Duy Le
// 23dle@csu.fullerton.edu
// @LeDuy23
// Partners: @ryra04

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    cout << "error: you must supply three arguments";
    return 1;
  }
  string protein{arguments.at(1)};
  string bread{arguments.at(2)};
  string condiment{arguments.at(3)};
  cout << "Your order:"
       << " A " << protein << " sandwich on " << bread << " with " << condiment
       << ". " << endl;
  return 0;
}
