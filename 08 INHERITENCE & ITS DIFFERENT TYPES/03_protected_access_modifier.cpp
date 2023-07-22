#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};
class derived :protected base{

};
int main(){
base c;
derived b;
  // cout<<b.a<<;   will not work because a is protected in both base as well as derived class
return 0;
}