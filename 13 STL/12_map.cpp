#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> marksmap;
    marksmap["harry"]=98;
    marksmap["nitin"]=99;
    marksmap["himanshu"]=90;
    marksmap.insert({{"shivani",88},{"shivi",99}});
    map<string,int>:: iterator iter;
    for(iter=marksmap.begin();iter !=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<" "<<endl;
    }
return 0;
}