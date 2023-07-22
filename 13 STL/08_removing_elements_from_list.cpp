#include<iostream>
#include<list>
using namespace std;
void display(list<int>  &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;  // list of zero length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(15);  
    display(list1);
    // removing the elements from the list
    // list1.pop_front();
    // list1.pop_back();
    list1.remove(9);
    display(list1);




return 0;
}