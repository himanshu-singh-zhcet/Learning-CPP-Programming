#include<iostream>
using namespace std;
class baseclass{
    public:
    int vari_base=1;
    void virtual display(void){
        cout<<"1  displaying base class variable vari_base "<<vari_base<<endl;
    }
};
class derivedclass :public baseclass{
    public:
    int vari_derived=2;
    void display(void){
        cout<<"2  displaying base class variable vari_derived "<<vari_base<<endl;
         cout<<"2  displaying derived class variable vari_derived "<<vari_derived<<endl;
    }
};
int main(){
baseclass base_obj;
derivedclass deri_obj;
baseclass *base_class_pointer;
base_class_pointer = &deri_obj;
base_class_pointer->display();

return 0;
}