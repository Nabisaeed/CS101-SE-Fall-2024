// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
 int add(int a, int b, int c)

{

    return a+b;
}

double add(int a, float b, char c)

{

    return a+b+c;
}

int main()
{
 cout<<add(20,30.45,'a')<<endl;
    
     return 0;
    
}



