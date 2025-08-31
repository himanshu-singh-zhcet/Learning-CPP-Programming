#include<iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float interestvalue;
    float returnvalue;

    public:
        bankdeposit(){}
        bankdeposit(int p, int y, float r);
        bankdeposit(int p,int y, int r);
        void show();
};

bankdeposit:: bankdeposit(int p, int y, float r){
    principal=p;
    years=y;
    interestvalue=r;
    returnvalue= principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestvalue);
    }
}

bankdeposit:: bankdeposit(int p, int y, int r){
    principal=p;
    years=y;
    interestvalue=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+interestvalue);
    }
}

void bankdeposit :: show(){
    cout<<"principal amount was "<<principal<<" return value after "<<years<<" year is "<<returnvalue<<endl;
}

int main(){
    bankdeposit bd1,bd2,bd3;
    int p,q; 
    float r;
    int R;
    printf("enter the value\n");
    cin>>p>>q>>r;
    bd1=bankdeposit(p,q,r);  // Dynamic Intialization of object using constructor
    bd1.show();

    printf("enter the values \n");
    cin>>p>>q>>R;
    bd2=bankdeposit(p,q,R);
    bd2.show();

    return 0;
}