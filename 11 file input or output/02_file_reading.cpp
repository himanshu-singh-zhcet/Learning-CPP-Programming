#include<iostream>
#include<fstream>>
using namespace std;
int main(){
    string st = "harry bhai";
    string st2;
    // opening files using constructor
    ifstream in("sample2.txt");
    // read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2;

return 0; 
}