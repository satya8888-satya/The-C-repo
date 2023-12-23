#include<iostream>
using namespace std;
string decision(){
    int x = 100;
    int y = 200;
    string res = x>y?"The Conditon is True ":"The Conditon is False";
    cout<<res<< endl;
}
void print(){
    char start= 'A';
    char end = 'Z';
    for(char i = 'A';i<='Z';i++){
        cout<<i<< endl;
    } 
}
int main(){
    decision();
    print();
    return 0;
}