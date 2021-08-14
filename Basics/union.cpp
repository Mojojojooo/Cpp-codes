// Demo of union : stores only one value at a time
#include <iostream>
using namespace std;

union u_name {
    int age;
    int number;
};

int main(){
    union u_name u_obj;

    u_obj.age = 20;

    cout <<u_obj.age <<endl;
    return 0;
}