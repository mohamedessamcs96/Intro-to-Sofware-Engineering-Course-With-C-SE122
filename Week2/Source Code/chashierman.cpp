#include<iostream>


using namespace std;



int main(){

    int itemnumner;
    int itemprice;
    int totalsum=0;
    cout<<"Enter the item number:";
    cin>>itemnumner;
    for(int i=0;i<itemnumner;i++){
        cout<<"Enter the item Price:"<<endl;
        cin>>itemprice;
        totalsum=totalsum+itemprice;
    }
    cout<<"Total sum is:"<<totalsum<<endl;

    return 0;
}