#include<iostream>
using namespace std;
int main(){
    int x = 100;
    int y = 200;
    int *pointer= &x;
    int *pointer1=&y;
    cout<<"Value of x is : " << pointer << endl;
    cout<<"The Value of Y is:"<< pointer1 << endl;
    return 0;
}