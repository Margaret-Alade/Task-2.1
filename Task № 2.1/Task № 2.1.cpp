﻿// Task № 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

enum months {
    january = 1,
    february = 2,
    march = 3,
    april = 4,
    may = 5,
    june = 6,
    july = 7,
    august = 8,
    september = 9,
    october = 10,
    november = 11,
    december = 12
};

std::string get_month_name(months month) {
    const int size = 12;

    std::string month_arr[size] = { "Январь","Фервраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь", "Декарбрь" };

    return month_arr[static_cast<int>(month) - 1];


}

int main() {

    setlocale(LC_ALL, "Russian");

    int month_int;

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> month_int;
        std::cout << '\n';
        months month = static_cast<months>(month_int);  
        if (month_int < 0 || month_int > 12) {
            std::cout << "Неправильный номер!" << '\n';
        } else if (month_int == 0) {
            std::cout << "До свидания" << '\n';
        } else {
            std::cout << get_month_name(month) << '\n';
        }
    } while (month_int != 0);
    

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
