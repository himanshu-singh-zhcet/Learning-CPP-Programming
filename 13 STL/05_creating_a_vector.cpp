#include<iostream>
#include<vector>
using namespace std;
template <class t>
void display(vector<t> &v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
        // we can also use this in place of above line code : cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    // ways to create a vector
    // vector <int> vec1;    // zero length integer vector

    // vector<char> vec2(4);    // 4 element character vector 
    // vec2.push_back('5');
    // display(vec2);

    // vector<char> vec3(vec2);   // 4 element character vector derived from vec2
    // display(vec3);
     vector<int> vec4(6,13);
     display(vec4);

    
return 0;

}