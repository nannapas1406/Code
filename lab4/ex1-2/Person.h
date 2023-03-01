#ifndef PERSON_H
#define PERSON_H

#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;
        int height;
        Person();
        Person(string n, int a, int h);
        ~Person();
        void showPersonInfo();
};

class Student: public Person{
    public:
        int id;
        int grade;
        Student();
        Student(string name, int height, int age, int i,int g);
        ~Student();
        void showStudenInfo();
};

class Teacher: public Person{
    private:
        string subject;
    public:
        Teacher();
        Teacher(string n, int h, int a, string subject);
        ~Teacher();
        void setSubject(string subject);
        string getSubject();
        void showTeacherInfo();
};

#endif