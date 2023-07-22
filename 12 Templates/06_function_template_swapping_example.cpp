#include<iostream>
using namespace std;
template<class t>
void swapp(t &a, t &b){
    t temp =a;
    a=b;
    b=temp;
}
int main(){
    int x =4,y=7;
    cout<<x<<"  "<<y<<endl;
    swapp(x,y);
    cout<<x<<"  "<<y<<endl;
return 0;
}