#include<iostream>
#include<map>

using namespace std;



int main(){


    map<string,int>fruits;
    fruits.insert(pair<string,int>("Bannana",5));
    fruits.insert(pair<string,int>("apples",2));
    fruits.insert(pair<string,int>("Orange",3));


    cout<<"The fruits apples available weights:"<<fruits["apples"]<<endl;
    cout<<"\t fruits size"<<endl;
    for(auto itr=fruits.begin();itr!=fruits.end();itr++){
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
    }

    return 0;
}