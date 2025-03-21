#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//cinnebt
// comment
enum Mode {
  TOLOWER_CASE,
  TOUPPER_CASE,
  PALINDROME
};

// convert string to lower or to upper case
void tolower_toupper(string &str, bool up_down) {
  for (auto &ch: str) {ch = (up_down?toupper(ch):tolower(ch));}
}

bool isPalindrome(const string& str) {
    string cleanedStr;
    
    // Удаляем пробелы и приводим строку к нижнему регистру
    for (char ch : str) {
        if (isalnum(ch)) { // Проверяем, является ли символ буквой или цифрой
            cleanedStr += tolower(ch);
        }
    }

    // Проверяем, является ли строка палиндромом
    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());
    
    return cleanedStr == reversedStr;
}

void print(string str) {
  for (auto ch: str) {cout << ch;}
  cout << endl;
}

int main() {
  cout << "Enter string: ";
  string str;
  getline(cin, str);
  cout << "What d'ya want to do?\n(0) to convert string to lower case\n(1) to convert string to upper case\n(2) to check if string is palindrome\nEnter: ";
 
  string input;
  getline(cin, input);
  if (input.length() == 1 && isdigit(input[0])) {
    int mode_value = input[0] - '0';
    if (mode_value >= TOLOWER_CASE && mode_value <= PALINDROME) {
      Mode mode = static_cast<Mode>(mode_value);
      switch (mode) {
        case TOLOWER_CASE:
          tolower_toupper(str, 0);
          cout << "Result string is ";
          print(str);
          break;
        case TOUPPER_CASE:
          tolower_toupper(str, 1);
          cout << "Result string is ";
          print(str);
          break;
        case PALINDROME:
          bool palindrome = isPalindrome(str);
          cout << "String is " << (palindrome?"":"not ") << "palindrome" << endl;
          break;
      }
    } else {cout << "This mode doesn't exist. Try 0, 1 or 2.";}
  } else {cout << "Ah, I don't understand! Wrong input!";}

  return 0;
}
