#include<iostream>
using namespace std;
// finding The Prime Numbers As The Number given By Input 
int prime(){
    int x;
    int factor;
    cout<<"Enter a Number:";
    cin>>x;
    for(int i=2;i<=x;i++){
        if(x%i==0){
            factor++;
    }
    }
    if(factor>1){
        cout<<"The Given Number Is Not A Prime Number:"<< endl;
    }
    else{
        cout<<"The Given Number Is A Prime Number :"<< endl;
}
return 0; // Return Statement
}
int main(){
    //Calling The Prime Number Validation Function  
    prime();
    cout<<"The Prime Number Calculation Done :"<< endl;
    return 0;
}
