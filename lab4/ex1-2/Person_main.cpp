#include "Person.h"
#include<iostream>
using namespace std;

int main(){
    Person *me = new Person("Nannapas", 18, 158);
    me->showPersonInfo();
    // me->age = 20;
    me->showPersonInfo();
    Student *bff = new Student("Jutatip", 19, 162, 0034, 70);
    bff->showStudenInfo();
    // bff->age = 20;
    // bff->->showPersonInfo();

    Teacher *professor = new Teacher("Bee", 30, 175, "Programming");
    professor->showTeacherInfo();
    professor->setSubject("Chinese");
    // cout << professor->getSubject();
    professor->showTeacherInfo();

    return 0;
}