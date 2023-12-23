#include<iostream>
using namespace std;
void print(){
  cout<<"Lord Ganesha"<< endl;
  cout<<"Lord Rama"<< endl;
  
}

int add(){
  int x = 10;
  int y = 20;
  int z = x+y;
  return z ;
  cout<<z<< endl;
}
double multiply(){
  double x = 100.00;
  double y = 200.50;
  double z = x*y;
  cout<<z<< endl;
}


bool decision(){
  bool x = true;
  bool y = false;
  if(x==true){
    cout<<"True Statement"<< endl;
  }
  else{
    cout<<"false Statement"<< endl;
  }
}

int main() 
{
  print();
  add();
  multiply();
  decision();
    cout << "Hello, World!";
    return 0;
}