// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{

    void (*ptr);

    int a=20;

    ptr=&a;

    cout<<*static_cast <int*>(ptr)<<endl;
    
     return 0;
    
}