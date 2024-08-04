#include<iostream>
using namespace std;
// the point of execution starts from here That we can 
int main(){
    int x[]={1,2,35,7,8,1,2,3,88,88,1,2,35};
    for(int i=0;i<=12;i++){
        for(int j=i+1;j<12;j++){
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