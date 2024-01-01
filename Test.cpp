#include<iostream>
using namespace std;
int main(){
    int a = 20;
    do{
        cout<<"Hi"<< endl;
        a++;
    }
    while(a<=20);{

        if(a==15){
            cout<<"The Loop Gets Executed"<< endl;
        
        }
        else{
            cout<<"The Loop Does Not Executeed"<< endl;
        }
    }
    return 0;
}