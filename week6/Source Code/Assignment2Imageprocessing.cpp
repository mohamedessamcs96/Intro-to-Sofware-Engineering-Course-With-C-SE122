#include<iostream>



using namespace std;




int main(){


    int rows;
    int cols;
    cout<<"Enter the number of rows:"<<endl;
    cin>>rows;
    cout<<"Enter the number of cols:"<<endl;
    cin>>cols;
    char BrainImage[rows][cols];

    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            cin>>BrainImage[r][c];
        }
    }
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            cout<<BrainImage[r][c]<<" ";
        }
        cout<<endl;
    }

    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            if(BrainImage[r][c]=='C' || BrainImage[r][c]=='Y' || BrainImage[r][c]=='M'){
                cout<<"#Colored"<<endl;
                return 0;
            }

        }
        
        cout<<"#Black&White"<<endl;
    }

    return 0;
}