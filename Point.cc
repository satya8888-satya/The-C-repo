#include<iostream>
using namespace std;
int main(){
    int x[]={1,2,35,7,8,1,2,3,88};
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<9;j++){
            if(x[i]==x[j]){
                cout<<"Duplicate element found: "<<x[i]<< endl;
            }
            else{
                cout<<"No duplicate elements."<<endl;
            }
        }
    }
    return 0;

}