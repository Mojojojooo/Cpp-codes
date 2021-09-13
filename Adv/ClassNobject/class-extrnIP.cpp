// Set input
#include<iostream>
#include<string>
using namespace std;

class student{
    public :
    char gender;
    int age;
    string name;

    student inputfunction(student *two);
};

student student::inputfunction(student *two)
{
    cout << "Enter name:"<<endl;
    cin >> two->name; // = "yash";
    cout << "Enter age:"<<endl;
    cin >> two->age; // = 10;
    cout << "Enter gender:"<<endl;
    cin >> two->gender ; // = 'M';

    return *two;
};

int main()
{
    student one,two;
    student *p;
    // p = &one;
    two = one.inputfunction(&two);
    p= &two;
    cout << "\t Details of the student:" <<endl;
    cout << "Name:" << p->name <<endl;
    cout << "Age:" << p->age <<endl;
    cout << "Gender:" << p->gender <<endl;
    return 0;
}