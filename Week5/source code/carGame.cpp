#include<iostream>


using namespace std;


class Car{


public:
    string make;
    string color;
    int speed;

    Car(string m,string c,int s){
        make=m;
        color=c;
        speed=s;
    }

    ~Car(){
        cout<<"The Deconstructor called and the object Deleted!"<<endl;
    }

    void carDetails(){
        cout<<"Car Made by,"<<make<<endl;
        cout<<"Car Color,"<<color<<endl;
        cout<<"Car speed ,"<<speed<<endl;
    }
};


int main(){

    Car bmw=Car("BMW","Black",220);
    Car mercedes=Car("Mercedes","White",240);
    Car speranza=Car("Speranza","gray",120);


    // bmw.make="BMW";
    // bmw.color="Black";
    // bmw.speed=220;
    
    // mercedes.make="Mercedes";
    // mercedes.color="White";
    // mercedes.speed=240;

    // speranza.make="Speranza";
    // speranza.color="gray";
    // speranza.speed=120;

    char choice;
    cout<<"Enter the car number"<<endl;
    cout<<"For BMW details enter b"<<endl;
    cout<<"For Mercedes details enter m"<<endl;
    cout<<"For Speranza details enter s"<<endl;
    cin>>choice;
    switch(choice){
        case 'b':bmw.carDetails();
        break;
        case 'm':mercedes.carDetails();
        break;
        case 's':speranza.carDetails();
        break;
    }




    return 0;
}