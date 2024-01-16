#include<iostream>
using namespace std;
int main(){
    int x[] = {10,20,30,40,50,60,70,80};
    int size = sizeof(x);
    for(int i=0;i<=size;i++){
        cout<<"The Elements Are The :"<< x[i]<<" "<<size<< endl;

    }
}