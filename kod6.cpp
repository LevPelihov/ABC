#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "¬ведите число a: ";
    cin >>a;
    cout << "¬ведите число b: ";
    cin >>b;
    if(a > 0 && b > 0) {
       cout << "ќба числа положительные";
    }
    else {
       cout << "ќдно из чисел отрицательное или равно 0";
    }
    return 0;
}