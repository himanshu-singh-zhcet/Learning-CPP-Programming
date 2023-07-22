#include<iostream>
#include<cmath>
using namespace std;
/* prob--> As I have given you an exercise on inheritance to solve in the previous tutorial. In this tutorial, we will see the solution 
to that exercise. So the question was to make three classes “SimpleCalculator”, “ScientificCalculator” and “HybridCalculator”.
In “SimpleCalculator” class you have to take input of 2 numbers and perform function (+, -, *, /)
In “ScientificCalculator” class you have to take input of 2 numbers and perform any 4 scientific operations
You have to inherit both “SimpleCalculator” and “ScientificCalculator” classes with the “HybridCalculator” class.You have to make an 
object of the “HybridCalculator” class and display the results of “SimpleCalculator” and “ScientificCalculator” classes.         */
class simple_calculator{
    int a,b;
    public:
    void getdata_simple(void){
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    void performoperation_simple(){
        cout<<"the value of a+b is "<<a+b<<endl;
        cout<<"the value of a-b is "<<a-b<<endl;
        cout<<"the value of a*b is "<<a*b<<endl;
        cout<<"the value of a/b is "<<a/b<<endl;

    }
};
class scientific_calculator{
    int a,b;
    public:
    void getdata_scientific(void){
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    void performoperation_scientific(){
        cout<<"the value of cos(A is "<<cos(a)<<endl;
        cout<<"the value of cos(b) is "<<cos(b)<<endl;
        cout<<"the value of exp(a) is "<<exp(a)<<endl;
        cout<<"the value of tan(a) is "<<tan(a)<<endl;

    }
};
class hybrid_calculator: public simple_calculator,public scientific_calculator{

};
int main(){
    hybrid_calculator calc;
    calc.getdata_simple();
    calc.performoperation_simple();
    calc.getdata_scientific();
    calc.performoperation_scientific();

return 0;
}
