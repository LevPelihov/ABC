#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b = 2,n;
    cout << "������� �����: ";
    cin >>a;
    cout << "������� ���������� ���������� �����: ";
    cin >>n;
    for(int i =0;i< n;i++) {
        a = a * b;
    }
    cout << a;
    return 0;
}