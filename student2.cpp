#include<iostream>
void test1();
void test2();

using namespace std;

class Student
{  
private: // 私有类型
    string name;
    int age;    
public: // 公有类型
    void study();
    void exam();
    void setName(string name);
    void setAge(int age);
    string getName();
    int getAge();
};
void Student::study() 
{
    cout<<"study"<<endl;
}
void Student::exam() 
{
    cout<<"study"<<endl;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setAge(int age) {
    this->age = age;
}
string Student::getName() {
    return this->name;
}
int Student::getAge() {
    return this->age;
}


int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}

void test1() {
    Student stu;
    stu.setName("徐洁阳");
    stu.setAge(12);
    cout<<stu.getName()<<stu.getAge()<<"岁"<<endl;
    stu.study();
    stu.exam();
}

void test2() {
    Student* stu = new Student;
    stu->setName("徐洁阳");
    stu->setAge(12);
    cout<<stu->getName()<<stu->getAge()<<"岁"<<endl;
    stu->study();
    stu->exam();
    delete stu;
}
