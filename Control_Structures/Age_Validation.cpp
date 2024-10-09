// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int age;

    do {

        cout<<"Enter your age "<<endl;
        cin>>age;

        if(age>100|| age<0){

            cout<<"Enter valid age"<<endl;
        }

    }   while(age>100|| age<0);

    cout<<"Your age is  :"<<age<<endl;
    
     return 0;
    
}