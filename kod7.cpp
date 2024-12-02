#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the number a: ";
    cin >>a;
    
    a > 0 ? a =a * 2 : a = a * (-2);
    cout << a;
    return 0;
}