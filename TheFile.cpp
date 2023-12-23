#include<iostream>
using namespace std;
void print(){
    cout<<"Hello World"<< endl;
    cout<<"Shri Ram"<< endl;
    cout<<"Shri Krishna "<< endl;

}
int main(){
    int x = 10;
    int y = 100;
    int res = x*y+100;
    cout<<"The Result for above Operation Is :"<<res<< endl;
    //calling the above function
    print();
    return res;
}