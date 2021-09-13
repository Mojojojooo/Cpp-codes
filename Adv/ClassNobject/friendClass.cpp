#include <iostream>
using namespace std;

class student{
    protected:
    char gender='m';
    int roll=100;

    public: 
    string name;
    
    // Friend function
    friend class frnd;
};


class frnd{
    public:
    string name;

    void print(student x,frnd y){
    cout << "Name , Gender and roll :" << name << " "<< x.gender << " " << x.roll<<endl;}
};

int main()
{
    frnd one;
    student three;
    frnd *two;
    two = &one;

    cout << "Enter name:"<<endl;
    cin >> two->name; // = "yash";
    one.print(three,one);

    return 0;
}