// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int age;

    cout<<"Enter your age "<<endl;

    cin>>age;
cout<<"Enter Value for license 1 or 0"<<endl;
    bool has_license;

    cin>>has_license;

    if(age>=18){

        if(has_license){

            cout<<"You can drive "<<endl;
        }

        else {

            cout<<" You have no licesne "<<endl;
        }
    }
    else{
        cout<<" You are too small "<<endl;
    }
    
     return 0;
    
}