#include<iostream>
using namespace std;

// destructor never takes an argument and nor does it return any value
// is is use to free the memeory of the object

int count =0;

class num{w 
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
    cout<<"entering in the main"<<endl;
    num n1;
    {   
        cout<<"entering in the block"<<endl;
        num n2,n3;
        cout<<"exist form the block"<<endl;
    }  // block ke exist hone pr hi destructor call ho jayega
    cout<<"back to main"<<endl;
    return 0;
}