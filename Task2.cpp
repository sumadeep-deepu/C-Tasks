#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    string rollNumber;

    public:
    Student(const string&name , const string&rollNumber ){
        this->name=name;
        this->rollNumber=rollNumber;
    }
    Student(const Student&copy){
        name=copy.name;
        rollNumber=copy.rollNumber;
    }
    void display() const{
        cout<<"Name : "<<name<<", RollNumber : "<<rollNumber<<endl;
    }
};

int main(){
    Student s1("sumadeep","194c1a05h3");
    Student s2=s1;
    cout<<"students Information : "<<endl;
    s1.display();
    s2.display();
}