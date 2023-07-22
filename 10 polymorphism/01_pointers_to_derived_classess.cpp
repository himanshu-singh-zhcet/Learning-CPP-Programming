#include<iostream>
using namespace std;
class baseclass{
    public:
    int vari_base;
    void display(void){
        cout<<"1  displaying base class variable vari_base "<<vari_base<<endl;
    }
};
class derivedclass :public baseclass{
    public:
    int vari_derived;
    void display(void){
        cout<<"2  displaying base class variable vari_derived "<<vari_base<<endl;
         cout<<"2  displaying derived class variable vari_derived "<<vari_derived<<endl;
    }

};
int main(){
    baseclass obj_base;
    derivedclass obj_derived;
    baseclass *base_class_pointer;
    base_class_pointer=&obj_derived;  // point base class pointer to derived class object;
    base_class_pointer->vari_base=34;
    base_class_pointer->display();
   //  base_class_pointer->vari_derived=134;  will throw an error
    derivedclass *derivedclass_pointer;
    derivedclass_pointer=&obj_derived;
    derivedclass_pointer->vari_derived=44;
    derivedclass_pointer->vari_base=66;
    derivedclass_pointer->display();
return 0;
}