#include<iostream>
using namespace std;

class employee{
    private:
        int a,b,c;

    public:
    int d,e;
        void setdata(int a1,int b1,int c1);
        void getdata(){
            printf("the value of a is %d \n",a);
            printf("the value of b is %d \n",b);
            printf("the value of c is %d \n",c);
            printf("the value of d is %d \n",d);
            printf("the value of e is %d \n",e);
        }
};

void employee  :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee harry;
    // harry.a= 123;  it will throw an error because it is private;
    harry.d=34;
    harry.e=45;
    harry.setdata(1,2,3);
    harry.getdata();

    return 0;
}