// C++ Program starts here
#include <iostream>

using namespace std;
    
    void increment(int &x){

        x++;
    }
    
int main()
{

    int x =30;

    increment(x);

    cout<<x<<endl;
    
     return 0;
    
}