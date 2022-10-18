#include<iostream>


using namespace std;



int main(){

    int Arraysize=5;

    int Arr[]={10,20,30,40,50};
    int Number=30;
    //low and high
    int low=0;
    int high=Arraysize-1;
    int middle;
    while(low<=high){
        middle=(low+high)/2;
        if(Arr[middle]==Number){
            cout<<"I founded it in index:"<<middle<<endl;
            return middle;
        }
        else if(Number>Arr[middle]){
            cout<<"I am in the right!"<<endl;
            low=middle+1;
        }
        else{
            cout<<"I am in the left!"<<endl;
            high=middle-1;
        }


    }


    return 0;
}