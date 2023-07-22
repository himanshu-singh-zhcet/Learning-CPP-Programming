#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int ans=0;
    int i=0;
    printf("enter a no \n");
    scanf("%d",&n);
    while(n!=0){
        int digit =n%10;
        printf("%d\n",digit);
        if(digit==1){
        ans=ans+pow(2,i);
        }
        n =n/10;
        i++;
    }
    printf("the answer is %d",ans);
return 0;
}