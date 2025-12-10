#include <iostream>
#include <cmath>
using namespace std;

/// <summary>
/// Вычисляет периметр ромба
/// </summary>
/// <param name="a">Длина одной стороны ромба</param>
/// <returns>Периметр ромба</returns>
/// <remarks>Если сторона ромба меньше или равна нулю, функция возвращает -1</remarks>
double calculatePerimeterOfRhomb(double a) {
    
    if (a <= 0) return -1; // +1 к n2; + 1 к n1 

    return a *= 4; // +1 к n1
}

int main()
{
    system("chcp 1251>null");

    double a{};

    cout << "Введите длину стороны: ";
    cin >> a;

    cout << "Периметр ромба равен: " << calculatePerimeterOfRhomb(a);

    return 0;
}