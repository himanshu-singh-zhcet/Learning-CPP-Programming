#include<iostream>
using namespace std;

    class complex{
        int a,b;
        public:
        friend complex sumcomplex(complex o1,complex o2);
        void getdata(int x,int y){
        a=x;
        b=y;
    }
    void printdata(){
        cout<<"the complex no is "<<a<<"+"<<b<<"i"<<endl;
    }
    };
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.getdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
complex c1,c2,sum;
c1.getdata(2,4);
c1.printdata();
c2.getdata(4,6);
c2.printdata();
sum = sumcomplex(c1,c2);
sum.printdata();
return 0;
}