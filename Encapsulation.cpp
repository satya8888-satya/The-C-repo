#include <iostream>
using namespace std;
class Student{
    private:
    int  rollno;
    string name;
    string qualification;
    string grade;
    public:
    void setrollno(int rollno){
        rollno = rollno;
    }
    int getrollno(){
        return rollno;

    }
    void setname(string name){
        name= name;
    }
    string getname(){
        return name;

    }
    void setqualification(string qualification){
        qualification=qualification;

    }
    string getqualification() {
        return  qualification;
    }
    void setgrade(string grade){
        grade = grade;

    }
    string getgrade(){
        return grade;
    }
    void intro(){
        cout << "Roll No :"<<getrollno()<<endl;
        cout << "Name :"<<getname()<<endl;
        cout << "Qualification :"<<getqualification()<<endl;
        cout << "Grade :"<<getgrade()<<endl;
    }
    public:
    Student(int rollno,string name,string qualification,string grade){
       this-> rollno=rollno;
        this->name= name;
       this-> qualification= qualification;
      this->  grade= grade;
    }
    
    };
    



int main(){
    //creating object of class employee
    Student s1 = Student(1111,"Satya","Bachelors","A+ Grade");
    Student s2 = Student(2222,"Krishna","Bachelors","A+ Grade");
    s1.intro();
    s2.intro();
    return 0;
}
