#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    string name;
    string originate;
    public:
     Animal(int age,string name,string originate){
        this->age=age;
        this->name=name;
        this->originate=originate;

    }
   
    

};
class Dog : public Animal {
    string dogname;
    public:
    Dog(int age,string name,string originate,string dogname) 
    :Animal(age,name,originate)
    {
        this->dogname=dogname;
    }
    public:
     void print(){
        cout<<"Age:"<<" "<<age<<" "<<"Name:"<<" "<<name<<" "<<"Country:"<<" "<<originate<< " "<<"DogName:"<<" "<< dogname<< endl;

    }
};
class Master:public Animal{
    string name;
    string city;
    public:
    Master(int age,string name,string originate,string city)
    :Animal(age,name,originate),name(city){
        this->name= name;
        this->city = city;
    }
    

    };



int main(){
    //creating object of class animal
   Master m = Master();
    d.print();
    d1.print();
    return 0;
}