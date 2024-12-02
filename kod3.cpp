#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b = 2,n,i =0;
    cout << "¬ведите число: ";
    cin >>a;
    cout << "¬ведите количество повторений цикла: ";
    cin >>n;
    while(i< n) {
        a = a * b;
        i++;
    }
    cout << a;
    return 0;
}