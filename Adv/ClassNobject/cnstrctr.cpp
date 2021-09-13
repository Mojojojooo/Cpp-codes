#include<iostream>
#include<string>
using namespace std;

class student{
    public :
    student (){
        cout << "Constructor was called" <<endl;
    };
    ~student (){
        cout << "Destructor was called" <<endl;
    };
};

int main()
{
    student one;
    // one.name = "yash";
    // one.age = 10;
    // one.gender = 'M';

    // student *p;
    // p = &one;

    // cout << "\t Details of the student:" <<endl;
    // cout << "Name:" << p->name <<endl;
    // cout << "Age:" << p->age <<endl;
    // cout << "Gender:" << p->gender <<endl;
    return 0;
}