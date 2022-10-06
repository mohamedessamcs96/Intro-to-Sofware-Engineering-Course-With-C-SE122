#include<iostream>


using namespace std;





class AccountSystem{

public:
    string name;
    int balance;
    string nationality;

AccountSystem(string n,int b,string na){
    name=n;
    balance=b;
    nationality=na;
}


void checkBalance(){
    cout<<"Your balance is :"<<balance<<endl;    
}

void withdraw(int money){

    balance=balance-money;
}


void deposite(int money){
    balance=balance+money;
}

};

int main(){

   

AccountSystem a1=AccountSystem("MohamedEssam",5000,"Egyptian");
a1.checkBalance();
a1.withdraw(100);
a1.deposite(1000);
a1.checkBalance();
    


    return 0;
}