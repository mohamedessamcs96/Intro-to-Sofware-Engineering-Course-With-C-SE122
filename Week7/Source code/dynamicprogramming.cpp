#include<iostream>


using namespace std;


int main(){


    string email;
    cout<<"Enter your email"<<endl;
    cin>>email;
    short emailCount=email.length();
    for(int i=0;i<emailCount;i++){
        if(email[i]=='@'){
            cout<<"Valid mail"<<endl;
            return 0;
        }
    }
    cout<<"invalid mail"<<endl;


    return 0;
}