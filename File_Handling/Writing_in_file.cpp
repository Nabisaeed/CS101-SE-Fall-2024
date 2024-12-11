// C++ Program starts here
#include <iostream>
#include<fstream>
using namespace std;
    
    
int main()
{
    ofstream myfile;

    myfile.open("file.txt", ios::trunc);

    if(myfile.is_open()){

 myfile<<"Hello World"<<endl;

 cout<<"Done"<<endl;

    }

    else{

     cout<<"Unable to open the file"<<endl;
    }

   
    
     return 0;
    
}