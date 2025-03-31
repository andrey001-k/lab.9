#include "task1.h"
#include <iostream>
#include <string>

using namespace std;

// Перевіряє, чи рядок містить лише '0' та '1'
bool is_valid_binary(const string& str) {
    if (str.empty()) return false; // Перевіряємо, чи не порожній
    for (char ch : str) {
        if (ch != '0' && ch != '1') return false; // Перевірка символів
    }
    return true;
}

// Перетворює двійковий рядок у десятковий
void convert_binary(string& str) {
    int decimal = stoi(str, nullptr, 2); // Конвертуємо двійковий рядок у десяткове число
    str = to_string(decimal); // Перезаписуємо рядок десятковим значенням
}
