// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
int i=1;
    do{
         int j=1;

          cout<<"The table of "<<i<<" is"<<endl;
        do{

        

        cout<<i<<"*"<<j<<" :"<<i*j<<endl;

        j++;

 
        }  while(j<=10);

        cout<<endl;

        i++;

    } while(i<=15);
    
     return 0;
    
}