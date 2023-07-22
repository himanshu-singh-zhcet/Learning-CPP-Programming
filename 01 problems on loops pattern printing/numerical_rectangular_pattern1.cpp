
#include<iostream>
using namespace std;
int main(){
    int n;
    printf("enter the value of m \n");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k==1 || k==n || i==1 || i ==n ){
                printf("%d",k);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
     }
}