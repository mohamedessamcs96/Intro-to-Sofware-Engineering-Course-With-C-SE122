#include<iostream>


using namespace std;


int main(){



    int sheetgrades[4];
    
    for(int i=0;i<4;i++){
        cout<<"Enter student Grade"<<i<<":"<<endl;
        cin>>sheetgrades[i];
        
    }


    for(int i=0;i<4;i++){
        cout<<sheetgrades[i]<<endl;
        //cout<<"item number"<<i<<" Equal:"<<sheetgrades[i]<<endl;
    }

  
    return 0;
}