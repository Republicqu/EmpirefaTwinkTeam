#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class ArrayOperations {

private:
    int* arr1;
    int* arr2;
    int size;

public:

    ArrayOperations() : arr1(0), arr2(0), size(2) {}

    // Заполнение массивов данными с указанным размером
    void setArrays(int* ar1, int* ar2, int uploadSize) {

        arr1 = ar1;
        arr2 = ar2;
        size = uploadSize;

        cout << "\nОперация выполнена";
    }

    // Сложение массивов
    void addArrays() {
        int* array = new int[size];
        
        // Сложение двух массивов
        for (int i{}; i < size; i++) array[i] = arr1[i] + arr2[i];

        //Вывод результатов
        cout << "\nРезультат поэлементного сложение массивов\n";
        for (int i{}; i < size; i++) cout << array[i] << " ";
    }

    //Вычитание массивов поэлементно
    void substractArrays() {
        int* array1 = new int[size];

        // Вычитание двух массивов arr1 - arr2
        for (int i{}; i < size; i++) array1[i] = arr1[i] - arr2[i];

        //Вывод результатов
        cout << "\nРезультат поэлементного вычитания массивов arr1 - arr2\n";
        for (int i{}; i < size; i++) cout << array1[i] << " ";

        int* array2 = new int[size];

        // Вычитание двух массивов arr2 - arr1
        for (int i{}; i < size; i++) array2[i] = arr2[i] - arr1[i];

        //Вывод результатов
        cout << "\nРезультат поэлементного вычитания массивов arr2 - arr1\n";
        for (int i{}; i < size; i++) cout << array2[i] << " ";
    }

    // Умножние массивов поэлементно
    void multiplyArrays() {
        int* array = new int[size];

        // Сложение двух массивов
        for (int i{}; i < size; i++) array[i] = arr1[i] * arr2[i];

        //Вывод результатов
        cout << "\nРезультат поэлементного умножения массивов\n";
        for (int i{}; i < size; i++) cout << array[i] << " ";
    }
};

int main() {
    system("chcp 1251>null");
    srand(time(0));
    
    int* arr1;
    int* arr2;
    int size, commandNumber;

    cout << "Введите кол-во элементов в массивах: ";
    cin >> size;

    arr1 = new int[size];
    arr2 = new int[size];

    // Создание элементов для первого массива
    for (int i{}; i < size; i++) {
        arr1[i] = (rand() % 100 + 1);
    }

    // Создание элементов для второго массива
    for (int i{}; i < size; i++) {
        arr2[i] = (rand() % 100 + 1);
    }
    
    // Вывод элементов первого массива
    cout << "\nЭлементы первого массива\n\n";
    for (int i{}; i < size; i++) {
        cout << arr1[i] << " ";
    }

    // Вывод элементов второго массива
    cout << "\n\nЭлементы второго массива\n\n";
    for (int i{}; i < size; i++) {
        cout << arr2[i] << " ";
    }


    ArrayOperations arrayOper1;

    while (true) {
        cout << "\n\nВам были выданы данные и создан объект,\n\nКакую задачу Вы хотели бы исполнить?: \n0) Закончить работу\n1) setArray(arr1, arr2, size) - заносим данные массива в объект\n2) addArrays() - сложить элементы массивов\n3) substractArrays() - вычесть массивы поэлементно\n4) multiplyArrays() - умножить массивы поэлементно\n";
        cin >> commandNumber;

        if (commandNumber == 0) break;
        else if (commandNumber == 1) arrayOper1.setArrays(arr1, arr2, size);
        else if (commandNumber == 2) arrayOper1.addArrays();
        else if (commandNumber == 3) arrayOper1.substractArrays();
        else if (commandNumber == 4) arrayOper1.multiplyArrays();
        else cout << "Такая команда не предусмотрена!\n";
    }

    return 0;
}