// C++ Program starts here
#include <iostream>
using namespace std;
    
    void find(int z[], int size, int target){

        for(int i=0; i<=size-1; i++){

            if(z[i]==target){

                cout<<"The element is found at index :"<<i<<endl;
            }
        }
    }
    
int main()
{
    int arr[]={12,14,6,20,43};

    find(arr, 5, 43);
    
     return 0;
    
}