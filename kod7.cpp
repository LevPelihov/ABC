#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "¬ведите число a: ";
    cin >>a;
    
    a > 0 ? a =a * 2 : a = a * (-2);
    cout << a;
    return 0;
}