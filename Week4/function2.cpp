#include<iostream>


using namespace std;


void calculateBMI(float weight,float height){

    float bmi=weight/(height*height);
    cout<< bmi<<endl;

}

int calculateAge(int birthdate){

    return 2022-birthdate;
}



void checkLegability(int age){

    if(calculateAge(1996)>18){
        cout<<"legal"<<endl;
    }
    else{
        cout<<"not legal"<<endl;
    }

}

int main(){


    int age=calculateAge(1996);

    checkLegability(age);

    //float bmivalue=calculateBMI(70,1.7);
    calculateBMI(70,1.7);
   
   
}
