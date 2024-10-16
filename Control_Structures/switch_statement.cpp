// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    char day;

    cin>>day;

    switch(day){

        case 'M':
        cout<<"it's Monday"<<endl;

        break;

        case 'T':
        cout<<"it's Tuesday"<<endl;

        break;

        case 'W':
        cout<<"it's Wednesday"<<endl;

        break;

        case 'H':
        cout<<"It's Thursady"<<endl;

        break;

        default:

        cout<<" You have entered invalid value"<<endl;

    }
    
     return 0;
    
}