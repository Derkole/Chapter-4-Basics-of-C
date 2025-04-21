#include <iostream>
#include <string>

int main()
{
    // Ввод имени, возвраста, пола(проверка), веса и роста
    std::cout << "Введите имя: ";
    std::string name{};
    std::cin >> name;

    std::cout << "Введите возраст: ";
    int age{};
    std::cin >> age;

    std::cout << "Выберите пол (M/F): ";
    char gender{};
    std::cin >> gender;

    if (gender != 'M' && gender != 'F')
    {
        std::cout << "Некорректный ввод пола. Используйте 'M' или 'F'.\n";
        return 1;
    }

    std::cout << "Введите вес (в кг):\n";
    double weight{};
    std::cin >> weight;

    std::cout << "Введите рост (в см):\n";
    double height{};
    std::cin >> height;

    // Ввод неизменных значений underweight(Недовес), normal(Норма), overweight(Избыточный вес) и formula(100 для выражения)
    const double formula = 100.0;
    const double underweight = 18.5;
    const double normal = 24.9;
    const double overweight = 29.9;

    // Рассчёт metrIn2(метр в квадрате) и imt(ИМТ) и дальнейший вывод
    double metrIn2 = height / formula;
    double imt = weight / (metrIn2 * metrIn2);
    std::cout << "Ваш ИМТ: " << imt << '\n';

    // Функция if с выводом подходящей категории
    std::string category = "Категория: ";
    if (imt < underweight)
        std::cout << category << "Недовес\n";
    else if (imt <= normal)
        std::cout << category << "Норма\n";
    else if (imt <= overweight)
        std::cout << category << "Избыточный вес\n";
    else
        std::cout << category << "Ожирение\n";

    // Функция вывода опросника и функция для вывода подходящего ответа
    bool agree{};
    std::cout << "Согласны с результатом? (1 - да / 0 - нет):\n";
    std::cin >> agree;

    if (agree)
        std::cout << "Спасибо!\n";
    else
        std::cout << "На правду не обижаются :)\n";

    std::cout << "Спасибо за использование анкеты!\n";

    // Вывод размера байтов для imt(ИМТ)
    std::cout << "Чтоб ты знал, размер типа ИМТ: " << sizeof(imt) << " байт\n";

    return 0;
}
