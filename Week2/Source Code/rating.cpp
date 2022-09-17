
/*  
    Mohamed Essam
    mhmd96.essam@gmail.com
    Check the rate and print the equivalent....
*/



#include<iostream>


using namespace std;


int main(){


    int rate;
    cout<<"Enter the degree of sattisfaying 1,2,3,4:"<<endl;
    cin>>rate;
    
    switch(rate){
        case 1:cout<<"Bad"<<endl;
        break;
        case 2:cout<<"Good"<<endl;
        break;
        case 3:cout<<"Very Good"<<endl;
        break;
        case 4:cout<<"Excelent"<<endl;
        break;
        default:cout<<"wrong number:"<<endl;
        break;
    }


    
    //Here I will check the rate value


   /* 
    if(rate==4){
        cout<<"Exclent"<<endl;
    }
    else if(rate==3){
        cout<<"Very Good"<<endl;
    }
    else if(rate==2){
        cout<<"Good"<<endl;
    }
    else if(rate==1){
        cout<<"Bad"<<endl;
    }
    else{
        cout<<"Wrong answer!"<<endl;
    }

*/
    return 0;
}