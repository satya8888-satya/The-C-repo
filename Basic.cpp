#include<iostream>
using namespace std;
int main(){
    int x = 100;
    int y = 200;
    if(x<100){
        x+=1;
        cout<<x<< endl;
    }
    else if(y==100){
        y-=1;
        cout << y <<endl;
    }
    else if(x==100){
        cout << "Both are equal" << endl;
    }
    else {
        cout<< "The Above Conditions Are Not Correct"<< endl;

    }
    return 0;
}