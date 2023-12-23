#include<iostream>
using namespace std;
int satya(){
    int a = 10;
    int b = a++;
    cout<<b<< endl;
    return b;
}

int main(){
    satya();
    cout<<"The Hello World"<< endl;
    return 0;
}


