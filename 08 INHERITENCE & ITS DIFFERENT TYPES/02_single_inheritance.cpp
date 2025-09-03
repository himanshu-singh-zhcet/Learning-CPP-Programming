#include<iostream>
using namespace std;

class base{
    int data1;  // private by default and is not inhertiable

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

class derived : public base{   // class is being derived pubilcally
  int data3;

  public:
    void process(){
        data3= data2*getdata1(); // Here We are accessing Private Data of Base Class by Public method of base class
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