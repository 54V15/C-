#include <iostream>
#include <string> 
using namespace std;

int main(){
    cout << "Hello, there! Whats's your name? ";
    string name;
    getline(cin, name);
    if(name == "David"){
        cout << "Hey! That's My Name!" << endl;
    }else{
        cout << "Hello, " << name << "!" << endl;
    }
    return 0;
    cout << "Hello, " << name << "!" << endl; 
}