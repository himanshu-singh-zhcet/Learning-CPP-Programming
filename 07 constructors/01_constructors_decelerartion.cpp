#include<iostream>
using namespace std;

class complex{
    int a,b;
    
    public:
        complex(void); //constructors deceleration

        void printnumber(){
            cout<<"the value of complex no is "<<a<<"+i"<<b<<endl;
        }
};

complex :: complex(void){   // this is a default constructor as it not takes any parameter
    a = 10;
    b = 20;
    printf("hello world \n");
}

int main(){
    complex o1,o2,o3;
    o1.printnumber();
    o2.printnumber();
    o3.printnumber();
    return 0;
}