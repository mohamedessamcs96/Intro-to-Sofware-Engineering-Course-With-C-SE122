#include<iostream>


using namespace std;

class Car{

public:
    string make;
    string color;
    int speed;
    string transmission;


    Car(string m,string c,int s,string t){
        make=m;
        color=c;
        speed=s;
        transmission=t;
    }



    void CarDetails(){
        cout<<"The car made by:"<<make<<endl;
        cout<<"The car color is:"<<color<<endl;
        cout<<"The car speed is:"<<speed<<endl;
        cout<<"The car transmission is:"<<transmission<<endl;
    } 

};


int main(){

    Car c1=Car("bmw","black",300,"Manual");

    Car c2=Car("Mercedes","White",200,"Manual");

    Car c3=Car("Mercedes","White",200,"Manual");


    
    

    int choice;
    cout<<"Choose the Car:"<<endl;
    cout<<"For BMW enter 1 for mercedes enter 2 for Hunday enter 3:"<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:c1.CarDetails();
        break;
    case 2:c2.CarDetails();
        break;

    case 3:c3.CarDetails();
        break;
    default:cout<<"Wrong choice"<<endl;
        break;
    }

    return 0;
}