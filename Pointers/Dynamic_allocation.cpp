// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int *ptr= new int [1000000000000];

    ptr[112]=120;

    cout<<*(ptr+112)<<endl;

    // delete ptr;

    // cout<<ptr[100000]<<endl;

    
     return 0;
    
}