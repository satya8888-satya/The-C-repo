#include<iostream>

using namespace std;

class satya{
    public:
    int multiply(int x ,int y ){
    
        int z =x*y;
        cout<<"The Product Of The Above Numbers Are"<< z;
        return z;
    
    }
};
int main(){
satya s ;
s.multiply(200,500);
}