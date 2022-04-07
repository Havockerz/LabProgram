#include <iostream>
using namespace std;
int main()
{
int a,b;
int *ptrA, *ptrB;
cout << "Enter first integer :";
cin >> a;
ptrA = &a;
cout << "Enter second interger :";
cin >> b;
ptrB = &b;
cout << "Value of ptrA is "<<a<<"stored in address"<<ptrA<<endl;
cout << "Value of ptrB is "<<a<<"stored in address"<<ptrB<<endl;
return 0;
}