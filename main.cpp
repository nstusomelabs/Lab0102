#include <iostream>
#include <string>
using namespace std;

// convert string to lower or to upper case
void tolower_toupper(string &str, bool up_down) {
  for (auto &ch: str) {ch = (up_down?toupper(ch):tolower(ch));}
}

void print(string &str) {
  for (auto ch: str) {cout << ch;}
  cout << endl;
}

int main(void) {
  cout << "type some string: ";
  string str = "";
  getline(cin, str);
  cout << endl;
  cout << "what d'ya want?\n0 - to lower case, 1 - to upper case\ntype here: ";
  bool up_down = 1;
  cin >> up_down;
  cout << endl;
  tolower_toupper(str, 1);
  cout << "result string is: ";
  print(str);
  return 0;
}
