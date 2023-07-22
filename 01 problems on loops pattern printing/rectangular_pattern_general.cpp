#include<iostream>
using namespace std;
int main(){
    int m,n;
    printf("enter the value of m \n");
    scanf("%d",&m);
     printf("enter the value of n \n");
    scanf("%d",&n);
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}