// C++ Program starts here
#include <iostream>
using namespace std;
    
    void add(int a, int b){

        cout<<a+b<<endl;
    }

    void sub(void (*ptr)(int, int)){

        ptr(10,20);

        


    }

int main()
{
    void (*ptr)(int, int);
    ptr=add;

    sub(ptr);
    
     return 0;
    
}