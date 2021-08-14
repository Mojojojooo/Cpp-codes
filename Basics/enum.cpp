//Program to demo use of enum
#include <iostream>
using namespace std;

int main(){
    enum enum_name{one,two,three,four}; // enum assigns value to the variable from 0 to n-1

    enum enum2{five,six,seven=100,eight}; // we can assign valus and they get those value 

    cout << one <<endl;
    cout << seven <<endl;
    cout << eight << endl; // since variable SEVEN has a value of 100 the next variable will have the incremented value of that.That is 101,102......
    return 0; 
}