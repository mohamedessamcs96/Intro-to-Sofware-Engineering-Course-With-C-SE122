#include<iostream>


using namespace std;


int main(){


    int itemsNumber;
    cout<<"Enter the items number:"<<endl;
    cin>>itemsNumber;

    int itemPrice[itemsNumber];

    for(int i=0;i<itemsNumber;i++){
        cout<<"Enter the item price:";
        cin>>itemPrice[i];
    }

    int sum=0;
    for(int i=0;i<itemsNumber;i++){
        sum=sum+itemPrice[i];
    }

    cout<<"Sum of total prices equall:"<<sum<<endl;

    return 0;
}