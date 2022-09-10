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

    int max=0;
    int sum=0;
    for(int i=0;i<itemsNumber;i++){
        sum=sum+itemPrice[i];
    }

    for(int i=0;i<itemsNumber;i++){
        if(itemPrice[i]>max){
            max=itemPrice[i];
        }
    }
    cout<<"maximum value s equall:"<<max<<endl;

    cout<<"Sum of total prices equall:"<<sum<<endl;

    return 0;
}