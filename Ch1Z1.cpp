#include <iostream>
#include <cmath>
#include "Ch1Z1.h"

namespace HomeworkInCpp {

    void Ch1Z1::Run() {
        std::cout << "\n===== Часть 1. Задание 1 =====\n";
        std::cout << "Пользователь вводит два числа. Оба числа не являются нулём.";
        std::cout << "\nВывести их сумму, разность, произведение, частное.\n";
        
        std::cout << "\nВведите два ненулевых числа:\n";

        double a, b;
        std::cin >> a >> b;

        if (!std::cin || a == 0 || b == 0) {
            std::cout << "\nОшибка: введён нуль.\n";
            return;
        }

        std::cout << "\nСумма: " << a + b << ";\n";
        std::cout << "Разность: " << a - b << ";\n";
        std::cout << "Произведение: " << a * b << ";\n";
        std::cout << "Частное: " << a / b << ".\n";
    }
}