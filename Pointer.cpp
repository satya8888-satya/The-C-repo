#include<iostream>
using namespace std;
class Pointer{
    public:
    int x;
    int y;
    public:
    Pointer(int x,int y){
        this->x=x;
        this->y=y;
       
    }
    public:
    int add(int x ,int y){
        int z = x+y;
        cout<<"The Additon Of Two Numbers Are:"<< z<< endl;
    }


};


int main(){
    Pointer p = Pointer(20,40);

    p.add(30,40);

    return 0;
}