// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{

    int col, ros;
    cin>>col>>ros;

    for(int i=col; i<=ros; i++){

        cout<<i*ros<<" ";

        if(i%7==0){

            cout<<endl;
        }

    }

    
     return 0;
    
}