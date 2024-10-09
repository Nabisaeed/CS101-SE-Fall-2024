// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{

    char choice;

    do{

        cout<<"Choose an option \n";
        cout<<"a. Option 1 "<<endl;
        cout<<"b. Option 2 "<<endl;
        cout<<"c. Option 3 "<<endl;
        cout<<"d. Exit "<<endl;

        cin>>choice;


    }  while(choice!='d' && choice!='D');
    
     return 0;
    
}