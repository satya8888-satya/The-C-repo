#include<iostream>
using namespace std;
int main(){
    int x[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            cout<<i<< " "<<j<< "The Elements Are Of Array 2"<< x[i][j]<<endl;
        }
    }
    return 0;
}