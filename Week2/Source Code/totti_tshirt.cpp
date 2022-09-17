#include<iostream>


using namespace std;


int main(){
    

    int tshirt;
    cout<<"Enter the T shirt number:"<<endl;
    cin>>tshirt;

    if(tshirt!=10){
        cout<<"Okay you have choosed the tshirt number:"<<tshirt<<endl;

    }
    else{
        cout<<"This t shirt are reserved!"<<endl;
    }
    return 0;
}