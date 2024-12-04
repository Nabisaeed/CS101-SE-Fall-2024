// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int arr[]= {1,2,3,4,5};

    int * ptr= arr;

    int *ptr2=nullptr;

    int **ptr1=&ptr;


    for( int i=0; i<=4; i++){
    cout<<*ptr+i<<endl;

    }


     return 0;
    
}