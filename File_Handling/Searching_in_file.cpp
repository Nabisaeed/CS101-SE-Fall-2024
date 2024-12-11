// C++ Program starts here
#include <iostream>
#include <fstream>
using namespace std;
    
    
int main()
{
    fstream obj1;

    obj1.open("file.txt", ios::in);

if(obj1.is_open()){

    string s1, search;

    int line=1;

    bool found=false;

    cout<<"Please enter a string you wanna serach in file "<<endl;

    getline(cin, search);

    while(getline(obj1, s1)){

        if(s1.find(search)!=string::npos){

            cout<<"The term "<<search<<" is found in line :"<<line<<endl;

            found=true;


        }
        line++;


    }

    if(!found){

        cout<<"The term is not found any where in the file "<<endl;
    }

}
else {

    cout<<"Unable to open the file"<<endl;
}
    
     return 0;
    
}