#include<iostream>
using namespace std;
template<class t1, class t2>
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
    myclass<int, float>obj(1,1.8);
    obj.dissplay();

return 0;
}