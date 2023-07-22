#include<iostream>
using namespace std;
class base{
int data1;
public:
int data2;
void setdata(){
    data1=10;
    data2=20;
}
int getdata1(){
    return data1;
}
int getdata2(){
    return data2;
}
};
class derived :public base{
  int data3;
  public:
  void process(){
    data3= data2*getdata1();
  }
  void display(){
    cout<<data3<<endl;
  }
};
int main(){
derived der;
der.setdata();
cout<<der.data2<<endl;
der.process();
der.display();


return 0;
}