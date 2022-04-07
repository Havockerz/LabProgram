#include <iostream>

using namespace std;

int main()
{
    int num [6];
    int total=0, i;
    for (i=0;i<6;i++){
        cout<<"Enter number "<<i+1<<":";
        cin>>num[i];
        total+=num[i];
    }
    cout<<"Total="<<total<<endl;
}