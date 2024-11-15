// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int f0=0, f1=0, f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
    for(int i=1; i<=10000; i++){
        
        int current=i;
        
        while(current>0){
            
            int digit=current%10;
            current/=10;
            
            switch(digit){
                
                case 0:
                
                f0++; break;
                
                case 1:
                
                f1++; break;
                
                case 2: 
                f2++; break;
                
                case 3:
                
                f3++; break;
                
                case 4: 
                f4++; break;
                
                case 5:
                
                f5++; break;
                
                case 6: 
                f6++; break;
                
                case 7:
                f7++; break;
                
                case 8: 
                f8++; break;
                
                case 9: 
                f9++; break;
            }
        }
    }
    
    cout<<"The freqancy of 0 "<<f0<<endl;
    cout<<"The freqancy of 1 "<<f1<<endl;
    cout<<"The freqancy of 2 "<<f2<<endl;
    cout<<"The freqancy of 3 "<<f3<<endl;
    cout<<"The freqancy of 4 "<<f4<<endl;
    cout<<"The freqancy of 5 "<<f5<<endl;
    cout<<"The freqancy of 6 "<<f6<<endl;
    cout<<"The freqancy of 7 "<<f7<<endl;
    cout<<"The freqancy of 8 "<<f8<<endl;
    cout<<"The freqancy of 9 "<<f9<<endl;
    return 0;
}