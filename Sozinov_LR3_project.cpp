#include <iostream>
#include <cmath>
using namespace std;

double EnterX() {
    double x;
    cout << "Введите число x: ";
    cin >> x;
    return x;
}

double EnterY() {
    double y;
    cout << "Введите число y: ";
    cin >> y;
    return y;
}

double EnterZ() {
    double z;
    cout << "Введите число z: ";
    cin >> z;
    return z;
}

void IntSumPart(double x, double y, double z) {
    cout << "Целая часть суммы чисел: " << int(x + y + z) << endl;
}

void FracGeomAvg(double x, double y, double z) {
    // Найти дробную часть среднего геометрического модулей этих 3-х чисел
}

int main() {
    setlocale(LC_ALL, "Russian");
    double x = 0, y = 0, z = 0;
    int choice;

    do {
        cout << "\n===== Меню =====\n";
        cout << "1. Ввести вещественное число x\n";
        cout << "2. Ввести вещественное число y\n";
        cout << "3. Ввести вещественное число z\n";
        cout << "4. Найти целую часть суммы чисел\n";
        cout << "5. Найти дробную часть среднего геометрического модулей чисел\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                x = EnterX();
                break;
            case 2:
                y = EnterY();
                break;
            case 3:
                z = EnterZ();
                break;
            case 4:
                IntSumPart(x, y, z);
                break;
            case 5:
                FracGeomAvg(x, y, z);
                break;
            case 0:
                cout << "Завершение работы приложения." << endl;
                break;
            default:
                cout << "Неверный ввод, повторите выбор." << endl;
        }
    } while (choice != 0);

    return 0;
}