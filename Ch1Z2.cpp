#include <iostream>
#include <cmath>
#include "Ch1Z2.h"

namespace HomeworkInCpp {

    void Ch1Z2::Run() {
        std::cout << "\n===== Часть 1. Задание 2 =====\n";
        std::cout << "Пользователь вводит число. Вывести на экран квадрат, куб и четвёртую степень этого числа.\n";

        double x;
        std::cout << "\nВведите число: ";
        std::cin >> x;

        if (!std::cin) {
            std::cout << "\nОшибка: некорректный ввод.\n";
            return;
        }

        std::cout << "\nКвадрат: " << x * x << ";\n";
        std::cout << "Куб: " << x * x * x << ";\n";
        std::cout << "Степень 4: " << x * x * x * x << ".\n";
    }
}