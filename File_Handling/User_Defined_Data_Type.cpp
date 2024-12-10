// C++ Program starts here
#include <iostream>
using namespace std;
    
    class person {

        public:

        int age;
        string name;

        void display(){

            cout<<"Your name is "<<name<<endl;
             cout<<"Your age is "<<age<<endl;

        }

    };
    
int main()
{
    person p1;
    p1.age=20;
    p1.name="Sajid";

    p1.display();
    
     return 0;
    
}