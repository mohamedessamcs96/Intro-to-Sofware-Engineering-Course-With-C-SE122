#include<iostream>



using namespace std;

void swap(int &x,int &y){
    int temp;  //temp cup
    temp=x; //moved the mango in the temp
    x=y;    //moved the water in the mango cup
    y=temp;  //mango to  mango cup
}

int main(){


    int x=5;
    int y=2;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<"x is equal:"<<x<<" y is equall:"<<y<<endl;
    swap(x,y);
    cout<<"x is equal:"<<x<<" y is equall:"<<y<<endl;


    return 0;
}