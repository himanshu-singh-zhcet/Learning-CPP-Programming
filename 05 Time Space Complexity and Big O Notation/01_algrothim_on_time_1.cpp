#include<iostream>
using namespace std;

int sum(int a,int b){
    int result=0;
    for(int i=a;i<+b;i++){
        result =result+i;
    }
    return result;
}

int main(){
    int x=2;
    int y =100000;
    printf("the value of sum is %d",sum(x,y));
    return 0;
}