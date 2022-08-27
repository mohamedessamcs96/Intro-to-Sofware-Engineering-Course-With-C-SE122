

#include<iostream>


using namespace std;


int main(){

    short grade;
    cout<<"Enter your grade:"<<endl;
    cin>>grade;

    if(grade>=85){
        cout<<A<<endl;
    }
    else if(grade>=75){
        cout<<'B'<<endl;

    }
    else if(grade>=65){
        cout<<'C'<<endl;
    }
    else{
        cout<<'F'<<endl;
    }
    
    return 0;
}