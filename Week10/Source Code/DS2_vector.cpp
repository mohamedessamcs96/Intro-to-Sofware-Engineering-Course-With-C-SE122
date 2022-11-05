#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(){

    vector<int>v1;
    cout<<"Vector size:"<<v1.size()<<endl;
    cout<<"Vector capacity:"<<v1.capacity()<<endl;
    v1.push_back(10);
    v1.push_back(5);
    v1.push_back(2);
    cout<<"Vector size:"<<v1.size()<<endl;
    cout<<"Vector capacity:"<<v1.capacity()<<endl;
    sort(v1.begin(),v1.end());
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<endl;
    }

    cout<<binary_search(v1.begin(),v1.end(),7)<<endl;
    return 0;
}