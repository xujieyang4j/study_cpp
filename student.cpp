#include<iostream>
void test1();
void test2();

using namespace std;

class Student
{  
public: // 公有类型
    void study();
    void exam();
    string _name;
    int _age;
};
void Student::study() 
{
    cout<<"study"<<endl;
}
void Student::exam() {
    cout<<"exam"<<endl;
}

int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}

void test1() {
    Student stu;
    stu._name = "徐洁阳";
    stu._age = 12;
    cout<<stu._name<<stu._age<<"岁"<<endl;
    stu.study();
    stu.exam();
}

void test2() {
    Student* stu = new Student;
    stu->_name = "徐洁阳";
    stu->_age = 12;
    cout<<stu->_name<<stu->_age<<"岁"<<endl;
    stu->study();
    stu->exam();
    delete stu;
}
