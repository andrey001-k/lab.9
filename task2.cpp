#include "task2.h"
#include <iostream>
#include <string>

using namespace std;

// Функція для додавання n символів з іншого рядка
void append_chars(string& str, const string& add, size_t n) {
    str.append(add, 0, n); // Додаємо n символів з початку рядка add
}

// Перевірка, чи рядок не є порожнім
bool is_valid_string(const string& str) {
    return !str.empty();
}
