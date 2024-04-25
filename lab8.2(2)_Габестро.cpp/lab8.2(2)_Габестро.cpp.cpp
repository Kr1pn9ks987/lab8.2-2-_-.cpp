// lab8.2(2)_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

const int n = 20;

int main() {
    setlocale(LC_CTYPE, "ukr");

    double a[n], b[n];

    cout << "Введіть 20 дійсних чисел для масиву a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        double sum = 0.0;
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                sum += a[j];
                count++;
            }
        }
        b[i] = sum / count;
    }

    cout << "Масив a: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Масив b: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}