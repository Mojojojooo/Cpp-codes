// passing a struct to a function
#include <iostream>
#include <string>
using namespace std;

struct s_name {
    int age;
    string name;
    char gender='m';
};

void func(s_name s_obj2){ // passing the whole stucture

    cout << "Value from the function: "<< s_obj2.age <<endl;

}

int main(){
    s_name s_object; // the struct object
    s_object.age = 10; // assigning a value to struct object
    s_object.name = "Kid";

    func(s_object);

    cout << s_object.age << "\t" << s_object.name <<"\t" << s_object.gender <<endl; // accessing the value to gender which is declared in the struct
    return 0;
}