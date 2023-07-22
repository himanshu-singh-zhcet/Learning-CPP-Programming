#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("sample5.txt");
    out<< "this is  my name";
    out.close();
    ifstream in;
    in.open("sample6.txt");
    string name;
    // in>>name;
    // cout<<name<<endl;
    while(in.eof()==0){
        getline(in,name);
        cout<<name;
    }
    in.close();


return 0;
}