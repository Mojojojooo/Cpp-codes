// array of structure
#include <iostream>
#include <string>
using namespace std;

struct s_name {
    int age;
    string name;
    char gender;
};

int main(){
    s_name s_object[10]; // the struct object
    s_object[1].age = 10; // assigning a value to struct object
    s_object[1].name = "Kid";
    s_object[1].gender = 'm';

    s_object[2].age = 20; // assigning a value to struct object
    s_object[2].name = "Kid2";
    s_object[2].gender = 'f';

    s_object[3].age = 30; // assigning a value to struct object
    s_object[3].name = "Kid3";
    s_object[3].gender = 'm';

    s_object[4].age = 40; // assigning a value to struct object
    s_object[4].name = "Kid4";
    s_object[4].gender = 'f';

    cout << s_object[1].age << "\t" << s_object[1].name <<"\t" << s_object[1].gender <<endl; // accessing the value to 
    cout << s_object[2].age << "\t" << s_object[2].name <<"\t" << s_object[2].gender <<endl; // accessing the value to
    cout << s_object[3].age << "\t" << s_object[3].name <<"\t" << s_object[3].gender <<endl; // accessing the value to
    cout << s_object[4].age << "\t" << s_object[4].name <<"\t" << s_object[4].gender <<endl; // accessing the value togender which is declared in the struct
    return 0;
}