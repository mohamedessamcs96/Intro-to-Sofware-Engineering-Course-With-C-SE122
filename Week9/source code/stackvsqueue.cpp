#include<iostream>



using namespace std;




int main(){

    string messages[]={"Hello 2020","Hello 2021","Hello 2022"};
    int n=3;
    cout<<"If we implemented using queue"<<endl;
    for(int i=0;i<n;i++){
        cout<<messages[i]<<endl;
    }

    cout<<"If we implemented using stack"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<messages[i]<<endl;
    }

    return 0;
}