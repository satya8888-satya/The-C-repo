#include<iostream>
using namespace std;
 double intrest(){
    double Amount;
    cout<<"Enter The Amount That Taken:"<< endl;
    cin>>Amount;
    int time;
    cout<<"Enter The Time Amount :"<< endl;
    cin>>time;
    double rate;
    cout<<"Enter Rate Of Intrest:"<< endl;
    cin>>rate;
    double intrest = Amount*time*rate/100;
    double totalAmount= Amount+intrest;
    cout<<"The Intrest For The Money Taken :"<< intrest<< endl;
    cout<<"The Amount After The Intrest:"<< totalAmount<< endl;
    return totalAmount;

}
int main(){
    intrest();
    return 100;

}