#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;




int main(){

    vector<int>musicAlbum;
    cout<<"Size now is:"<<musicAlbum.size()<<endl;
    for(int i=0;i<5;i++){
        musicAlbum.push_back(i);
    }
    cout<<"Size now is:"<<musicAlbum.size()<<endl;

/*
    for(int i=0;i<5;i++){
       cout<<musicAlbum[i];
    }
*/    
    
    cout<<"Capacity now is:"<<musicAlbum.capacity()<<endl;
    musicAlbum.push_back(25);
    musicAlbum.push_back(10);
    musicAlbum.push_back(22);
    cout<<"Capacity now is:"<<musicAlbum.capacity()<<endl;


    musicAlbum.push_back(23);
    cout<<"Capacity now is:"<<musicAlbum.capacity()<<endl;

    for(auto i=musicAlbum.begin();i!=musicAlbum.end();i++){
        cout<<*i<<endl;
    }

    sort(musicAlbum.begin(),musicAlbum.end());
   
    for(auto i=musicAlbum.begin();i!=musicAlbum.end();i++){
        cout<<*i<<endl;
    }
    cout<<musicAlbum.at(8)<<endl;
    cout<<"It print the last elment:"<<musicAlbum.back()<<endl;
    cout<<"It print the first elment:"<<musicAlbum.front()<<endl;
    return 0;
}