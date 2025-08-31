#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
        complex(int,int); //constructors deceleration
        void printnumber(){
            cout<<"the value of complex no is "<<a<<"+i"<<b<<endl;
        }
};

complex :: complex(int x,int y){   // this is a parameterized constructor as it takes 2 any parameters
    a =x;
    b= y;
}

int main(){
    // implicit call
    complex a(4,5);
    // explicit call
    complex b=  complex(5,7);
    a.printnumber();
    b.printnumber();

    return 0;
}