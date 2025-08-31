#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;  
    /***  this variable is connected with class not the objects this variable is shared
      by all objects of this cleass. static variable is also known as class variable  ***/

    public:
        void setdata(void) {
            cout << "enter the id no" << endl;
            cin >> id;
            count++;
        }
        void getdata(void){
            cout << "the id of te employee is " << id << " this is employee no  " << count << endl;
        }
};

int employee ::count; // default value is zero or here we can inliliase the value of count

int main(){
    // counter is static data member of class employyee
    employee harry, hem, nitin;
    harry.setdata();
    harry.getdata();
    hem.setdata();
    hem.getdata();
    nitin.setdata();
    nitin.getdata();
    return 0;
}