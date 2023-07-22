#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // connecting our file with the hout stream
    ofstream hout("sample3.txt");
    string name;
    cout<<"enter tour name"<<endl;
    cin>>name;
    // writng a string to the file
    hout<<"my name is "<<name<<endl;
    hout.close();

    ifstream hin("sample4.txt");
    string content;
    hin>>content;
    cout<<content<<endl;
    hin.close();
return 0;
}