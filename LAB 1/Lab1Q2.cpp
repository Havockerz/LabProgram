#include <iostream>
#include <string>
using namespace std;

int main()
{
    string info;
    cout<<"Your Biodata!!! \n\n";
    cout<<"whats your name ? ";
    getline(cin,info);
    cout<<"Hello "<<info<<" ! \n";
    cout<<"Whats your age?";
    getline(cin,info);
    cout<<"you are "<<info<<"years old ! \n";
    cout<<"Where do you live"<<endl;
    getline(cin,info);
    cout<<"You live at "<<info<<"!";
    
    return 0;
}
  