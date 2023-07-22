// here we r going to find the sum of data f two diff object with different class with the help of a another function, here we make this function frnd to both classess

#include<iostream>
using namespace std;
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X,Y);
};
void add(X o1, Y o2){
cout<<"THE SUMB OF TWO DATA FROM DIFF OBJECTS " <<o1.data+o2.num<<endl;
}

int main(){
    X a1;
    a1.setValue(5);
    Y b1;
    b1.setValue(6);
    add(a1,b1);   //function call
return 0;
}