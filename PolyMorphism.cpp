#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    string company;
    Employee(int id,string name,string company){
        this->id=id;
        this->name= name;
        this->company=company;
    }   
};
class Developer:public Employee{
    public:
    float salary;
    string language;
    Developer(int id,string name,string company,float salary,string language)
    :Employee(id,name,company) {
        this ->salary=salary;
        this ->language= language;
    }
void display(){
    cout<<"The Developer Will Be Coding In OOPS Based Language As Per Tech Stack:"<<" "<<name<< language<< endl;

}


};
class Teacher :public Employee{
    public:
    string subject;
    string action;
    public:
    Teacher(int id,string name,string company,string subject,string action)
    :Employee(id,name,company)  {
        this->subject=subject;
        this->action=action;
    }
    void display(){
        cout<< "The Teacher Will be Preparing for His Lecture :"<<name<<" "<< subject<< endl;

    }



};
int main(){
    Developer d1=Developer(1,"John", "Google",5000.78,"C++");
    Developer d2 = Developer(2,"Satya","Intuit",8000.00,"Java");
    Teacher t1 = Teacher(111,"Reddy","RVR Engg.College","Mechanics","Playing");
    d1.display();
    d2.display();
    t1.display();
}