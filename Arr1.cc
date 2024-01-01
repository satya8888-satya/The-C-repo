#include<iostream>
using namespace std;
int main(){
    int x []={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<=9;i++){
        if(x[i]%2==0){
            cout<<"The Even Number Are:"<<x[i]<< endl;

        }
        else{
            cout<<"The Odd Numbers Are:"<< x[i]<< endl;
        }
    }
    return 0;
}