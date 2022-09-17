#include<iostream>



using namespace std;


int main(){

    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age>18 && age<30){
        cout<<"Accepted to our scholarship"<<endl;
    }
    else{
        cout<<"Not Accepted"<<endl;
    }


    if(age>18){
        if(age<30){
            cout<<"Accepted to our scholarship"<<endl;
        }
        else{
            cout<<"Not Accepted"<<endl;
        }
    
    }
    else{
        cout<<"Not Accepted"<<endl;
    }


    return 0;
}