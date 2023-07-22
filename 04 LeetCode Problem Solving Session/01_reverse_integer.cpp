#include<iostream>
using namespace std;
int main(){
int ans=0;
int n;
printf("enter the no \n");
scanf("%d",&n);
while(n!=0){
    int digit;
    digit= n%10;
    ans=ans*10+digit;
    n=n/10;
}
printf("the reverse is %d",ans);
return 0;
}