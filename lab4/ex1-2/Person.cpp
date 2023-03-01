#include "Person.h"
#include <iostream>
using namespace std;

// ***************************-Person-***************************
Person::Person(){
    name = "";
    age = 0;
    height = 0;
}
Person::Person(string n, int a, int h){
    name = n;
    age = a;
    height = h;
}
Person::~Person(){

}
void Person::showPersonInfo(){
    cout<<"Person name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"height:"<<height<<endl;
}

// ***************************-Student-***************************

Student::Student():Person(){
    id = 0;
    grade = 0;
}

Student::Student(string name, int age, int height, int i,int g):Person(name, age, height){
    id = i;
    grade = g;
}

Student::~Student(){

}
void Student::showStudenInfo(){
    showPersonInfo();
    cout<<"id:"<<id<<endl;
    cout<<"grade:"<<grade<<endl;
}

// ***************************-Teacher-***************************

Teacher::Teacher():Person(){
    subject = "";
}

Teacher::Teacher(string n, int a, int h, string s):Person(n, a, h){
    subject = s;
}

Teacher::~Teacher(){

}

void Teacher::setSubject(string newSubject){
    subject = newSubject;
}

string Teacher::getSubject(){
    return subject;
}

void Teacher::showTeacherInfo(){
    showPersonInfo();
    cout << "subject:" << subject << endl;
}