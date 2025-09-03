#include<iostream>
using namespace std;

class base1{
    public:
        void greet(void){
            cout<<"how are you?"<<endl;
        }
};

class base2{
    public:
        void greet(void){
            cout<<"kaise ho?"<<endl;
        }
};

class derived :public base1,public base2{
    int a;
    public:
        void greet(void){
            base2 :: greet();
        }
};

class B{
    public:
        void say(){
            printf("hello world \n");
        }
};

class D: public B{
    public:
        void say(){
            printf("Hello my people \n");
        }
};

int main(){
    // Ambiguity 1
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();
    derived d;
    d.greet();

    // Ambiguity 2
    B b;
    b.say();
    D d1;
    d1.say();    // derived class will call its say function ambiguity apne aap resolve ho jaati hai

    return 0;
}
