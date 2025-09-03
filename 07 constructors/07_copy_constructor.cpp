#include<iostream>
using namespace std;

class number{
    int a;

    public:
        number(){
            a=0;
        }
        number(int num){
            a=num;
        }
        // when no copy constructor is found,complier supplies its own copy constructor
        // this is copy constructor
        number(number &obj){
            cout<<"copy constructor is used"<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"the no for this object is "<<a<<endl;
        }
};


int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    number z1(z);  // copy constructor invoked
    z1.display();
    z2=z;     // copy coonstructor not called     sirf assignment main copy constructor used nhi hoga
    z2.display();  
    number z3 =z;  // copy constructor invoked    yhaa hum bnna rhe hai nya object or sath hi sath assign bhi kr rhe hai
    z3.display();

    return 0;
}