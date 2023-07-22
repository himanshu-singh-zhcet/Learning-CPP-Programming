#include<iostream>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title=s;
        rating =r;
    }
    void virtual display(void){
    }
};
class CWHvideo:public CWH{
    float videolength;
    public:
    CWHvideo(string s,float r,float vl): CWH(s,r){
        videolength=vl;
    }
    void display(void){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
    }
};
class CWHtext:public CWH{
    int words;
    public:
    CWHtext(string s,float r,float word):CWH(s,r){
        words=word;
    }
    void display(void){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    float word;
    // for CWH video
    title= "harry tutorial video";
    rating= 4.78;
    vlen=4.58;

    CWHvideo  djvideo(title,rating,vlen);
    // djvideo.display();
    
    //for CWH text
    title= "harry tutorial text";
    word=433;
    rating= 4.36;
    CWHtext djtext(title,rating,word);
    // djtext.display();
    CWH *tut[2];
    tut[0]=&djvideo;
    tut[1]=&djtext;
    tut[0]->display();
    tut[1]->display();
    
    






return 0;
}
 