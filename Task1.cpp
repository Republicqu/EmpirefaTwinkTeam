#include <iostream>
using namespace std;

int main() {
	system("chcp 1251>null");
	int a{}, b{}, product{};

	cout << "Введите первое число: ";//вывод сообщения
	cin >> a;

	cout << "Введите второе число: ";
	cin >> b;

	product = a * b;

	cout << "Произведение двух чисел равно: " << product;

	return 0;
}