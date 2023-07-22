// is waale case main jo student class ka roll no sirf ek baar hi copy hoga result class ko 

#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void get_number(){
        cout<<"the roll no is "<<roll_no<<endl;
    }
};
class test : public virtual student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics =m2;
    }
    void show_marks(void){
        cout<<"marks in the maths is "<<maths<<endl
        <<"marks in the physics is "<<physics<<endl;
    }
};
class sport : public virtual student{
    protected:
    int score;
    public:
    void set_score(int sc){
        score=sc;
    }
    void show_score(void){
        cout<<"the score is "<<score<<endl;
    }
};
class result : public test,public sport{
    protected:
    float result;
    public:
    void  show_result(void){
        result=score+maths+physics;
        get_number();
        show_marks();
        show_score();
        cout<<"the result is "<<result<<endl;
    }

};
int main(){
    result harry;
    harry.set_number(20);
    harry.set_marks(78.7,98.7);
    harry.set_score(7);
    harry.show_result();
   
return 0;
}