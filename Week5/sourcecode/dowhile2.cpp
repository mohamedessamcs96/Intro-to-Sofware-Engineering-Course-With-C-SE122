#include<iostream>


using namespace std;


int main(){


    int PASSWORD=1996;
    int password;

    do{
    cout<<"Enter a valid Password:";
    cin>>password;
}

    while(password!=PASSWORD);

    cout<<"You 've logged sucessfully...."<<endl;

    return 0;
}