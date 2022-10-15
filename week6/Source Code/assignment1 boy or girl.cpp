#include<iostream>


using namespace std;


int main(){

    string name;
    cout<<"Enter the user name:"<<endl;
    cin>>name;
    int NameCount=name.length();
    cout<<"The number of character in the name is:"<<NameCount<<endl;

    int DistinctCharacters=0;
    int unDistinctCharacters=0;

    for(int i=0;i<NameCount;i++){
        for(int j=i+1;j<NameCount;j++){
            // Aya
            // Aya
            if(name[i]==name[j]){
                unDistinctCharacters++;
            }
        }


    }

    DistinctCharacters=NameCount-unDistinctCharacters;
    cout<<"The Distinct  character in the name is:"<<DistinctCharacters<<endl;


    if(NameCount%2==0){
        cout<<"She is a female"<<endl;
    }
    else{
        cout<<"He is a male"<<endl;
    }


    return 0;
}