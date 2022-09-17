#include<iostream>


using namespace std;


int main(){


    string plaintext;
    cout<<"Enter the plain text message:"<<endl;
    cin>>plaintext;
    
    /*

        get the key you want to encreypt with.........
    
    */


    cout<<plaintext.length()<<endl;

    for(int i=0;i<plaintext.length();i++){
        cout<<int(plaintext[i])<<endl;

        //Assignment Task for caesar cipher.......
        
    }
    cout<<char(65)<<endl;


    return 0;
}