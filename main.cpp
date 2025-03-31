#include <iostream>
#include <string>
#include "task1.h"
#include "task2.h"

using namespace std;

// Виводить меню
void menu() {
    cout << "Оберіть завдання:\n";
    cout << "1. Перетворення двійкового числа у десяткове\n";
    cout << "2. Додавання символів до рядка\n";
    cout << "0. Вийти\n";
    cout << "Ваш вибір: ";
}

int main() {
    int choice;
    do {
        menu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                string str;
                cout << "Введіть двійкове число: ";
                cin >> str;
                if (is_valid_binary(str)) {
                    convert_binary(str);
                    cout << "Десятковий запис: " << str << endl;
                } else {
                    cout << "Помилка! Некоректний рядок." << endl;
                }
                break;
            }
            case 2: {
                string str1, str2;
                size_t n;
                cout << "Введіть основний рядок: ";
                getline(cin, str1);
                cout << "Введіть рядок, який потрібно додати: ";
                getline(cin, str2);
                cout << "Скільки символів додати: ";
                cin >> n;
                if (is_valid_string(str1)) {
                    append_chars(str1, str2, n);
                    cout << "Результат: " << str1 << endl;
                } else {
                    cout << "Помилка! Некоректний рядок." << endl;
                }
                break;
            }
            case 0:
                cout << "Вихід..." << endl;
                break;
            default:
                cout << "Невірний вибір!" << endl;
        }
    } while (choice != 0);
    
    return 0;
}
