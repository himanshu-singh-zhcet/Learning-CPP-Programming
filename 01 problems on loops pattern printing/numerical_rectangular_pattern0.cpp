#include<iostream>
using namespace std;
int main(){
    int n;
    printf("enter the value of m \n");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
        for(int k=i;k<=n;k++){
            printf("%d",k);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",k);
        }
        printf("\n");
     }
}