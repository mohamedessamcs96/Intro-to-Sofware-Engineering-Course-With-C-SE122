#include<iostream>


using namespace std;



int main(){

    int testCase;
    cout<<"Enter the number of test cases:"<<endl;
    cin>>testCase;


    while(testCase--){
    int rows;
    cout<<"Enter the number of rows:"<<endl;
    cin>>rows;
    int cols;
    cout<<"Enter the number of cols:"<<endl;
    cin>>cols;

    char RobotMab[rows][cols];

    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            cin>>RobotMab[r][c];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=1;j<cols;j++){

            if((RobotMab[i][j]=='R') && RobotMab[0][0]=='E'){
                    cout<<"YES"<<endl;
                    return 0;
            }
            continue;
            }

        
        
        
        
        }
        
    
    cout<<"NO"<<endl;



    }





    return 0;
}