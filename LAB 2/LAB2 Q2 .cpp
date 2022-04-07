#include <iostream>
using namespace std;
void message1();
void message2();
int main()
{
    int income;
    cout << "Enter your annual income \n RM";
    cin >> income;
    if (income < 40000)
        message1();
    else 
        message2();
}

void message1()
{
    cout << "Your income is very less, get a new job";
}
void message2()
{
    cout <<"Your have a big income, keep it up";
}
    