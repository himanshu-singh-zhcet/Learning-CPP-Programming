#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:    
        complex(){
            a = 0;
            b = 0;
        }

        complex(int x){
            a = x;
            b = 0;
        }

        complex(int x,int y){
            a = x;
            b = y;
        }

        void printnumber(){
            cout<<"the value of complex no is "<<a<<"+i"<<b<<endl;
        }
};

int main(){
    complex c1;
    c1.printnumber();
    complex c2(7);
    c2.printnumber();
    complex c3(4,7);
    c3.printnumber();
    
    return 0;
}