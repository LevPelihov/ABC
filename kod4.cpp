#include <iostream>
using namespace std;
int main() {
    int a, b = 2,n,i =0;
    cout << "Enter the number: ";
    cin >>a;
    cout << "Enter the number of repetitions of the cycle: ";
    cin >>n;
     do{
        a = a * b;
        i++;
    }while(i < n);
    cout << a;
    return 0;
}