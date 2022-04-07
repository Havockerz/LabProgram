#include <iostream>
using namespace std;
int main ()
{
double *pvalue = NULL;
pvalue = new double;
*pvalue = 29494.99;
cout << "Value of pbvalue : " << *pvalue << endl;
delete pvalue;
return 0;
} #include <iostream>
#include<iostream>
 using namespace std;
 void Point(int*);
 int main()
 {
 int c = 5;

 Point(&c);
 cout << "c = " << c << endl;
 return 0;
 }
 void Point(int*c) {
 *c = 25;
 }
