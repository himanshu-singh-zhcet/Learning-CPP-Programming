#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;

public:
    void setdata(void){
        cout << "enter the id no" << endl;
        cin >> id;
        count++;
    }

    void getdata(void){
        cout << "the id of te employee is " << id << " this is employee no is " << count << endl;
    }

    static void getcount(void){
        /* cout<<id; agr is function se hum id print kareyyenge to nhhi karega yye kyuki 
        iske passc sirf staric variables or functions ka hhhi acces hai    */
        cout<<"the value of count is "<<count<<endl;
    }
};

int employee ::count; // default value is zero or here we can inliliase the value of count

int main()
{
    // counter is static data member of class employyee
    employee harry, hem, nitin;
    harry.setdata();
    harry.getdata();
    employee::getcount();
    hem.setdata();
    hem.getdata();
    employee::getcount();
    nitin.setdata();
    nitin.getdata();
    employee::getcount();
    return 0;
}