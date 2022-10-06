#include<iostream>


using namespace std;

int main(){

    int matricesUber[2][2]={{1,3},{2,3}};
    cout<<"R1"<<"R2"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matricesUber[i][j]<<" ";
        }
        cout<<endl;
    }

    
    for(int i=0;i<2;i++){
        int totaldistance=0;
        for(int j=0;j<2;j++){

            totaldistance+=matricesUber[i][j];
        }
        cout<<"Total Distance"<<totaldistance<<endl;
    }


    return 0;
}