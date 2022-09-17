#include<iostream>


using namespace std;


int main(){

    float weight_kg,weight_pounds,water_ounces;
    
    cout<<"Enter your weight in KG:";
    cin>>weight_kg;

    weight_pounds=weight_kg*2.2046;

    water_ounces=weight_pounds*2/3;
    water_liters=water_ounces*0.029573;
    cout<<"The number of liters you should drink:"<<water_liters<<endl;


    return 0;
}