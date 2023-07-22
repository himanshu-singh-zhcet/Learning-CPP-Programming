#include<iostream>
using namespace std;
template<class t1, class t2>
float average(t1 a,t2 b){
    float avg = (a+b)/2;
    return avg;
}
int main(){
    float a;
    a= average(2,2);
    printf("the value of average is %.3f",a);
return 0;
}