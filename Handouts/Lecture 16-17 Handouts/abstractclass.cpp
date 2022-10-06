#include <iostream>

using namespace std;


class Shape{
public:
    int height;
    int width;


virtual int CalculateArea()=0;  //Pure Virtual Function......

void setWidth(int w){
    width=w;
}
int getWidth(){
    return width;
}


void setHeight(int h){
    height=h;
}
int getHeight(){
    return height;
}


};

class Rectangle:public Shape{

public:
    int CalculateArea(){
        return (width*height);
    }

};

class Triangle:public Shape{


public:
    int CalculateArea(){
        return 0.5*(width*height);
    }

};


int main()
{
    Rectangle r1;
    r1.setHeight(10);
    r1.setWidth(10);
    cout<<"The Area of Rectangle:"<<r1.CalculateArea()<<endl;

    Triangle t1;
    t1.setHeight(20);
    t1.setWidth(10);
    cout<<"The Area of Triangle:"<<t1.CalculateArea()<<endl;

}
