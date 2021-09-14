#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;
    char gender;

    void in()
    {
    cout << "Enter name:"<<endl;
    cin >> name; // = "yash";
    cout << "Enter age:"<<endl;
    cin >> age; // = 10;
    cout << "Enter gender:"<<endl;
    cin >> gender ; // = 'M';
    };

    void outt(){
    cout << "\t Details of the student:" <<endl;
    cout << "Name:" << name <<endl;
    cout << "Age:" << age <<endl;
    cout << "Gender:" << gender <<endl;
    };
};

int main(){
    student one[3];

    for(int i=0;i<3;i++)
    {
        one[i].in();
    }
    for(int i=0;i<3;i++)
    {
        one[i].outt();
    }
    return 0;
}