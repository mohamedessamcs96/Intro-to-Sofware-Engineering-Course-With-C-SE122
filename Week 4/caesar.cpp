#include<iostream>


using namespace std;

int main(){

    string plaintext;
    cout<<"Enter the plaintext"<<endl;
    cin>>plaintext;

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    for(int i=0;i<plaintext.length();i++){
        cout<<char(int(plaintext[i]+key));
    }
    cout<<endl;



    return 0;
}