#include<iostream>


using namespace std;


int main(){


    char name[]={'H','E','l','l','o','\0'};
    int count=0;
    while(name[count]!='\0' ){
        cout<<name[count];
        count++;
    }

    cout<<endl;


    string name;
    cin>>name;

    return 0;
}