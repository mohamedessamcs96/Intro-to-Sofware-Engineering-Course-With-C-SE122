#include<iostream>


using namespace std;


int main(){

   float height,weight,bmi;
   cout<<"Enter your Height:";
   cin>>height;
   cout<<"Enter your Weight:";
   cin>>weight;

  if(height>2){
      height=height/100;
  }
  

   bmi=weight/(height*height);
   cout<<"Your BMI is:"<<bmi<<endl;
   if(bmi<18.5){
       cout<<"Underweight"<<endl;
   }
   else if(bmi>18.5 && bmi<=24.5){
       cout<<"Normal"<<endl;
   }
   else{

   }




    return 0;
}