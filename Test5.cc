#include<iostream>
#include<cstring>
using namespace std;
void print(){
    string s = "Hello";
    string t = "World";
    string x = "Jai Shree";
    string y = "Ram";
    string z = x.append(y);
    cout<<"The Appended Strings Are:"<<z<< endl;
    cout<<"The Concated Strings Are:"<<s+t<< endl;
    cout<<t[0]<< endl;

}
void m1(){
    string s = "Hello";
    string p = "Hello";
    if(s==p){
        cout<<"The Strings Contains Same Info:"<< endl;

    }
    else{
        cout<<"The Strings Doesnot Contains Same:"<< endl;
    }
}
int main(){
    print();
    m1();
    string a;
    cout<<"Enter A String :";
    cin>>a;
    cout<<"The String Is :"<< a << endl;
    string s = "Hello World !";
    string t("The String In Second Form !");
    cout<<"S:"<< s<< endl;
    cout<<"T:"<< t<< endl;
    // Concatenation of two strings
    cout<<"The Concatated Strings :"<<s+t<< endl;
    return 0;
}