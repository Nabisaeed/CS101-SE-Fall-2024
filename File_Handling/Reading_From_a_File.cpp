// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;
    
    
int main()
{
    fstream o1;

    o1.open("file.txt", ios::in);

    if(o1.is_open()){

        string s1;

        while(o1>>s1){

            cout<<s1<<"  ";


        }
    }


     return 0;
    
}