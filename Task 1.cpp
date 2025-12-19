#include <stdexcept>
#include <algorithm>
#include <iostream>

using namespace std;

struct MathArrayOperations {

	// Сколько будет 5% от числа 100? Ответ: 5
	static double calculatePercent(const double array[]) {

		if (sizeof(array) <= 0) throw invalid_argument("Размер массива должен быть положительным");

		double result = 

		return result;
	}

	// 5 это сколько процентов от 100? Ответ: 5%
	static double calculatePercent(const double array[]) {

		if (sizeof(array) <= 0) throw invalid_argument("Размер массива должен быть положительным");

		double result =

		return result;
	}

	// Увеличение на процент
	static double calculatePercent(const double array[]) {

		if (sizeof(array) <= 0) throw invalid_argument("Размер массива должен быть положительным");

		double result =

		return result;
	}

	// Уменьшение на процент
	static double calculatePercent(const double array[]) {

		if (sizeof(array) <= 0) throw invalid_argument("Размер массива должен быть положительным");

		double result =

		return result;
	}

};

int main() {
	setlocale(0, "");

	double numbers[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };

	cout << endl;

	// т.к у нас статические методы их вызов происходит чере ИМЯ_КЛАССА::ИМЯ_МЕТОДА()
	/*cout << "Сумма: " << MathArrayOperations::sum(numbers, size) << endl;
	cout << "Среднее: " << MathArrayOperations::average(numbers, size) << endl;*/

	return 0;
}