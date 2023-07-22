#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id =a;
        price =b;
    }
    void getdata(void){
        cout<<"the id of the item is "<<id<<endl;
        cout<<"the price of the item is "<<price<<endl;
    }
};
int main(){
    int size =3;
    shop *ptr= new shop[size];
    shop *ptrtemp=ptr;
    int p;
    float q;
    for(int i=0;i<size;i++){
        cout<<"enter the id and price"<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++; 
    }
    for(int i=0;i<size;i++){
        ptrtemp->getdata();
        ptrtemp++;

    }
return 0;
}