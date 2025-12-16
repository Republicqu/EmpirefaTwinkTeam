#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

class ArrayOperations {

private:
    vector<int> arr1;
    vector<int> arr2;
    int size;

public:

    // Заполнение массива с указанным размером
    void setArrays(vector <int> ar1, vector <int> ar2, int size) {

        srand(time(0));

        // Ввод данных для первого массива
        for (int i{}; i < size; i++) {
            arr1.push_back(rand() % 100 + 1);
        }

        // Ввод данных для второго массива
        for (int i{}; i < size; i++) {
            arr2.push_back(rand() % 100 + 1);
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

        arr1 = ar1;
        arr2 = ar2;
    }

    void addArrays() {
        cout << arr1[0];
    }
};

int main() {
    system("chcp 1251>null");
    
    ArrayOperations arrayOper;

    vector<int> arr1;
    vector<int> arr2;
    int size{2};

    cout << "Введите размер для массивов: ";
    cin >> size;

    arrayOper.setArrays(arr1, arr2, size);
    arrayOper.addArrays();

    return 0;
}
