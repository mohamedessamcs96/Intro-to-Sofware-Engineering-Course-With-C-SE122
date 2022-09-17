#include<iostream>
#include <cctype>

using namespace std;



int add_two_numbers(int x,int y){
    int sum=x+y;
    return sum;
}



char CoverttoUpper(char l){

    char capitalletter=int(l-32);

    return capitalletter;
}



char CoverttoLower(char l){

    char lowerletter=int(l+32);

    return lowerletter;
}

int main(){

    string name;
    cout<<"Enter your name:";
    cin>>name;
    for(int i=0;i<name.length();i++){
        cout<<CoverttoUpper(name[i]);
    }
    cout<<endl;

    for(int i=0;i<name.length();i++){
        if(i==0){
        cout<<CoverttoUpper(name[i]);
        }
        else{
            cout<<name[i];
        }
    }
    cout<<endl;

    cout<<CoverttoUpper('a')<<endl;
    cout<<CoverttoLower('A')<<endl;
    //cout<<char(toupper('a'))<<endl;


    return 0;

}