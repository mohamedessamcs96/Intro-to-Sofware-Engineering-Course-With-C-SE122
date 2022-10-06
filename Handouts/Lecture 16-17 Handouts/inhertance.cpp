#include <iostream>

using namespace std;



class MicroBus:public Bus{
};


class Van:public Car{

public:
    int Vansize;

    void setSize(int v){
        Vansize=v;
    }
    int getSize(){
        return;
    }



};



class Bus:public Car{

public:
    int no_chairs;

    void setChairs(int c){
        no_chairs=c;
    }
    int getChairs(){

        return no_chairs;
    }



};





class Car{

 public:
    string make;
    string model;
    int milles;
    int no_doors;

    void setMake(string mk){
        make=mk;
    }
    string get_Make(){

        return make;

    }

    void setModel(string m){
        model=m;
    }
    string get_Model(){

        return model;

    }

    void setMilles(int mi){
        milles=mi;
    }
    int getMilles(){
        return milles;
    }

    void setDoors(int d){
        no_doors=d;
    }
    int get_doors(){
        return no_doors;
    }

    void CarDetails(){
        cout<<"The Car made by:"<<make<<endl;
        cout<<"The Car no of doors :"<<no_doors<<endl;
        cout<<"Milles :"<<milles<<endl;
        cout<<"The Car Model:"<<model<<endl;
    }


};



int main()
{
    Car bmw;
    bmw.setDoors(4);
    bmw.setMake("BMW");
    bmw.setModel("X6");
    bmw.setMilles(2000);

    bmw.CarDetails();


    Bus mercedis;

    Van mazda;



    MicroBus suzuki;
    suzuki;






}
