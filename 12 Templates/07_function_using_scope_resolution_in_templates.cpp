#include<iostream>
using namespace std;
template<class t>
class harry{
    public:
    t data;
    harry(t a){
        data= a;
    }
    void display();
};
template <class t>
void harry<t> :: display(){
    cout<<"the value of data is "<<data<<endl;
}

int main(){
    harry<int> obj(5);
    obj.display();

return 0;
}