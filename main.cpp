#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// convert string to lower or to upper case
void tolower_toupper(string &str, bool up_down) {
  for (auto &ch: str) {ch = (up_down?toupper(ch):tolower(ch));}
}

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    
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
    return 0;
}
