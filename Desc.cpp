#include<iostream>
using namespace std;
int oddEven(){
    int x;
    cout<<"Enter a number: "<< endl;
    cin>>x;
    
    if(x%2==0) {
     //checking whether the number is even or not.
    cout<< "The number you entered is Even."<< x <<endl;
    }
    else{
       cout<< "The Number Is odd."<< x << endl;
    }
    return 0;


}
int main(){
    oddEven();
    cout<< "This program will check whether the given number is Odd Or Even."<< endl;
    return 0;

}
