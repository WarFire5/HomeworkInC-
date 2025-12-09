#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include "Ch3Z2.h"

namespace HomeworkInCpp {

    void Ch3Z2::Run() {
        std::cout << "\n===== Часть 3. Задание 2 =====\n";
        std::cout << "Дано целое число, не меньшее двух. Вывести:";
        std::cout << "\n1) его наименьший натуральный делитель, отличный от 1;";
        std::cout << "\n2) список всех натуральных делителей данного числа;";
        std::cout << "\n3) «простое», если число является таковым и «не является простым» иначе.\n";

        long long n;
        std::cout << "\nВведите число (>= 2): ";
        std::cin >> n;

        if (!std::cin || n < 2) {
            std::cout << "\nОшибка: введено не целое число либо целое < 2.\n";
            return;
        }

        // Наименьший делитель
        long long minDivisor = n; // если останется n — число простое

        for (long long d = 2; d * d <= n; d++) {
            if (n % d == 0) {
                minDivisor = d;
                break;
            }
        }

        std::cout << "\n1) Наименьший делитель, отличный от 1: " << minDivisor << ".\n";

        // Список всех делителей
        std::vector<long long> divisors;

        for (long long d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                divisors.push_back(d);
                if (d != n / d) divisors.push_back(n / d);
            }
        }

        std::sort(divisors.begin(), divisors.end());

        std::cout << "\n2) Все натуральные делители числа: ";

        for (size_t i = 0; i < divisors.size(); i++) {
            std::cout << divisors[i];
            if (i + 1 < divisors.size()) std::cout << ", ";
        }

        std::cout << ".\n";

        // Проверка на простоту
        if (minDivisor == n) {
            std::cout << "\n3) Число является простым.\n";
        }
        else {
            std::cout << "\n3) Число не является простым.\n";
        }
    }
}