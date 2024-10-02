// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()


{
    int rows=5, cols=8;

   for(int i=0; i<=rows;i++){

    for(int j=0; j<=cols; j++){

        if(i==0||j==0 || i==rows|| j==cols){

    cout<<"*"<<" ";
        }

      else{

        cout<<"  ";
      }


    }

    cout<<endl;


   }
    
     return 0;
    
}