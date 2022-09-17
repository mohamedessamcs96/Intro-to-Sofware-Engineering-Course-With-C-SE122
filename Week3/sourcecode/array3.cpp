#include<iostream>


using namespace std;


int main(){



    int number_grades;
    cout<<"Enter the number of students:";
    cin>>number_grades;

    int sheetgrades[number_grades];
    
    for(int i=0;i<number_grades;i++){
        cout<<"Enter student Grade"<<i<<":"<<endl;
        cin>>sheetgrades[i];
        
    }


    for(int i=0;i<number_grades;i++){
        cout<<sheetgrades[i]<<endl;
        
    }

    cout<<"Passed Students:"<<endl;

    for(int i=0;i<number_grades;i++){
        if(sheetgrades[i]>=50){
            cout<<sheetgrades[i]<<endl;
        }
        
    }

  
    return 0;
}