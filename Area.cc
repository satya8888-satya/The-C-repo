#include<iostream>
using namespace std;

int area(){
    int side1;
    cout<<"The Side Of The Square:"<< endl;
    cin>>side1;
    int side2;
    cout<<"The Another Side Of The Sqaure:"<< endl;
    cin>>side2;
    int area= side1*side2;
    cout<<"The Area Of The Square:"<<area<< endl;
    return area;

}
int main(){
    area();
    return 0;
    
}