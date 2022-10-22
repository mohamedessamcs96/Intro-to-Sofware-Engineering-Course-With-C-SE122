#include<iostream>



using namespace std;




int main(){

    int GradesArray[]={20,90,70,60,50,10,30,5};

    int ArraySize=sizeof(GradesArray)/sizeof(int);
    cout<<ArraySize<<endl;

    cout<<"Unsorted Array:";
    for(int i=0;i<ArraySize;i++){
        cout<<GradesArray[i]<<",";
    }
    cout<<endl;



    for(int i=0;i<ArraySize-1;i++){
        for(int j=0;j<ArraySize-i-1;j++){
            if(GradesArray[j]>GradesArray[j+1]){
                int temp=GradesArray[j];
                GradesArray[j]=GradesArray[j+1];
                GradesArray[j+1]=temp;
            }
        }
        for(int k=0;k<ArraySize;k++){
            cout<<" "<<GradesArray[k]<<" ";
        }
        cout<<endl;
    }
    

cout<<"sorted Array:";
    for(int i=0;i<ArraySize;i++){
        cout<<GradesArray[i]<<",";
    }
    cout<<endl;

    return 0;
}