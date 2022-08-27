

#include<iostream>


using namespace std;


int main(){


    int chairTable;
    cout<<"Enter Table number"<<endl;
    cin>>chairTable;

    if(chairTable!=10){
        cout<<"You have reserved table number:"<<chairTable<<endl;;
    }
    else{
        cout<<"this table have been reserved"<<endl;
    }


    return 0;
}