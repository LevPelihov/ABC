#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b = 2,n,i =0;
    cout << "������� �����: ";
    cin >>a;
    cout << "������� ���������� ���������� �����: ";
    cin >>n;
    while(i< n) {
        a = a * b;
        i++;
    }
    cout << a;
    return 0;
}