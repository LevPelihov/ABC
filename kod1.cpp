#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c, z;
    cout << "������� �����:";
    cin >> a;
    b = a *a ;
    c = b * b ;
    z = c * c ;
    cout << z ;
    return 0;
}