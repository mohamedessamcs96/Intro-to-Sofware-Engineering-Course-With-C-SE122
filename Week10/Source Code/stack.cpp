#include<iostream>
#include<stack>

using namespace std;



int main(){

    stack<string> stackmessages;
    stackmessages.push("Hello,2020");
    stackmessages.push("Hello,2021");
    stackmessages.push("Hello,2022");

    while(!stackmessages.empty()){
        cout<<' '<<stackmessages.top();
        stackmessages.pop();
    }

    return 0;
}