#include<iostream>


using namespace std;



int main(){


    int UberDistance[3][3]={
        {50,20,10},
        {60,30,10},
        {20,40,10}
    };


    for(int i=0;i<3;i++){
        int totalsum=0;
        for(int j=0;j<3;j++){
        //cout<<UberDistance[i][j]<<" ";
        totalsum=totalsum+UberDistance[i][j];
        }
        cout<<"Total distance for way number"<<i<<":"<<totalsum<<endl;
    }
    


    return 0;
}