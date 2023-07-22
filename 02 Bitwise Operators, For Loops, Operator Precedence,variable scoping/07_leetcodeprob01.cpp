#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int prod=1;
    int n;
    printf("enter the no \n");
    scanf("%d",&n);
    while(n!=0){
        int digit;
        digit =n%10;
        sum=digit+sum;
        prod=digit*prod;
        n=n/10;
    }
    int answer;
    answer =prod-sum;
    printf("the answer is %d",answer);
return 0;
}