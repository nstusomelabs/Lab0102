#include <iostream>
#include <string>
using namespace std;

// convert string to lower or to upper register
void tolower_toupper(string &str, bool up_down) {
  for (auto &ch: str) {ch = (up_down?toupper(ch):tolower(ch));}
}

void print(string &str) {
  for (auto ch: str) {cout << ch << " ";}
  cout << endl;
}

int main(void) {
  string str = "abcdef";
  print(str);
  tolower_toupper(str, 1);
  print(str);
  return 0;
}
