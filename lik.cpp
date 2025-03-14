#include <iostream>
#include <string>
#include <cctype> // для toupper и tolower

int main() {
    setlocale(LC_ALL, "RU");
    std::string input;

    // Ввод строки от пользователя
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Приведение всех букв к верхнему регистру
    std::string upperCase = input;
    for (char& c : upperCase) {
        c = std::toupper(c);
    }

    // Приведение всех букв к нижнему регистру
    std::string lowerCase = input;
    for (char& c : lowerCase) {
        c = std::tolower(c);
    }

    // Вывод результатов
    std::cout << "Строка в верхнем регистре: " << upperCase << std::endl;
    std::cout << "Строка в нижнем регистре: " << lowerCase << std::endl;

    return 0;
}