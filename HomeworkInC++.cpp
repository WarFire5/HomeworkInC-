#include <iostream>
#include <clocale> 

// Подключаем заголовки задач
#include "Ch1Z1.h"
#include "Ch1Z2.h"
#include "Ch1Z3.h"
#include "Ch2Z1.h"
#include "Ch2Z2.h"
#include "Ch2Z3.h"
#include "Ch3Z1.h"
#include "Ch3Z2.h"
#include "Ch3Z3.h"
#include "Ch4Z1.h" 
#include "Ch4Z2.h"
#include "Ch4Z3.h"

using namespace HomeworkInCpp;

int main() {
    std::setlocale(LC_ALL, "Russian");
    std::cout << "\nЗдравствуйте!\n";

    // Выбираем, что запускать:
    Ch1Z1::Run();
    Ch1Z2::Run();
    Ch1Z3::Run();
    Ch2Z1::Run();
    Ch2Z2::Run();
    Ch2Z3::Run();
    Ch3Z1::Run();
    Ch3Z2::Run();
    Ch3Z3::Run();
    Ch4Z1::Run();
    Ch4Z2::Run();
    Ch4Z3::Run();

    std::cout << "\nВсего доброго!\n";
    return 0;
}