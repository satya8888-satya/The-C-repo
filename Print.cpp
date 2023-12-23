#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<"The Even Numbers Are In This Range:"<<i<< endl;
        }
        else{
            cout<<"The Odd Numbers Are In This Range :"<<i<< endl;

        }
    }
    return 0;
}