#include<iostream>



using namespace std;




class ToulipHotel{

public:    

    int roomsNumber;
    bool WeedingHall;
    double rate;
    bool reserve;

    ToulipHotel(int rn,bool w,double ra){
        roomsNumber=rn;
        WeedingHall=w;
        rate=ra;

        if(roomsNumber>0){
            reserve=true;
        }
        else{
            reserve=false;
        }

    }
    ~ToulipHotel(){
        cout<<"The Deconstructor is Executed"<<endl;
    }

    void getrate(){
        double newrate;
        cout<<"Enter the rate:"<<endl;
        cin>>newrate;
        rate=(newrate+rate)/2;
    }

    void Entered(){
        roomsNumber--;
        if(roomsNumber>0){
            reserve=true;
        }
        else{
            reserve=false;
        }
    }

    void Leave(){
        roomsNumber++;

        if(roomsNumber>0){
            reserve=true;
        }
        else{
            reserve=false;
        }
    }
    void hotelOverview(){
        cout<<"The avalaible rooms,"<<roomsNumber<<endl;
        cout<<"The avalaible rooms,"<<reserve<<endl;
        cout<<"The hotel rates,"<<rate<<endl;
        cout<<"The weeding halls ,"<<WeedingHall<<endl;
    }



};

int main(){

    ToulipHotel week1=ToulipHotel(5,true,3.2);

    char status;
    cout<<"Enter the status:"<<endl;
    cout<<"If someone Entered press e"<<endl;
    cout<<"If someone Leaved press l"<<endl;
   
    while(true){
        cin>>status;
        if(status=='e'){
            week1.Entered();
            }
        else if(status=='l'){
            week1.Leave();
            week1.getrate();
            }
        
      
        week1.hotelOverview();
    }

    
    

    return 0;
}