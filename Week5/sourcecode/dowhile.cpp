#include<iostream>


using namespace std;


int main(){


    int birthdate;

    do{
    cout<<"Enter your birthdate:";
    cin>>birthdate;
}

    while(birthdate<1990);

    cout<<"Your age is:"<<2022-birthdate<<endl;

    return 0;
}