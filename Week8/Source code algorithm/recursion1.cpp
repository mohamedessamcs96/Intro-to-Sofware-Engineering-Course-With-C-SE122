#include<iostream>


using namespace std;


int count(int c){

    
    if(c<=0){
        return 0;
    }
    else{
        cout<<"C value is:"<<c<<endl;
        return count(c-1);
    }

}



int main(){

    
    for(int i=5;i>0;i--){
        cout<<"I Value is :"<<i<<endl;
    }

    count(5);



    return 0;
}