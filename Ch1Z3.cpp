#include <iostream>
#include <cmath>
#include "Ch1Z3.h"

namespace HomeworkInCpp {

    void Ch1Z3::Run() {
        std::cout << "\n===== Часть 1. Задание 3 =====\n";
        std::cout << "Пользователь вводит количество секунд, прошедшее с некоторого момента.";
        std::cout << "\nВывести на экран это количество времени в формате: дни часы минуты секунды.\n";

        long long totalSeconds;
        std::cout << "\nВведите количество секунд (max 9 223 372 036 854 775 807): ";
        std::cin >> totalSeconds;

        if (!std::cin || totalSeconds < 0) {
            std::cout << "\nОшибка: отрицательное число.\n";
            return;
        }

        long long days = totalSeconds / 86400; // 24*60*60
        long long hours = (totalSeconds % 86400) / 3600;
        long long minutes = (totalSeconds % 3600) / 60;
        long long seconds = totalSeconds % 60;

        std::cout << "\nРезультат: "
            << days << " дн., "
            << hours << " ч., "
            << minutes << " мин., "
            << seconds << " сек.\n";
    }
}