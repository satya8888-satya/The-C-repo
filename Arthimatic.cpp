#include<iostream>
 // namespace std;
using namespace std;

int m1(){
    int x = 10;
    int y = 10;
    int z = x/y;
    cout << "The value of z is :"<<z<<endl;
}
int m2(){
    int x = 10;
    int y =30;
    if(x>y){
        cout<<"The Chatrapathi Shivaji"<< endl;
    }
    else{
        cout<<"The Shambaji Maharaj"<< endl;
    }
}
int user(){
    int x;
    cout<<"Enter 1st Number"<< endl;
    cin>>x;
    int y;
    cout<<"Enter 2nd Number"<< endl;
    cin>>y;
    int z = x*y;
   
    cout<<"Multiplication of the numbers are:"<<z<<endl;
    return z;


}
int main(){
    // Calling the function m1()
    m1();
    m2();
    user();
    return 0;

}