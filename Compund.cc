#include<iostream>
using namespace std;

double area(){
    double length;
    cout<<"Enter The Length Of The Rectangle:"<< endl;
    cin>>length;
    double bredth;
    cout<<"Enter The Bredth Of The Rectangle:"<< endl;
    cin>>bredth;
    double perimeter =1/2*length+bredth;
    cout<<"The Perimeter Of The Given Data:"<< perimeter<< endl;
    return perimeter;

}
int main(){
    area();
    return 0;
    
}