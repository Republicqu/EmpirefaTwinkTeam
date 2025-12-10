#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// функция для установки цвета по названию
void setConsoleColor(const string& color) {
    if (color == "red") {
        system("color 04"); // чёрный фон + красный текст
    }
    else if (color == "blue") {
        system("color 01"); // чёрный фон + синий текст
    }
    else if (color == "green") {
        system("color 02"); // чёрный фон + зелёный текст
    }
    else if (color == "yellow") {
        system("color 06"); // чёрный фон + жёлтый текст
    }
    else if (color == "aqua") {
        system("color 07"); // чёрный фон + аква текст
    }
    else {
        system("color 07"); // по умолчанию: чёрный фон + белый текст
    }
}

int main() {
    system("chcp 1251>null");
    string colorText, favouriteBook;

    ifstream fin("settings.txt"); //Создает объект fin для чтения из файла и открывает файл

    if (fin.is_open()) {// Проверка открытия файла
        // читаем сохраненные данные
        fin >> colorText >> favouriteBook;// Читает данные из файла (аналогично cin)
        fin.close(); //Закрывает файл и освобождает ресурсы

        setConsoleColor(colorText);

        cout << "Сохраненные настройки:" << endl;
        cout << "Ваша любимая книга (без пробелов): " << favouriteBook << endl;
        cout << "Цвет для текста в консоли: " << colorText << endl;

        char choice;
        cout << "\nХотите изменить настройки? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            cout << "Введите название вашей новой любимой книги (без пробелов): ";
            cin >> favouriteBook;
            cout << "Цвет для текста консоли (red, blue, green, yellow, white): ";
            cin >> colorText;

            ofstream fout("settings.txt"); //Создает объект fout для записи в файл и открывает файл
            //ofstream fout("settings.txt", ios::app); // Открываем для добавления, если нужно внести еще какие-то параметры в файл ios::app, если не указывать по умолчанию очищает
            fout << colorText << " " << favouriteBook; //Записывает данные в файл (аналогично cout)
            fout.close();

            cout << "Настройки обновлены!" << endl;
        }
    }
    else {
        // файла нет – вводим новые настройки
        cout << "Введите название вашей любимой книги: ";
        cin >> favouriteBook;
        cout << "Цвет для текста консоли (red, blue, green, yellow, aqua): ";
        cin >> colorText;

        ofstream fout("settings.txt");
        fout << colorText << " " << favouriteBook;
        fout.close();

        cout << "Настройки сохранены!" << endl;
    }

    return 0;
}