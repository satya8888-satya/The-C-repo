#include<iostream>
using namespace std;
int print(){
    char start= 'A';
    char end= 'Z';
    while(start<=end){
        start++;
        cout<<"The Alphabets Are"<<" "<<start<< endl;
    }
}
int main(){
    print();
    return 0;
}