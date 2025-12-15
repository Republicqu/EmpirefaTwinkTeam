#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

class ArrayOperations {
private:
    //Данные (Поля)
    int size;
    vector<int> arr1;
    vector<int> arr2;

public:
    // Конструкторы
    //ArrayOperations() : arr1, arr2(), size(100) {}  // Конструктор по умолчанию

    //ArrayOperations(string n, int a) : name(n), age(a), energy(100) {}  // Конструктор с параметрами

    void setArrays(int arr1, int arr2, int size) {
    }

    // Методы (действия человека)
    void walk(int distance) {
        if (energy >= distance * 2) {
            cout << name << " прошел " << distance << " км" << endl;
            energy -= distance * 2;
            showEnergy();
        }
        else {
            cout << name << " слишком устал для ходьбы!" << endl;
        }
    }

    void run(int distance) {
        if (energy >= distance * 5) {
            cout << name << " пробежал " << distance << " км" << endl;
            energy -= distance * 5;
            showEnergy();
        }
        else {
            cout << name << " слишком устал для бега!" << endl;
        }
    }

    void eat(string food) {
        cout << name << " поел(а) " << food << endl;
        energy = min(100.0, energy + 30);
        showEnergy();
    }

    void sleep(int hours) {
        cout << name << " поспал(а) " << hours << " часов" << endl;
        energy = min(100.0, energy + hours * 15);
        showEnergy();
    }

    // Метод для показа информации
    void showInfo() {
        cout << "Имя: " << name << ", Возраст: " << age << " лет" << endl;
    }

    // Вспомогательный метод
    void showEnergy() {
        cout << "Энергия: " << energy << "%" << endl;
    }

    // Геттеры - получение данных
    string getName() { return name; }
    int getAge() { return age; }
    double getEnergy() { return energy; }

    // Сеттеры - изменение данных
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
};
