#include <iostream>
#include <cmath>
#include "Ch4Z3.h"

namespace HomeworkInCpp {

    void Ch4Z3::Run() {
        std::cout << "\n===== Часть 4. Задание 3 =====\n";
        std::cout << "На заданном отрезке, с заданным шагом изменения аргумента вычислить и поместить в массив F ";
        std::cout << "\n30 значений функции e^(-x) * sin(6x), делённые на её последнее положительное значение.\n";

        const int N = 30;
        double temp[N]{}; // временное хранилище исходных значений

        double x0, h;
        std::cout << "\nВведите начальное значение: ";
        std::cin >> x0;

        std::cout << "\nВведите шаг изменения аргумента: ";
        std::cin >> h;

        if (!std::cin || h == 0.0) {
            std::cout << "\nОшибка: задано нулевое или некорректное значение шага.\n";
            return;
        }

        double lastPositive = 0.0;
        bool hasPositive = false;

        // Считаем значения функции и ищем последнее положительное
        for (int i = 0; i < N; ++i) {
            double x = x0 + i * h;
            double fx = std::exp(-x) * std::sin(6 * x);
            temp[i] = fx;

            if (fx > 0) {
                lastPositive = fx;
                hasPositive = true;
            }
        }

        if (!hasPositive) {
            std::cout << "\nСреди 30 найденных значений функции нет положительных.\n";
            std::cout << "Массив F не создаётся по условию задачи.\n";
            return;
        }

        // Создаём массив F
        double F[N]{};

        for (int i = 0; i < N; ++i) {
            F[i] = temp[i] / lastPositive;
        }

        std::cout << "\nПоследнее положительное значение функции: " << lastPositive << "\n";
        std::cout << "\nМассив F:\n";

        for (int i = 0; i < N; ++i) {
            std::cout << F[i] << " ";
        }
        std::cout << "\n";
    }
}