#include<iostream>


using namespace std;


class TeslaCar{

private:
int BatteryStatus=0;    



public:
    void setBattery(int charge){
        if(BatteryStatus+charge>100){
            BatteryStatus=100;
        }
        else{
            BatteryStatus=charge;
        }
    }

    int getBatteryHealth(){
        int password;
        cout<<"Enter the password:"<<endl;
        cin>>password;
        if(password=123){
            return BatteryStatus;
        }
        else{
            cout<<"Not Allowed"<<endl;
            return 0;
        }
        
    }



TeslaCar(){
    cout<<"Create Constructor"<<endl;
    
}

~TeslaCar(){
    cout<<"Destroy the object with The Destrucotr"<<endl;
}



};



int main(){


    TeslaCar c1;
    c1.setBattery(90);
    cout<<c1.getBatteryHealth()<<endl;




    return 0;
}