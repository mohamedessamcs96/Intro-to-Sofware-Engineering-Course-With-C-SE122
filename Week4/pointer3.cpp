#include<iostream>


using namespace std;



int main() {

    int *x=(int*)malloc(32);

    

    if(!x){
        cout<<"Memory Allocation failed"<<endl;
    }
    else{
        cout<<x<<endl;
        *x=900;
        cout<<*x<<endl;

        free(x);
    
    }
}