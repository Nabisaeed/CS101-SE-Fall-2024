// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int a=10;

    int *ptr= new int;

    *ptr=100;


    cout<<*ptr<<endl;

    int *p1;
    p1=&a;

    cout<<*p1<<endl;
    
     return 0;
    
}