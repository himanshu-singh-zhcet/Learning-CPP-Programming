#include<iostream>
#include<list>
using namespace std;
void display(list<int>  &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    list <int> list1(3);
    list <int> :: iterator iter;
    iter= list1.begin();
    *iter=4;
    iter++;
    *iter=5;
    iter++;
    *iter=6;
    iter++;
    display(list1);


return 0;
}