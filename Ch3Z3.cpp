#include <iostream>
#include <cmath>
#include "Ch3Z3.h"

namespace HomeworkInCpp {

    void Ch3Z3::Run() {
        std::cout << "\n===== Часть 3. Задание 3 =====\n";
        std::cout << "Дано натуральное число N. Вывести ближайшую к этому числу степень двойки, тройки и пятёрки.\n";

        long long N;
        std::cout << "\nВведите натуральное число N: ";
        std::cin >> N;

        if (!std::cin || N < 1) {
            std::cout << "\nОшибка: введено не натуральное число (<1).\n";
            return;
        }

        auto nearestPowerExponent = [](long long N, int base) {
            long long value = 1; // base^0
            int k = 0;

            // ищем первую степень >= N
            while (value < N) {
                value *= base;
                k++;
            }

            // value = base^k >= N
            long long higher = value; // base^k
            long long lower = value / base; // base^(k-1)

            int lowerK = k - 1;

            if (lowerK < 0) lowerK = 0;

            // сравнение расстояний
            if (std::abs(higher - N) < std::abs(lower - N))
                return k; // степень сверху ближе
            else
                return lowerK; // степень снизу ближе
            };

        int k2 = nearestPowerExponent(N, 2);
        int k3 = nearestPowerExponent(N, 3);
        int k5 = nearestPowerExponent(N, 5);

        std::cout << "\nБлижайшая степень 2: " << k2 << ",";
        std::cout << "\nБлижайшая степень 3: " << k3 << ",";
        std::cout << "\nБлижайшая степень 5: " << k5 << ".\n";
    }
}