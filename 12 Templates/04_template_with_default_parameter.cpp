#include<iostream>
using namespace std;
// template with default parameter
template<class t1=int, class t2=float>
class myclass{
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b){
        data1= a;
        data2= b; 
    }
    void dissplay(void){
        cout<<data1<<endl<<data2<<endl;
    }
};
int main(){
    myclass<float>obj(1.8,1.8);
    obj.dissplay();

return 0;
}