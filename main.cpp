#include <iostream>
#include <string>
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
}
