#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b = 2,n,i =0;
    cout << "������� �����: ";
    cin >>a;
    cout << "������� ���������� ���������� �����: ";
    cin >>n;
     do{
        a = a * b;
        i++;
    }while(i < n);
    cout << a;
    return 0;
}