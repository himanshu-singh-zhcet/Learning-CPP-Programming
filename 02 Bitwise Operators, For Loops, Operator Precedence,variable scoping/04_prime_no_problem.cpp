#include<iostream>
using namespace std;
int main(){
    int n;
    int primeno=1;
    printf("enter the no\n");
    scanf("%d",&n);
    for(int i =2;i<=n-1;i++){
    if(n%i==0){
    // printf("it is not a prime no");
    primeno=0;
    break;   
    }
    else{}    
    }
    if(primeno==0){
    printf("it is not a prime no\n") ;  
    }
    else{
        printf("it is a prime no");
    }
return 0;
}