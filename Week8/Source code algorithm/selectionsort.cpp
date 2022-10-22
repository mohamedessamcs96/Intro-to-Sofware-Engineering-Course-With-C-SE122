#include<iostream>


using namespace std;



int main(){

    int songslist[]={10,5,20,1,30,90,4};
    int n=sizeof(songslist)/sizeof(int);
    cout<<"Unsorted Array";
    for(int k=0;k<n;k++){
        cout<<songslist[k]<<",";
    }
    cout<<endl;

    int temp;
    int min_index;
    for(int step=0;step<n-1;step++){
        min_index=step;
        for(int i=step+1;i<n;i++){
            if(songslist[i]<songslist[min_index]){
                min_index=i;
   }
        }
        temp=songslist[min_index];
        songslist[min_index]=songslist[step];
        songslist[step]=temp;
    }


    cout<<"sorted Array";
    for(int l=0;l<n;l++){
        cout<<songslist[l]<<",";
    }
    cout<<endl;



    return 0;
}