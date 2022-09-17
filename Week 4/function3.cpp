#include<iostream>
#include<cmath>

using namespace std;



int calculateAge(int birthdate);
void depositBalance(int money);

int balance=2000;

int main(){

    depositBalance(200);

    cout<<balance<<endl;
    
    int numberpower=pow(2,2);
    cout<<numberpower<<endl;

    cout<<calculateAge(1996)<<endl;    

    return 0;
}

int calculateAge(int birthdate){
    return 2022-birthdate;
}


void depositBalance(int money){

    balance=balance+money;

}