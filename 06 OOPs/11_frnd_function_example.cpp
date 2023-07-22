// prob:   exchanging two no of different class by a another frnd function with the help of call by reference

#include<iostream>
using namespace std;
class  c2;  // class deceleration 
class c1{
    int num1;
    friend void exchange(c1 &,c2 &);
    public:
    void setdata(int x){
        num1 = x;
    }
    void printdata(){
        cout<<num1<<endl;
    }
};
class c2{
    int num2;
    friend void exchange(c1 &,c2&);
    public:
    void setdata(int x){
    num2 = x;
    }
    void printdata(){
        cout<<num2<<endl;
    }
};
void exchange(c1 &x,c2 &y){
    int temp =x.num1;
    x.num1= y.num2;
    y.num2 =temp;
}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.setdata(34);
    oc2.setdata(45);
    oc1.printdata();
    oc2.printdata();
    exchange(oc1,oc2);
    printf("the value after exchanging is \n");
    oc1.printdata();
    oc2.printdata();
return 0;
}