#include <iostream>
using namespace std;

int factorial(int number) {
	if (number == 0 || number == 1) return 1;
	else if (number < 0) return 0;
	return number * factorial(number - 1);
}

int main() {
	system("chcp 1251>null");
	
	int number{}, arr[10];

	for (int i{}; i <= 10; i++) {
		cout << i << endl;
	}

	cout << "\nФакториал числа: ";
	cin >> number;

	int factor = factorial(number);
	if (factor > 0) cout << "\nФакториал числа " << number << " равен: " << factor;
	else cout << "Такого факториала нет";

	return 0;
}