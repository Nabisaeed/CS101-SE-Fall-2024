// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int row=0;
   

    while(row<=5){
 int col=0;

        while(col<=5){

        if((col+row)%2==0){

            cout<<" + ";

        }

        else {

            cout<<" - ";
        }

        col++;
        }
        cout<<endl;

        row++;
    }
    
     return 0;
    
}