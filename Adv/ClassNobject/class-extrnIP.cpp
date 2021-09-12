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
    cout << "Enter name:"<<endl;
    cin >> one.name; // = "yash";
    cout << "Enter age:"<<endl;
    cin >> one.age; // = 10;
    cout << "Enter gender:"<<endl;
    cin >> one.gender ; // = 'M';

    student *p;
    p = &one;

    cout << "\t Details of the student:" <<endl;
    cout << "Name:" << p->name <<endl;
    cout << "Age:" << p->age <<endl;
    cout << "Gender:" << p->gender <<endl;
    return 0;
}