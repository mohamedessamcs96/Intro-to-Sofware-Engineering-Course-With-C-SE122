#include <iostream>

using namespace std;

class Person{

private:
   string username;
   int age;
   string gender;
   string job;
   float height;


public:
    void setHeight(float h){
        if(h<2){
            height=h*100;
        }
        else{
            height=h;
        }
    }
    float getHeight(){
        return height;
    }
    void setUsername(string u){
        username=u;
    }
    string getUsername(){
        return username;
    }

    void setAge(int a){
        if(a>0){
            age=a;
        }
        else{
            age=0;
        }
    }
    int getAge(){
        return age;
    }

    void setGender(string g){
        gender=g;
    }

/*
Person(string u,int a,string g,string j){
    username=u;
    age=a;
    gender=g;
    job=j;
}
*/

  void IntroduceMySelf(){

        cout<<"Hello there!"<<endl;
        cout<<"My name is:"<<username<<endl;
        cout<<"My age is:"<<age<<endl;
        cout<<"My Gender is:"<<gender<<endl;
        cout<<"My job is:"<<job<<endl;


  }


};


int main()
{
    Person p1;

    p1.setHeight(1.77);
    cout<<p1.getHeight()<<endl;



    p1.setUsername("Mohamed Esssam");
    cout<<p1.getUsername()<<endl;
    p1.setAge(26);
    cout<<p1.getAge()<<endl;
    p1.setGender("Male");


    //=Person("Mohamed Essam",26,"Male","TA");
    /*
    p1.username="Mohamed Essam";
    p1.age=26;
    p1.gender="Male";
    p1.job="Teaching Assistant";
*/
    p1.IntroduceMySelf();

}
