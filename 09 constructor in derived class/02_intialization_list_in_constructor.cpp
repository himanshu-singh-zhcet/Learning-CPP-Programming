#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    test(int i,int j):a(i),b(j+a){
        cout<<"constructor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"the value of a+j is "<<b<<endl;
    }
};

int main(){
    test t(2,4);

return 0;
}