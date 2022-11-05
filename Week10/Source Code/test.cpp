#include<iostream>
#include<map>
#include<algorithm>

using namespace std;



int main(){

    map<string,int>studentsmap;

    studentsmap.insert(pair<string, int>("mohamed", 40));
    studentsmap.insert(pair<string, int>("sara", 20));
    studentsmap.insert(pair<string, int>("aya", 10));
    cout<<studentsmap["mohamed"]<<endl;
    
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = studentsmap.begin(); itr != studentsmap.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;


    return 0;
}