#include<iostream>
using namespace std;
void basic(){
cout<<"The Basic Code That Returns Nothing:"<<endl;
cout<<"Lord Ganesha:"<<  endl;
string s = "Satya";
string* add=&s;
cout<<"The Pointer Is :"<<add<< endl;
cout<<"The String Is :"<<s<<  endl;
int x = 100;
int *pointer=&x;
cout<<"The Pointer Is:"<<pointer<<  endl;

}
int main(){
    basic();
    return 0;
}