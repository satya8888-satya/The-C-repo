#include<iostream>
using namespace std;
class Employee{
   public:
    string Name;
    string Company;
    int age;
    double salary;

    void intro(){
        cout << "Name : "<<  Name << endl;
        cout << "Company : "<< Company << endl;
        cout << "Age : "<< age << endl;
        cout << "salary :"<< salary<< endl;
    }
    public:
    Employee(string Name,string Company,int age,double salary){
        this->Name=Name;
        this->Company = Company;
        this->age  = age;
        this->salary = salary;
    }


};
int main(){
    Employee employee1=Employee("Satya","HSBC",23,50000.90);
    employee1.intro();
    Employee employee2= Employee("Kalyan","Infosys",22,45000.00);
    Employee employee3 = Employee("Sai Reddy","Siemens",23,50000.00);
    Employee employee4 = Employee("Krishna","Amazon",25,100000.90);
   
    //Calling the function using dot operator
    employee2.intro();
    employee3.intro();
    if (employee1.age < employee2.age) {
        cout<<"Employee is Eligible for the DA"<< endl;
    }
    else{
        cout<<"Employee is not Elgible For the DA"<< endl;
    }
    employee4.intro();


}