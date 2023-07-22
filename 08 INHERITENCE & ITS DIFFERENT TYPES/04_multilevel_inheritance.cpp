#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number(void)
    {
        cout << "the roll no is " << roll_number << endl;
    }
};
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2){
        maths =m1;
        physics =m2;
    }
    void get_marks(void){
    cout<<"the marks in the maths are "<<maths<<endl;
    cout<<"the marks in the physics are "<<physics<<endl;
    }
};
class result :public exam{
    float percentage;
    public:
    void display_result(void){
        get_roll_number();
        get_marks();
        cout<<"the percentage is "<<(maths+physics)/2<<"%"<<endl;
    }


};
int main()
{
    result harry;
    harry.set_roll_number(450);
    harry.set_marks(90.4,97.5);
    harry.display_result();
    return 0;
}