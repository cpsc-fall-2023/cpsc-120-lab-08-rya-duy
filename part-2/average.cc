// Duy Le
// 23dle@csu.fullerton.edu
// @LeDuy23
// Partners: @rya04

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    cout << "error: you must supply at least one number";
    return 1;
  }
  bool zero{true};
  double sum{0.0};

  for (string& argue : arguments) {
    if (zero) {
      zero = false;
      continue;
    }
    sum += stod(argue);
  }

  double average = sum / static_cast<double>(arguments.size() - 1);
  cout << " average = " << average << endl;
  return 0;
}
