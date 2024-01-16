#include<iostream>
using namespace std;
struct Person
{
    int age = 23;
    string name= "Sai Reddy";
    string address="Bengaluru";
    string organization="NetApp";


   
};
struct Employee{
    int age = 23;
    string name= "om Prakash";
    string address="Hyderabad";
    string organization="Pure Strorage";

};
struct Kalyan{
    int age = 22;
    string name="Kalyan Krishna";
    string address="Guntur";
    string organization="Dell" ;
};
int main(){
    //creating object of the class person
    Person p1;
    Employee e1;
    Kalyan k1;
    cout<<"Name : "<<p1.name <<endl;
    cout<<"Age : "<<p1.age<<endl;
    cout<<"Address: "<<p1.address<<endl;
    cout<<"Organizzation:"<<p1.organization<< endl;
    cout<<"Age:"<<e1.age<< endl;
    cout<<"Name:"<<e1.name<< endl;
    cout<<"Address:"<<e1.address<< endl;
    cout<<"Organization:"<<e1.organization<< endl;
    cout<<"Age:"<<k1.age<< endl;
    cout<<"Name:"<<k1.name<< endl;
    cout<<"Address:"<<k1.address<< endl;
    cout<<"Organization:"<<k1.organization<< endl;


    return 0;

}
