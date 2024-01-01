#include<iostream>
using namespace std;
// Defining A Method 
int shivaji(){
    int x = 100;
    int y = 10;
    int z = x/y;
    cout<<z<< endl;
    return z;
}
void print(){
    cout << "Hello World" << endl;
}
int main(){
    shivaji();
    print();
    return 0;
}