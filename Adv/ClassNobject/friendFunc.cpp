#include <iostream>
using namespace std;

class student{
    protected:
    char gender='m';
    int roll=100;

    public: 
    string name;
    
    // Friend function
    friend void frnd(student x);
};


void frnd(student x){
    cout << "Name , Gender and roll :" << x.name << " "<< x.gender << " " << x.roll<<endl;
};

int main()
{
    student one;
    student *two;
    two = &one;

    cout << "Enter name:"<<endl;
    cin >> two->name; // = "yash";
    frnd(one);

    return 0;
}