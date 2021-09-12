// Set input
#include<iostream>
#include<string>
using namespace std;

class student{
    public :
    char gender;
    int age;
    string name;
};

int main()
{
    student one;
    one.name = "yash";
    one.age = 10;
    one.gender = 'M';

    student *p;
    p = &one;

    cout << "\t Details of the student:" <<endl;
    cout << "Name:" << p->name <<endl;
    cout << "Age:" << p->age <<endl;
    cout << "Gender:" << p->gender <<endl;
    return 0;
}