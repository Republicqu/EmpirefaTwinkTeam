#include <stdexcept>
#include <algorithm>
#include <iostream>

using namespace std;

struct MathPercentsOperations{

	// Сколько будет 5% от числа 100? Ответ: 5
	static double calculatePercent(const double number, const double percent) {

		double result = (number / 100) * percent;

		return result;
	}

	// 5 это сколько процентов от 100? Ответ: 5%
	static double percentOf(const double number1, const double number2) {

		double result = (number2 * 100) / number1;

		return result;
	}

	// Увеличение на процент
	static double increaseByPercent(const double number) {

		double result = number + (number / 100);

		return result;
	}

	// Уменьшение на процент
	static double decreaseByPercent(const double number) {

		double result = number - (number / 100);

		return result;
	}

};

int main() {
	setlocale(0, "");

	while (true) {
		cout << "\nФункции, доступные Вам:\n\n0)Завершить работу программы;\n1)Вычисление процента из данных Вами чисел;\n2)Нахождение процента из числа;\n3)Увелечение числа на процент;\n4)Уменьшение цисла на процент.\n\nВаш выбор: ";
		
		int choice{};
		double percent{}, number1{}, number2{};

		cin >> choice;

		if (choice == 0) {
			cout << "\nЗавершаем работу программу, не выключайте компьютер, пожалуйста!";
			break;
		}
		else if (choice == 1) {

			cout << "Введите число, из которого хотели бы узнать Ваш процент: ";
			cin >> number1;

			cout << "Введите процент, который хотели бы высчитать из Вашего числа: ";
			cin >> percent;

			cout << "\n" << "\033[31m" << percent << "% от числа " << number1 << " составляет: " << MathPercentsOperations::calculatePercent(number1, percent) << "\033[0m" << endl;
		}
		else if (choice == 2) {

			cout << "Введите число, из которого хотели бы узнать процент: ";
			cin >> number1;

			cout << "Введите число, процент которого хотели бы узнать в первом: ";
			cin >> number2;

			cout << "\n" << "\033[31m" << "Процент " << number2 << " в числе " << number1 << " составляет: " << MathPercentsOperations::percentOf(number1, number2) << "\033[0m" << endl;
		}
		else if (choice == 3) {

			cout << "Введите число, которое Вы бы хотели увеличить на процент: ";
			cin >> number1;

			cout << "\n" << "\033[31m" << number1 << " увеличенное на процент составляет: " << MathPercentsOperations::increaseByPercent(number1) << "\033[0m" << endl;
		}
		else if (choice == 4) {

			cout << "Введите число, которое Вы бы хотели уменьшить на процент: ";
			cin >> number1;

			cout << "\n" << "\033[31m" << number1 << " уменьшенное на процент составляет: " << MathPercentsOperations::decreaseByPercent(number1) << "\033[0m" << endl;
		}
		else cout << "\033[31m" << "Такой команды нет, попробуйте ещё раз\n" << "\033[0m";
	}

	return 0;
}