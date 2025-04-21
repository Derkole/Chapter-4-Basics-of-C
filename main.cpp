#include <iostream>
#include <string>

int main()
{
    /* Ввод пользователем переменных: missionName(назв. миссии), symbol(индиф.)
    height(высота), speed(скорость), shockAbsorber(работа армотизатора)*/
    std::cout << "Введите название миссии: "; 
    std::string missionName;                  
    std::cin >> missionName;

    std::cout << "Введите идентификатор зонда (один символ): ";
    char symbol;
    std::cin >> symbol;

    std::cout << "Введите высоту посадки (в метрах): ";
    double height;
    std::cin >> height;

    std::cout << "Введите скорость посадки (в м/с): ";
    double speed;
    std::cin >> speed;

    std::cout << "Работает ли амортизатор (1 — да, 0 — нет): ";
    bool shockAbsorber{};
    std::cin >> shockAbsorber;

    // Расчёт статуса посадки по амортизатору
    constexpr double safeSpeed = 5.0;

    std::string status;
    if (speed <= safeSpeed && shockAbsorber) {status = "Посадка прошла успешно!";} 
    else {status = "Аварийная посадка...";}

    // Вывод отчёта о посадке
    std::cout << "\n--- Отчёт о посадке ---\n";
    std::cout << "Миссия: " << missionName << '\n';
    std::cout << "Идентификатор зонда: " << symbol << '\n';
    std::cout << "Высота: " << height << " м\n";
    std::cout << std::scientific << "Скорость: " << speed << " м/с" << '\n';
    std::cout << "Статус посадки: " << status << '\n';

    // Вывод размера переменных
    std::cout << "\n--- Размеры переменных ---\n";
    std::cout << "int: " << sizeof(int) << " байт\n";
    std::cout << "double: " << sizeof(double) << " байт\n";
    std::cout << "bool: " << sizeof(bool) << " байт\n";
    std::cout << "char: " << sizeof(char) << " байт\n";
    std::cout << "std::string: " << sizeof(std::string) << " байт\n";

    return 0;
}