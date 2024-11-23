// C++ Program starts here
#include <iostream>
using namespace std;
    
    void largest(int z[], int size){

        int largest=z[0];

        for(int i=0; i<=size-1; i++){

            if(z[i]>largest){
                largest=z[i];
            }
        }

        cout<<"The largest value found is "<<largest<<endl;
    }
    
int main()
{
    int arr[]={12,14,6,20,43};

    largest(arr, 5);
    
     return 0;
    
}