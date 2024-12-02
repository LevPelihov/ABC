#include <iostream>
using namespace std;
int main() {
int a;
cin >> a;


switch(a)
{
    case 1: a = a+ 1; break;
    case 2: a = a- 1; break;
    case 3: a = a+ 2; break;
}
cout<<"a= "<<a;
return 0;
}