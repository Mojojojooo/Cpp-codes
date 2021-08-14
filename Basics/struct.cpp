// Program to demo the use of structure
#include <iostream>
#include <string>
using namespace std;

struct s_name {
    int age;
    string name;
    char gender='m';
};

int main(){
    s_name s_object; // the struct object
    s_object.age = 10; // assigning a value to struct object
    s_object.name = "Kid";

    cout << s_object.age << "\t" << s_object.name <<"\t" << s_object.gender <<endl; // accessing the value to gender which is declared in the struct
    return 0;
}