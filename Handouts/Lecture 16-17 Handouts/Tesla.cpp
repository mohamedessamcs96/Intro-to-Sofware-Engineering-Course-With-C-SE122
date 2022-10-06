#include <iostream>

using namespace std;

class Vechile{

private:
    int battery=0;

public:
    void setBattery(int b){
        if(battery+b<100){
        battery=battery+b;
        }
        else{
            battery=100;
        }
    }

    int getbattery(){
        return battery;
    }
};
int main()
{
    Vechile tesla;
    tesla.setBattery(10);
    tesla.setBattery(20);
    tesla.setBattery(40);
    tesla.setBattery(20);
    tesla.setBattery(20);
    tesla.setBattery(30);

    cout<<"The battery status is :"<<tesla.getbattery()<<"%"<<endl;
}
