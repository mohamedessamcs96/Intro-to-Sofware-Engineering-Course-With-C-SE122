#include<iostream>


using namespace std;



void CreatePyramid(int height);


int main(){

    CreatePyramid(3);
    CreatePyramid(4);
    CreatePyramid(5);





    return 0;
}


void CreatePyramid(int height){
    for(int i=0;i<height;i++){
        for(int j=0;j<i+1;j++){
            cout<<"# ";
        }
        cout<<endl;
    } 
}