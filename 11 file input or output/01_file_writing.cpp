#include<iostream>
#include<fstream>>
using namespace std;
int main(){
    string st = "harry bhai";
    // opening files using constructor
    ofstream out("sample1.txt");
    // write operation
    out<<st;

return 0; 
}