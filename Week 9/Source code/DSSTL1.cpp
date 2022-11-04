#include<iostream>
#include<array>
#include<algorithm>
using namespace std;



int main(){

    array<string,5>names={"Mohamed","Ali","Ahmed","Belal","Sara"};
    cout<<"Before sorting..."<<endl;
    for(int i=0;i<5;i++){
        cout<<names[i]<<endl;
    }
    cout<<"After Sorting....."<<endl;

    sort(names.begin(),names.end());

    for(int i=0;i<5;i++){
        cout<<names[i]<<endl;
    }

    cout<<binary_search(names.begin(),names.end(),"Sara");

    return 0;
}