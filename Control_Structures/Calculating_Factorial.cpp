// C++ Program starts here
#include <iostream>
#include <vector>
using namespace std;
    
    
int main()
{

    int fact=1, fact1=1;

    int num;

    cin>>num;


    for(int i=1; i<=num; i++){

       fact1 =fact1*i;


    }

    cout<<fact1<<endl;
    
     return 0;
    
}