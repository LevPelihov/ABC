#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b = 2,n;
    cout << "¬ведите число: ";
    cin >>a;
    cout << "¬ведите количество повторений цикла: ";
    cin >>n;
    for(int i =0;i< n;i++) {
        a = a * b;
    }
    cout << a;
    return 0;
}