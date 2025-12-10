#include <iostream>
#include <vector>
using namespace std;

int factorial(int number) {
	if (number == 0 || number == 1) return 1;
	else if (number < 0) return 0;
	return number * factorial(number - 1);
}

void divideByZero() {
	int a{3}, b{};

	cout << "Введите число для деления числа " << a << ": ";
	cin >> b;

	if (b != 0) a / b;
	else throw "Деление на ноль!";
}

void accessInvalidMemory() {
	vector<int> arr(5);
	int b; // value = arr.at(10);
	
	cout << "Введите индекс елемента масиива размерностью 5: ";
	cin >> b;
	

	if (b < 5 && b > 0) cout << "Повезло!";
	else throw "Выход за границы массива.";
}

int main() {
	system("chcp 1251>null");

	int number{};

	for (int i{}; i <= 10; i++) {
		cout << i << endl;
	}

	cout << "\nФакториал числа: ";
	cin >> number;

	int factor = factorial(number);
	if (factor > 0) cout << "\nФакториал числа " << number << " равен: " << factor;
	else cout << "Такого факториала нет";

	cout << "\n\nПро деление на ноль\n";

	try {
		divideByZero();
	}
	catch (const char* error_message) {
		cout << "Error: " << error_message << std::endl;
	}

	cout << "\nПро массив\n";

	try {
		accessInvalidMemory();
	}
	catch (const char* error_message) {
		cout << "Error: " << error_message << std::endl;
	}

	return 0;
}