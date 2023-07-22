#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};
class derived : public base1,public base2{
    public:
    void show(){
        cout<<"the value of base1int is "<<base1int<<endl;
        cout<<"the value of base1int is "<<base2int<<endl;
        cout<<"the value of sum  is "<<base1int+base2int<<endl;
    }
};
int main(){
    derived harry;
    harry.set_base1int(10);
    harry.set_base2int(20);
    harry.show();
return 0;
}