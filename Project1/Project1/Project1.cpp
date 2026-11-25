// Lab 5_4
// Погонюк Ілля
// Лабораторна робота № 5.4
// Функції що містять арифметичний вираз.
// Варіант 12
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f1(int i, int n, double s) {
    if (i < n) return s;
    s += sqrt(1.0 * i * i + n * n) / i; // обчислення на рекурсивному спуску
    return f1(i - 1, n, s); // параметр i спадає
}

double f2(int i, int n, int k, double s) {
    if (i > k) return s;
    s += sqrt(1.0 * i * i + n * n) / i; // обчислення на рекурсивному спуску
    return f2(i + 1, n, k, s); // параметр i зростає
}

double f3(int i, int n) {
    if (i < n) return 0;
    double s = f3(i - 1, n); // параметр i спадає
    return s + sqrt(1.0 * i * i + n * n) / i; // обчислення на рекурсивному підйомі
}

double f4(int i, int n, int k) {
    if (i > k) return 0;
    double s = f4(i + 1, n, k); // параметр i зростає
    return s + sqrt(1.0 * i * i + n * n) / i; // обчислення на рекурсивному підйомі
}

double f5(int n, int k) {
    double s = 0;
    for (int i = n; i <= k; i++) { // ітераційний спосіб
        s += sqrt(1.0 * i * i + n * n) / i;
    }
    return s;
}

int main() {
    int n;
    cout << "n = "; cin >> n;

    if (n < 1 || n > 22) {
        cout << "1 <= n <= 22";
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << f1(22, n, 0) << '\n';
    cout << f2(n, n, 22, 0) << '\n';
    cout << f3(22, n) << '\n';
    cout << f4(n, n, 22) << '\n';
    cout << f5(n, 22) << '\n';

    return 0;
}