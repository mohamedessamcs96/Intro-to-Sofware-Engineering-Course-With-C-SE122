#include<iostream>



using namespace std;


class Shape{

protected:
    int height;
    int width;
public:

    virtual int Calculatearea()=0;

    void setHeight(int h){
        height=h;
    }

    void setWidth(int w){
        width=w;
    }



};

class Rectangle:public Shape{
public:
    int Calculatearea(){
        return width*height;
    }
};



class Triangle:public Shape{
public:
    int Calculatearea(){
        return 0.5*width*height;
    }
};


int main(){

    Rectangle r1;
    r1.setHeight(20);
    r1.setWidth(20);
    cout<<r1.Calculatearea()<<endl;

    Triangle t1;
    t1.setHeight(20);
    t1.setWidth(20);
    cout<<t1.Calculatearea()<<endl;



    return 0;
}