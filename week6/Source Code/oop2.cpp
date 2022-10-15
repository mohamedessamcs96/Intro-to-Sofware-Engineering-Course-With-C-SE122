#include<iostream>



using namespace std;




class Vechile{
private:
    string make;
    int speed;
    //string color[5]={"red","green","blue","black","white"};


public:
    void setmake(string m){
        make=m;
    }
    string getmake(){
        return make;
    }


    void setspeed(int s){
        speed=s;
    }
    int getspeed(){
        return speed;
    }

    void carDescription(){
        cout<<"Car made by "<<make<<endl;
        cout<<"Car speed limit :"<<speed<<endl;
      
    }

};


class Bus: public Vechile{

private:
    int chairs;

public:
    void setchairs(int c){
        chairs=c;
    }
    int getchairs(){
        return chairs;
    }


};

class Van:public Vechile{
private:
    int size;

public:
    void setsize(int c){
        size=c;
    }
    int getsize(){
        return size;
    }


};



class MicroBus: public Bus{

};


int main(){


    Vechile v1;
    v1.setmake("BMW");
    v1.setspeed(300);
    v1.carDescription();
    

    Vechile v2;
    v2.setmake("MErcedes");
    v2.setspeed(200);
    v2.carDescription();

    Van v3;
    v3.setmake("mazda");
    v3.setspeed(200);
    v3.carDescription();
    v3.setsize(500);
    cout<<v3.getsize();
}