#include<iostream>
using namespace std;
int main(){
    int n;
    printf("enter the value of m \n");
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j =i;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
}