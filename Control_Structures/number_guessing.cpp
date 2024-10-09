// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int secret=19;
    int guess;

    cin>>guess;

    while(guess!=secret){

        

        if(guess>secret){

            cout<<"Your guess is too high. Please try with lower number"<<endl;
        }

       else if(guess<secret){

            cout<<"Your guess is too low. Please try with higher number"<<endl;
        }

              cin>>guess;
    }

    cout<<"Congratulations your guess is correct"<<endl;

  
    
     return 0;
    
}