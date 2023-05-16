#include <iostream>
#include <Windows.h>

struct bankAcount {
    long long acountNumber{};
    std::string name{};
    double balance{};
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bankAcount info;

    std::cout << "Введите номер счёта: ";
    std::cin >> info.acountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> info.name;
    std::cout << "Введите баланс: ";
    std::cin >> info.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> info.balance;
    std::cout << "Ваш счёт: " << info.name << ", " << info.acountNumber << ", " << info.balance;
    return 0;
}

