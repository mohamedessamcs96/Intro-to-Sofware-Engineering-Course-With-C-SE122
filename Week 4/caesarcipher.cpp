#include<iostream>


using namespace std;


void main(){

    string text;
    cout<<"Enter the message you want to encrypt or Decrept:";
    cin>>text;

    cout<<text.length()<<endl;

    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;

    char letter;
    cout<<"Do you want to Encrypt or Decrept?"<<endl;
    cout<<"For Encreption Enter E for Decreption Enter D"<<endl;
    cin>>letter;

    if(letter=='E' || letter == 'e'){
    
    for(int i=0;i<text.length();i++){
        cout<<char(int(text[i]+key));
    }
    cout<<endl;
}

    else if(letter=='D' || letter == 'd'){
    
    for(int i=0;i<text.length();i++){
        cout<<char(int(text[i]-key));
    }
    cout<<endl;
}


    
}