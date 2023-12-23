#include<iostream>
using namespace std;

int oddEven(){
    int odd;
     int even;
    for(int i=1;i<=20;i++){
        if(i%2==0){
            i+=even;
            cout<<"The Sum Of Even Numbers In This Range Was:"<<even<< endl;
        }
        else{
            i+=odd;
            cout<<"The Sum Of Odd Numbers In The Range Was :"<<odd<< endl;
        }
    }
    return even;
    return odd;

}
int main(){
    cout<<"The Above Makes Odd And Even In The Given Range :"<< endl;
    oddEven();
    return 0;
}