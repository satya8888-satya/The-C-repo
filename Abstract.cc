#include<iostream>
using namespace std;

class EmployeeAbstract{
    virtual void AskPromotion()=0;
    virtual void Print()=0;
};

class Manager: public EmployeeAbstract{
    private:
    int empno;
    string name;
    int age;
    string department;
    public:
    void setempno(int empno){
        empno = empno;
    }
    int getempno(){
        return empno;

    }
    void setname(string name){
        name= name;
    }
    string getname(){
        return name;

    }
    void setage(){
        age = age;

    }
    int getage() {
     return age;
}
void setdepartment(string dept) {
    department = dept;
}
string getdepartment() {
    return department;
}
public:
Manager(int empno,string name,int age,string department){
    this->empno = empno;
    this->name = name;
    this->age = age;
    this->department = department;
}
void AskPromotion(){
   cout<<"Currently On Hold Wait For Annual Results"<< endl;

}
void print(){
    cout<<"The Example For The Abstraction In:"<< endl;
}
 void intro(){
        cout << "Emp No :"<<getempno()<<endl;
        cout << "Name :"<<getname()<<endl;
        cout << "Qualification :"<<getage()<<endl;
        cout << "Grade :"<<getdepartment()<<endl;
    }
};
int main(){
    Manager m1 = Manager(2222,"Satya",23,"Development");
    Manager m2 = Manager(3333,"SaiRam",34,"Development");
    Manager m3 = Manager(4444,"Krishna",33,"Testing");
    Manager m4 = Manager(5555,"Kishore",35,"Devops");
    Manager m5 = Manager(6666,"RamKrishna",27,"Admin");
    Manager m6 = Manager(7777,"Satyam",24,"UI/UX");
    m1.AskPromotion();
    m2.AskPromotion();
    m3.AskPromotion();
    m4.AskPromotion();
    m5.AskPromotion();
    m1.intro();
    m2.intro();
    m3.intro();
    m4.intro();
    m5.intro();
    m6.intro();
    system("pause");
    cout<<"Hello"<< endl;

}


