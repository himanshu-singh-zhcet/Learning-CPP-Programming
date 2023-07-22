#include<iostream>
using namespace std;
class point{
    int a, b;
    public:
    point(int x, int y){
        a=x;
        b=y;
    }
    void printnumber(){
        cout<<"the point is "<<a<<","<<b<<endl;
    }
};

int main(){
point a(4,5);
point b(7,9);
a.printnumber();
b.printnumber();
return 0;
}