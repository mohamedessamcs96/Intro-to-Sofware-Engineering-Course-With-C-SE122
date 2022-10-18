#include<iostream>



using namespace std;



int main(){

    short payment=200;
    short totalprice=48;
    short remain=payment-totalprice;

    short EGB100=remain/100;
    remain=remain%100;
    cout<<"You should take "<<EGB100<<" 100EGB"<<endl;

    short EGB50=remain/50;
    remain=remain%50;
    cout<<"You should take "<<EGB50<<" 50EGB"<<endl;

    short EGB20=remain/20;
    remain=remain%20;
    cout<<"You should take "<<EGB20<<" 20EGB"<<endl;

    short EGB10=remain/10;
    remain=remain%10;
    cout<<"You should take "<<EGB10<<" 10EGB"<<endl;


    short EGB5=remain/5;
    remain=remain%5;
    cout<<"You should take "<<EGB5<<" 5EGB"<<endl;
    cout<<"And remain"<<remain<<" EGB"<<endl;   


    return 0;
}