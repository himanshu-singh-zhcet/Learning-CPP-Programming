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
            if(i==1 || i==m || j==1 ||j== n){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}