// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int sum=0;
    int num;

    do {

        cout<<"Enter postive number (negative to exit)"<<endl;
        cin>>num;

        if(num>=0){

            sum+=num;
        }

    }   while(num<=0);

    cout<<"The addition of all entered numbers is :"<<sum<<endl;
    
     return 0;
    
}