#include<iostream>
using namespace std;
int test(){
    long int  x = 1000000000;
    long int y = ++x;
    cout<<"The Incremented value of The Above Value Is :"<< y << endl;
    return y;
}
int main(){
    test();
    system("pause");
    cout<<"Hello World!"<< endl;
    return 0;
}