// C++ Program starts here
#include <iostream>
using namespace std;
    
    
int main()
{
    int freq[10]={0};

    for(int i=1; i<=10000; i++){


        int current=i;

        while(current>0){

            int digit=current%10;
            current/=10;
            freq[digit]++;
        }
    }
    
    for(int i=0; i<=9; i++){
        
        cout<<"The frequancy of "<<i<<" is "<<freq[i]<<endl;
    }
    
     return 0;
    
}