#include<iostream>


using namespace std;



int main(){


    int studentNumber;
    cout<<"Enter the student number:"<<endl;
    cin>>studentNumber;

    int GradeArray[studentNumber];
    int Number;
    cout<<"Enter the grade you are searching for: "<<endl;
    cin>>Number;
    
    for(int i=0;i<studentNumber;i++){
        cin>>GradeArray[i];
    }


    for(int j=0;j<studentNumber;j++){
        if(GradeArray[j]==Number){
            cout<<"The student index is: "<<j<<endl;
            return 0;
        }
    }
    cout<<"No one"<<endl;



    return 0;
}