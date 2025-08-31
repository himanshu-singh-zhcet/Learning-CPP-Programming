#include<iostream>
using namespace std;

int sum(int a,int b){
    int result;
    int n;
    n=(b-a)+1;
    result=n/2*(2*a+n-1);
}

int main(){
    int x =2;
    int y=100000;
    printf("the value of sum is %d",sum(x,y));
    return 0;
}