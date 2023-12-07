#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Integer15: Перестановка цифр сотень і десятків
    cout << "Задача 1: Обмін цифр сотень і десятків" << endl;
    int number;
    // Введення тризначного числа
    cout << "Введіть тризначне число: ";
    cin >> number;
    // Перестановка цифр сотень і десятків
    int newNumber = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
    // Виведення результату
    cout << "Число після обміну: " << newNumber << endl;


    // Boolean25: Перевірка координат точки
    cout << "Задача 2: Перевірка координат точки" << endl;
    double xCoordinate, yCoordinate;
    // Введення координат x і y
    cout << "Введіть координати (x, y): ";
    cin >> xCoordinate >> yCoordinate;
    // Перевірка, чи точка лежить в другій координатній чверті
    bool isSecondQuadrant = (xCoordinate < 0) && (yCoordinate > 0);
    // Виведення результату
    cout << "Точка знаходиться в другому координатна чверть: " << boolalpha << isSecondQuadrant << endl;


    // Матиматичний вираз 7
    cout << "Матиматичний вираз 7:";
    const double pi = 3.141592; // визначення дійсної константи
    double x, num, denom, sin2, yMath; // декларація дійсних змінних
    // введення данних
    cout << "Дійсний аргумент x = ";
    cin >> x;
    // підрахунок
    num = pow(log(x * x + cos(37 * pi / 180)), 2); // чисельник
    sin2 = pow(sin(x * x), 2); // проміжна змінна
    denom = sin2 + sqrt(fabs(1 - 2 * cos(x) - sin2)); // знаменник
    yMath = num / denom;
    // виведення результату
    cout << "Функція y = " << yMath << endl;
    return 0;
}
