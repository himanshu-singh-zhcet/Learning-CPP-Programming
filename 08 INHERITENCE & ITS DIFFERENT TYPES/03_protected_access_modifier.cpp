#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    int b;
};
class derived :protected base{

};
int main(){
base c;
derived d;
  cout<<c.b;
  // cout<<d.a<<;   will not work because a is protected in both base as well as derived class
 // cout<<d.b;      will not work because base class is protected
return 0;
}