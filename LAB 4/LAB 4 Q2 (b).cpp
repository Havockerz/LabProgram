#include <iostream>

using namespace std;

int main()
{
    int patient[5][3]={{10,20,30},
                       {40,50,60},
                       {22,33,44},
                       {55,66,77},
                       {38,48,58}};
int i,j;
for ( i=0 ; i<5 ; i++ ){
    cout << "Patient " << i+1 << ":" " " ;
    for ( j=0 ; j<3 ; j++){
        cout << patient [i][j] << " ";
    cout << endl;
    }
return 0
    
}