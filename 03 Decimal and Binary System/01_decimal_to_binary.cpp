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
        int bit =n&1;
        printf("%d\n",bit);
        ans=(bit * pow(10, i) )+ans;
        n =n>>1;
        i++;
    }
    printf("the answer is %d",ans);
return 0;
}