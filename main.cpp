#include <iostream>
#include <string>
<<<<<<< HEAD
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
=======
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    
    // Удаляем пробелы и приводим строку к нижнему регистру
    for (char ch : str) {
        if (std::isalnum(ch)) { // Проверяем, является ли символ буквой или цифрой
            cleanedStr += std::tolower(ch);
        }
    }

    // Проверяем, является ли строка палиндромом
    std::string reversedStr = cleanedStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    
    return cleanedStr == reversedStr;
}

int main() {
    std::string input;
    
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    
    if (isPalindrome(input)) {
        std::cout << "Строка является палиндромом!" << std::endl;
    } else {
        std::cout << "Строка не является палиндромом." << std::endl;
    }
    
    return 0;
>>>>>>> origin/palindrome2
}
