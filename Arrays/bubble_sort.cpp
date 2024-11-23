// C++ Program starts here
#include <iostream>
using namespace std;
    
  void sort(int z[], int size){

    for(int i=0; i<size-1; i++){

        for( int j=0; j<=size-2; j++){
            if(z[j]>z[j+1]){
                int temp;
                temp=z[j];
                z[j]=z[j+1];
                z[j+1]=temp;
            }
        }
    }


  }  

  void display(int z[], int size){


    for(int i=0; i<=size-1; i++){

        cout<<z[i]<<"  ";
    }


    cout<<endl;
  }
int main()
{
    
    int arr[]={12,4,6,78,100,2};

    sort(arr, 6);

    display(arr, 6);
     return 0;
    
}