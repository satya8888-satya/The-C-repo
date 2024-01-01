#include<iostream>
using namespace std;
int main(){
    int x[4];
    x[0]=10;
    x[1]=20;
    x[2]=30;
    x[3]=40;
    for(int numbers:x)
   cout<<"The Elements Are "<< numbers << endl;
   cout<<"The Elements Are :"<< x[3] << endl;
   cout<<"The Elements Are :"<< x[2] << endl;
   int y [3]={1,2};
   for(int num1:y){
    cout<<"The Elements Are :"<< num1<< endl;
    cout<<"The Size Of The Array :"<<sizeof(y)<< endl;
   }
   int z [3]={30};
   for(int number:z){
   cout<<"The Elements Are:"<<number<< endl;
   }


}