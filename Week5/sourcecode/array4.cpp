#include<iostream>


using namespace std;


int main(){


    string names="Hello";
    cout<<names<<endl;


  

    char name[5];
    name[0]='H';
    name[1]='E';
    name[2]='l';
    name[3]='l';
    name[4]='o';
  
    for(int i=0;i<5;i++){
        cout<<name[i];
    }

    return 0;
}