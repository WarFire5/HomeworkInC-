#include <iostream>
#include <cmath>
#include "Ch4Z1.h"

namespace HomeworkInCpp {

    void Ch4Z1::Run() {
        std::cout << "\n===== Часть 4. Задание 1 =====\n";
        std::cout << "Поместить элементы массива X в начало массива Y в обратном порядке,";
        std::cout << "\nисключив элементы, превосходящие по абсолютной величине вводимое значение R.\n";

        int n;
        std::cout << "\nЗадайте размер массива X: ";
        std::cin >> n;

        if (!std::cin || n <= 0) {
            std::cout << "\nОшибка: задано отрицательное значение размера массива.\n";
            return;
        }

        int* X = new int[n];
        std::cout << "\nВведите элементы массива X:\n";
        for (int i = 0; i < n; i++) {
            std::cin >> X[i];
        }

        int R;
        std::cout << "\nВведите значение R: ";
        std::cin >> R;

        if (!std::cin) {
            std::cout << "\nОшибка: некорректный ввод R.\n";
            delete[] X;
            return;
        }

        // создаём массив Y (такой же длины)
        int* Y = new int[n];
        int yIndex = 0;

        // берём элементы из X в обратном порядке (с конца)
        for (int i = n - 1; i >= 0; i--) {
            if (std::abs(X[i]) <= std::abs(R)) {
                Y[yIndex++] = X[i];
            }
        }

        std::cout << "\nМассив Y (элементы X в обратном порядке, подходящие по условию |X[i]| <= |R|):\n";
        for (int i = 0; i < yIndex; i++) {
            std::cout << Y[i] << " ";
        }
        std::cout << "\n";

        delete[] X;
        delete[] Y;
    }
}