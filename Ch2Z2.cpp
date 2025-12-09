#include <iostream>
#include <cmath>
#include "Ch2Z2.h"

namespace HomeworkInCpp {

    void Ch2Z2::Run() {
        std::cout << "\n===== Часть 2. Задание 2 =====\n";
        std::cout << "Написать программу, которая на вход получает три действительных числа – длины сторон треугольника,";
        std::cout << "\nа в качестве выходных значений возвращает пользователю ответ: «равнобедренный», «равносторонний»,";
        std::cout << "\n«прямоугольный», «произвольный», «вырожденный», «не является треугольником», «некорректные входные данные»\n";

        double a, b, c;

        std::cout << "\nВведите стороны треугольника (a, b и c):\n";
        std::cin >> a >> b >> c;

        if (!std::cin) {
            std::cout << "\nОшибка: некорректный ввод.\n";
            return;
        }

        if (a <= 0 || b <= 0 || c <= 0) {
            std::cout << "\nОшибка: отрицательные и/или нулевые стороны.\n";
            return;
        }

        // Упорядочиваем: x >= y >= z
        double x = a, y = b, z = c;
        if (x < y) std::swap(x, y);
        if (x < z) std::swap(x, z);
        if (y < z) std::swap(y, z);

        const double EPS = 1e-9;

        if (x > y + z + EPS) {
            std::cout << "\nНе является треугольником.\n";
            return;
        }

        if (std::abs(x - (y + z)) < EPS) {
            std::cout << "\nВырожденный треугольник (x == y + z).\n";
            return;
        }

        // Признаки вида треугольника
        bool equilateral =
            std::abs(a - b) < EPS && std::abs(b - c) < EPS;

        bool isosceles =
            std::abs(a - b) < EPS ||
            std::abs(b - c) < EPS ||
            std::abs(a - c) < EPS;

        bool rightTriangle =
            std::abs(x * x - (y * y + z * z)) < EPS;

        // Классификация
        if (equilateral) {
            std::cout << "\nРавносторонний треугольник.\n";
        }
        else if (rightTriangle && isosceles) {
            std::cout << "\nПрямоугольный и равнобедренный треугольник.\n";
        }
        else if (rightTriangle) {
            std::cout << "\nПрямоугольный треугольник.\n";
        }
        else if (isosceles) {
            std::cout << "\nРавнобедренный треугольник.\n";
        }
        else {
            std::cout << "\nПроизвольный треугольник.\n";
        }
    }
}