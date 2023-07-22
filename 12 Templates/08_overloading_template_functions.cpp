#include<iostream>
using namespace std;
void func(int a){
    cout<<"i m the first function"<<endl;
    cout<<"the value of a is "<<a<<endl;
    }
template<class t>
void func(t a){
    cout<<"i m the templaized function"<<endl;
    cout<<"the value of a is "<<a<<endl;
}
template<class t>
void func1(t a){
cout<<"i m the templaized function1"<<endl;
    cout<<"the value of a is "<<a<<endl;
}

int main(){
    func(5);
    func1(5);
return 0;
}