#include<iostream>


using namespace std;


int main(){


    int doors[]={15,16,8,6,5,10};
    int number=59;
    for(int i=0;i<6;i++){
        if(doors[i]==number){
            cout<<"I find it in index number:"<<i<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;



    return 0;
}