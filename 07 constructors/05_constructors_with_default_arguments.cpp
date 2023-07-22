#include <iostream>
using namespace std;
class simple
{
    int a, b;

public:
    simple(int x, int y = 7)
    {
        a = x;
        b = y;
    }
    void printdata(){
        cout<<"the data is"<<a<<","<<b<<endl;
    }
};
int main()
{
    simple o1(4);
    o1.printdata();
    simple o2(4,5);
    o2.printdata();
    return 0;
}