#include <iostream>
using namespace std;
int main() {
    int a, b = 2,n;
    cout << "Enter the number: ";
    cin >>a;
    cout << "Enter the number of repetitions of the cycle: ";
    cin >>n;
    for(int i =0;i< n;i++) {
        a = a * b;
    }
    cout << a;
    return 0;
}