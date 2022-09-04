#include<iostream>


using namespace std;

int main(){

    char grade;
    cout<<"Enter the Grade Letter:"<<endl;
    cin>>grade;


    cout<<(true||false)<<endl;
    cout<<(true&&true)<<endl;
    if(grade=='A' || grade =='a'){
        cout<<"Grade from 85 to 100"<<endl;
    }
    
    else if(grade=='B' || grade =='b'){
        cout<<"Grade from 75 to 84"<<endl;
    }
    else if(grade=='C' || grade =='c'){
        cout<<"Grade from 60 to 74"<<endl;
    }

    else if(grade=='D'|| grade =='d'){
        cout<<"Grade from 50 to 59"<<endl;
    }
    else if(grade=='F'|| grade =='f'){
        cout<<"Grade from 0 to 49"<<endl;
    }
    else{
        cout<<"Wrong Number"<<endl;
    }
    return 0;
}