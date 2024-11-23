// C++ Program starts here
#include <iostream>
using namespace std;
    
 
   
int main()
{
      int arr[2][2]={{2,4}, {5,7}}; 

     int arr1[2][2]={{6,4}, {8,7}};  

     int arr3[2][2]={0};

     for(int i=0; i<=1; i++){

        for(int j=0; j<=1; j++){

            arr3[i][j]= arr[i][j]+arr1[i][j];
        }
     }
    

    for(int i=0; i<=1; i++){

        for(int j=0; j<=1; j++){

            cout<<arr3[i][j]<<" ";

        }
        cout<<endl;
    }
     return 0;
    
}