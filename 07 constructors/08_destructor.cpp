#include<iostream>
using namespace std;

// destructor never takes an argument and nor does it return any value
// is is use to free the memeory of the object
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
    }  // block ke exist hone pr hi destructor call ho jayega
return 0;
}