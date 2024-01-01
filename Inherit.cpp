#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int age;
    public:
    void setrollno(int rollno){
        this->rollno = rollno;
    }
    int getrollno(){
        return rollno;
    }
    void setname(string name){
        this->name = name;
    }
    string getname(){
        return name;
    }
    void setage(int age){
        this->age= age;
    }
    int getage(){
        return age; 
    }
    public:
    void display(){
        cout<<"RollNo:"<<getrollno()<< endl;
        cout<<"Name:"<<getname()<< endl;
        cout<<"Age:"<<getage()<<endl;

    }
    public: 
    Student(int Rollno,string Name,int Age){
        Rollno= rollno;
        Name = name;
        Age = age;
    }

};
class Devloper:Student{
    string favProgramming_language;
    public:
    Devloper(int Rollno,string Name,int Age ,string favProgramming_language)
    :Student(Rollno,Name,Age) // calling the base class constructor
    {
        this->favProgramming_language = favProgramming_language;
    

    }

    


};
int main(){

    Devloper d1(2222,"John",23,"C++");
    Devloper d2(3333,"Krishna",45,"Java");
    return 0;
   
    

    
}