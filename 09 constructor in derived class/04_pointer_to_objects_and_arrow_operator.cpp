#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void setdata(int a ,int b){
        real=a;
        imaginary=b;
    }
    void getdata(void){
        cout<<"the value of real part is "<<real<<endl;
        cout<<"the value of imaginary part is "<<imaginary<<endl;    
    }

}; 
int main(){
// complex c1;
// complex *ptr=&c1;
complex *ptr = new complex;
// (*ptr).setdata(4,5); is exactly same as 
ptr->setdata(1,5);    // arrow operator
(*ptr).getdata();

// array of objects
complex *ptr1 = new complex[4];
ptr1->setdata(4,7);
ptr1->getdata();
return 0;
}