#include <iostream>
#include <cmath>
#include "Ch3Z1.h"

namespace HomeworkInCpp {

    void Ch3Z1::Run() {
        std::cout << "\n===== Часть 3. Задание 1 =====\n";
        std::cout << "Рассчитать, через сколько лет Петя на своём счету получит $ 20 000,";
        std::cout << "\nесли Петя отнёс $ 10 000 в банк (т.е. открыл вклад (депозит)) под следующие условия:";
        std::cout << "\n1) Размер процентной ставки на первый год составляет 3% годовых;";
        std::cout << "\n2) Размер процентной ставки каждый год увеличивается на 5% от размера процентной ставки";
        std::cout << "\nпредыдущего года, т.е. размер процентной ставки на второй год равен (3*1.05)%;";
        std::cout << "\n3) Максимально возможная процентная ставка составляет 3,5%.\n";

        const double targetAmount = 20000.0;   
        double amount = 10000.0;           
        double rate = 0.03;                
        const double rateIncreaseFactor = 1.05;
        const double maxRate = 0.035;

        int years = 0;

        std::cout << "\nГод\tСтавка, %\tСумма на счёте\n";
        std::cout << "-----------------------------------------\n";

        while (amount < targetAmount) {
            // начисляем проценты за текущий год
            amount += amount * rate;
            years++;

            std::cout << years << "\t"
                << rate * 100 << "\t\t"
                << amount << "\n";

            // увеличиваем ставку на следующий год, но не выше maxRate
            rate *= rateIncreaseFactor;
            if (rate > maxRate) {
                rate = maxRate;
            }
        }

        std::cout << "\nПетя на своём счету получит $ 20 000 через " << years << " год.\n";
        std::cout << "Итоговая сумма на счёте к этому моменту составит " << amount << " доллара.\n";
    }
}