//fibonacci series 0 1 1 2 3 5 8 13 21 .....
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a=0;
    int b=1;
     int sum=1;
    for(int i=1;i<=n;i++){
        int nextno=a+b;
        printf("%d ",nextno);
        a=b;
        b=nextno;
        sum = sum+nextno;
        printf("%d \n",sum);

    }
return 0;
}