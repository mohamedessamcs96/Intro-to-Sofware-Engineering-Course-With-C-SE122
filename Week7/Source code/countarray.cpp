#include<iostream>




using  namespace std;



int main(){

    int arr[]={12,32,43};
    cout<<sizeof(arr)<<endl;
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;



    return 0;
}