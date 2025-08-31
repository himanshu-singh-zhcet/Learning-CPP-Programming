#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public : 
    void read(void);
    void chk_bin(void);
    void comp(void);
    void display(void);
};

void binary :: read(void){
    printf("enter a binary no \n");
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            printf("it is not a binary format ");
            exit(0);
        }
    }
}

void binary :: comp(void){
    // chk_bin();           ********* if we place it here this is known as nesting of member functions *******
    for(int i =0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        } else {
            s.at(i)='0';
        }
    }
    printf("the comp  is \n");
    for(int i =0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary :: display(void){
    printf("the no displayed is \n");
    for(int i =0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.comp();
    return 0;
}