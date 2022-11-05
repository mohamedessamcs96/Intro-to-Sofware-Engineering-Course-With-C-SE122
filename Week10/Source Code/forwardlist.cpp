#include<iostream>
#include<forward_list>
#include<algorithm>


using namespace std;



int main(){


    forward_list<int>fl;
    fl.push_front(2);
    fl.push_front(3);
    fl.push_front(4);
    fl.push_front(1);
    int head=fl.front();
    int value=*next(fl.begin(),3); //I don't have random acess...
    cout<<"Head:"<<head<<endl;
    cout<<"The third index:"<<value<<endl;

    fl.pop_front();

    auto i=fl.begin();
    advance(i,1);
    cout<<"index 1:"<<*i<<endl;
  
 


    fl.sort();

    for(auto n:fl){
        cout<<n<<endl;
    }





    return 0;
}