#include<iostream>
using namespace std;
int main(){
    int n;
    printf("enter the value of m \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int j =1;j<=n;j++){
    if((i+j)%2==0){
    printf("1");
    }
    else{
        printf("2");
    }
   
     }
     printf("\n");
           }
     }
