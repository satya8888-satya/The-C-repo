#include<iostream>
using namespace std;
void print(){
    char s = 'S';
    char *pointer=&s;
    cout<<"The Pointer Address is :"<<pointer<< endl;
    string str = "Hello World";
    string *x=&str;
    cout<<"The Pointer Of String Is :"<<x<< endl;
    cout<<"The Pointer Derefrencing:"<<*x<<endl;
    long long int l = 10000408699;
    long long int* z = &l;
    cout<<"The Pointer Varible of Long is :"<<z<< endl;
    int value = 100;
    int &r=value;
    cout<<"The Value That Is:"<< &r<<" "<<&value<< endl;
    

}
int main(){
    print();
    return 0;

}