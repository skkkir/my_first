#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool isPalindrome(const string& str) {
    // Убираем пробелы и приводим к нижнему регистру
    string cleanedStr;
    string reversedStr;
    for (char c : str) {
        if (isalnum(c)) { // Проверяем, является ли символ буквой или цифрой
            cleanedStr += tolower(c);
        }
    }
    reversedStr = cleanedStr;

    reverse(reversedStr.begin(), reversedStr.end());

    return cleanedStr == reversedStr;
}

int main() {
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Строка является палиндромом." << endl;
    } else {
        cout << "Строка не является палиндромом." << endl;
    }

    return 0;
}
