#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "������� ����� a: ";
    cin >>a;
    cout << "������� ����� b: ";
    cin >>b;
    if(a < 0 || b < 0) {
       a = abs(a);
       b = abs(b);
    }
    cout << a << " " << b;
    return 0;
}