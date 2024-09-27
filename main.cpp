#include <iostream>
#include <math.h>

using namespace std;
// Лаба №4 Вариант 4
// Ввести натуральные числа A, B и C. Если A+B кратно C и C кратно B, то вывести (A+B)/C-C/B, если A+B кратно C и C не кратно B, то вывести (A+B)/С+B*C, в остальных случаях вывести A-B+C.
// Ввести число N, которое обозначает некоторую ошибку. При помощи оператора switch расшифровать значение ошибки.
// Список ошибок:
// 0 – все хорошо, 1 – ошибка чтения файла, 2 – ошибка записи файла, 3 – не все поля определены.
// Предусмотреть обработку ошибочного ввода N.
// Переменная x может принимать 2 значения: -1 и 1. Если -1, то вывести в консоль “Negative number”, если положительное - “Positive number”. Предложить вариант программы и объяснить свой выбор.



int main() {
    // Не работает((((
    setlocale(LC_ALL, "Russian");


    // 1
    unsigned a, b, c;
    cout << "Enter number a: "; cin >> a;
    cout << "Enter number b: "; cin >> b;
    cout << "Enter number c: "; cin >> c;

    if ((a+b) % c == 0) {
        if (c%b == 0) {
            cout << (a+b)/c - c/b << endl;
        }
        else {
            cout << (a+b)/c +b*c << endl;
        }
    }
    else {
        cout << a-b+c << endl;
    }

    // 2
    int n = -1;
    while (n < 0 or n > 3) {
        cout << "Enter n: "; cin >> n;
        if (n < 0 or n > 3) {
            cout << "Error! n must be 0, 1, 2, or 3!" << endl;
        }
    }
    switch (n) {
        case 0:
            cout << "Everything is fine";
            break;
        case 1:
            cout << "File reading error";
            break;
        case 2:
            cout << "File writing error";
            break;
        case 3:
            cout << "Not all fields are identified";
            break;
    }

    // 3
    int x;
    cout << "enter number x: "; cin >> x;
    while (x != -1 and x!= 1) {
        cout << "Enter x: "; cin >> x;
        if (x != -1 and x!= 1) {
            cout << "Error! x must be 1 or -1!" << endl;
        }
    }
    if (x == -1){ cout << "Negative number";}
    else {cout << "Positive number";}

    return 0;
}