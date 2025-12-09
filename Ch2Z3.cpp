#include <iostream>
#include <cmath>
#include "Ch2Z3.h"

namespace HomeworkInCpp {

    void Ch2Z3::Run() {
        std::cout << "\n===== „асть 2. «адание 3 =====\n";
        std::cout << "Ќаписать программу, входными значени€ми которой €вл€ютс€ номер дн€ с начала мес€ца,";
        std::cout << "\nномер мес€ца и тип года (0 Ц невисокосный, 1 Ц високосный),";
        std::cout << "\nа единственным выходным значением программы €вл€етс€ номер дн€ с начала года.\n";

        int day, month, yearType;

        std::cout << "\n¬ведите день мес€ца (1Ц31): ";
        std::cin >> day;

        std::cout << "\n¬ведите номер мес€ца (1Ц12): ";
        std::cin >> month;

        std::cout << "\n¬ведите тип года (0 Ц невисокосный, 1 Ц високосный): ";
        std::cin >> yearType;

        if (!std::cin) {
            std::cout << "\nќшибка: некорректный ввод.\n";
            return;
        }

        if (day < 1 || day > 31) {
            std::cout << "\nќшибка: день мес€ца должен быть от 1 до 31.\n";
            return;
        }

        if (month < 1 || month > 12) {
            std::cout << "\nќшибка: номер мес€ца должен быть от 1 до 12.\n";
            return;
        }

        if (yearType != 0 && yearType != 1) {
            std::cout << "\nќшибка: тип года должен быть 0 (невисокосный) или 1 (високосный).\n";
            return;
        }

        int daysInMonth[2][12] = {
            {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, // невисокосный
            {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} // високосный
        };

        if (day > daysInMonth[yearType][month - 1]) {
            std::cout << "\nќшибка: в этом мес€це нет такого дн€.\n";
            return;
        }

        // ¬ычисление номера дн€ в году
        int dayOfYear = day;
        for (int i = 0; i < month - 1; ++i) {
            dayOfYear += daysInMonth[yearType][i];
        }

        std::cout << "\nЌомер дн€ в году: " << dayOfYear << ".\n";
    }
}