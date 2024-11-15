// C++ Program starts here
#include <iostream>
using namespace std;
    
    void swap(int &x, int&y){

        int temp=x;
        x=y;
        y=temp;
    }
int main()
{
    int a=10, b=20;

    cout<<"The values of a and b before swapping are "<<a<<","<<b<<endl;

    swap(a,b);
cout<<"The values of a and b after swapping are "<<a<<","<<b<<endl;

     return 0;
    
}