#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the number a: ";
    cin >>a;
    cout << "Enter the number b:";
    cin >>b;
    if(a < 0 || b < 0) {
       a = abs(a);
       b = abs(b);
    }
    cout << a << " " << b;
    return 0;
}