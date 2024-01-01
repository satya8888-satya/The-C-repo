#include<iostream>

using namespace std;

void constants(){
  const int x = 20;
  #define M 100;
  cout<< x<< endl;
  long int y   = 2000008907l;
  cout<< y<< endl;
  

}
void print(){
    const string x = "Satya";
    string y="Krishna";
    y="Ram";
    cout<<y<< endl;
    cout<< x << endl;

}
int main(){
    constants();
    print();
    return 0;
}