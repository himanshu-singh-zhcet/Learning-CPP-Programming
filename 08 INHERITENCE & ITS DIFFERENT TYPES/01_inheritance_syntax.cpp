#include<iostream>
using namespace std;
// base class
class employee{
public:
int id;
float salary;
employee(){}
employee(int id1){
id =id1;
salary=34.0;
}
};
// derived class    creating a programmer class from employee class
class programmer: public employee{
public:
int languagecode;
programmer(int id2){   
id = id2;
languagecode=9;
}
void getid(){
    cout<<id<<endl;
}
void getlanguagecode(){
    cout<<languagecode<<endl;
}
};
int main(){
    employee rohan(5);
    cout<<rohan.salary<<endl;
    cout<<rohan.id<<endl;
    programmer nitin(6);
    cout<<nitin.id<<endl;
    cout<<nitin.languagecode<<endl;
    nitin.getid();
    nitin.getlanguagecode();
    

return 0;
}