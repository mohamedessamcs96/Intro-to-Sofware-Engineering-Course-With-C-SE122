#include<iostream>


using namespace std;


int main(){


    string names;
    cout<<"Enter your name:";
    cin>>names;
    cout<<"HEllo,"<<names<<endl;


  

    char name[5];

    for(int i=0;i<5;i++){
       cin>>name[i];
    }
  
    for(int i=0;i<5;i++){
        cout<<name[i];
    }

    return 0;
}