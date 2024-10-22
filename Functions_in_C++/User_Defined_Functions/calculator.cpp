// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int add(int a, int b);
int sub(int a, int b);
int divid(int a, int b);
int mul(int a, int b);
void menu();


int main()
{
    menu();
    
     return 0;
    
}

int add(int a, int b){

    return a+b;
}

int sub(int a, int b){

    return a-b;
}

int divid(int a, int b){

    return a/b;
}

int mul(int a, int b){

    return a*b;
}

void menu(){

    char play_again;

     do 
     
     {



    char op;

    int a, b;

    cout<<"enter the values of a and b "<<endl;
    cin>>a>>b;

    cout<<"Enter the operator "<<endl;
    cin>>op;


    switch(op){

        case '+':

        cout<<add(a,b)<<endl;

        break;

        case '-':

        cout<<sub(a,b)<<endl;

        break;

            case '/':

        cout<<divid(a,b)<<endl;

        break;
        case '*':

        cout<<mul(a,b)<<endl;

        break;

        default:

        cout<<"You have entered invalid operator "<<endl;

        

        } 

cout<<"Do you want to use calculator again"<<endl;
        cin>>play_again;

    } while (play_again=='Y' || play_again=='y');


cout<<"Thank you for using the calculator app"<<endl;
}