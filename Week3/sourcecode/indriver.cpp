#include<iostream>


using namespace std;


int main(){

   int driver_requests,price;
   cout<<"Enter number of Requests:"<<endl;
   cin >>driver_requests;

   int min=1000000;

   for(int i=0;i<driver_requests;i++){
        cout<<"Enter Driver price Number"<<i+1<<":"<<endl;
        cin >>price;
        if(price<min){
            min=price;
        }
   }
    cout<<"The minimum request is:"<<min<<endl;

    return 0;
}