#include<iostream>


using namespace std;


int main(){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"#";
        }
        cout<<endl;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<"#";
        }
        cout<<endl;
    }
    int z=5;
    for(int i=0;i<z;i++){
        
            for(int k=0;k<z-i;k++){
                cout<<"";
                
            }
        for(int j=0;j<i+1;j++){
            

            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}