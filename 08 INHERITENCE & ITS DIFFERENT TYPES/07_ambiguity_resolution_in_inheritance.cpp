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
        base2:: greet();
   }
};
int main(){
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();
    derived d;
    d.greet();


    
return 0;
}
