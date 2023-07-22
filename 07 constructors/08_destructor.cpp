#include<iostream>
using namespace std;
int count =0;
class num{
    public:
    num(){
    count++;
    cout<<"this is the time when constructor is called for object "<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when destructor is called for object "<<count<<endl;
        count--;
    }
};
int main(){
    num n1;
    {
        num n2,n3;
    }
return 0;
}