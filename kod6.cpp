#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the number a: ";
    cin >>a;
    cout << "Enter the number b: ";
    cin >>b;
    if(a > 0 && b > 0) {
       cout << "Both numbers are positive";
    }
    else {
       cout << "One of the numbers is negative or equal to 0";
    }
    return 0;
}