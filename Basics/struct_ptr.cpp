// Program to demo the use of structure
#include <iostream>
#include <string>
using namespace std;

struct s_name {
    int age;
    string name;
    char gender='f';
};

int main(){
    s_name s_object; // the struct object
    s_name *ptr;
    ptr = &s_object;
    ptr->age = 10; // assigning a value to struct object
    ptr->name = "Kid";
    // ptr->gender = 'f';

    cout << ptr->age << "\t" << ptr->name <<"\t" << ptr->gender <<endl; // accessing the value to gender which is declared in the struct
    return 0;
}