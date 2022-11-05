#include<iostream>
#include<algorithm>
#include<list>


using namespace std;




int main(){

    list<int>li;
    li.push_front(30);
    li.push_front(20);
    li.push_back(5);

    li.pop_front();
    li.pop_back();
    
    li.push_front(80);
    li.push_front(70);
    li.push_front(70);
    li.push_front(70);
    li.push_front(50);
    li.push_front(50);
    li.push_front(50);
    li.push_front(10);
    li.push_front(10);
    li.push_front(10);
    li.push_front(10);
    

    auto i=li.begin();
    advance(i,3);
    cout<<"The element in index 3:"<<*i<<endl;

    int value3=*next(li.begin(),3);
    cout<<"The element in index 3:"<<value3<<endl;

    //li.erase(i);
    li.insert(i,99);
    li.remove(10);
    li.unique();
    cout<<"The size of our linked list:"<<li.size()<<endl;
    for(auto l:li){
        cout<<l<<",";
    }
     cout<<endl;
    li.reverse();

    for(auto l:li){
        cout<<l<<",";
    }
     cout<<endl;

    return 0;
}