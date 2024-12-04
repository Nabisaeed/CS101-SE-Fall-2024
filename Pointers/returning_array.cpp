// C++ Program starts here
#include <iostream>
using namespace std;
    
    int * display(){

        int *arr=new int[4];

        for(int i=0; i<=3; i++){

            arr[i]= i;
        }

        return arr;
    }
    
int main()
{

   int * ptr= display();

   for(int i=0; i<=3; i++){

    cout<<ptr[i]<<endl;
   }

   delete ptr;

     return 0;
    
}