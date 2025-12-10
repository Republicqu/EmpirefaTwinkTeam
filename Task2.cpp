#include <iostream>
#include <cmath>

/// <summary>
/// Вычисляет периметр ромба
/// </summary>
/// <param name="a">Длина одной стороны ромба</param>
/// <returns>Периметр ромба</returns>
/// <remarks>Если сторона ромба меньше или равна нулю, функция возвращает -1</remarks>
double calculatePerimeterOfRhomb(double side) {
    if (side <= 0) return -1;

    return side * 4;
}

int main() {
    system("chcp 1251>null");

    double side{};

    std::cout << "Введите длину стороны ромба: ";
    std::cin >> side;

    std::cout << "Периметр ромба равен: " << calculatePerimeterOfRhomb(side);

    return 0;
}