#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "������� ����� a: ";
    cin >>a;
    cout << "������� ����� b: ";
    cin >>b;
    if(a > 0 && b > 0) {
       cout << "��� ����� �������������";
    }
    else {
       cout << "���� �� ����� ������������� ��� ����� 0";
    }
    return 0;
}