// Ternary operator 

// variable = condition ? true : false;

#include <iostream>
using namespace std;

int main(){
    int n= 10;
    int i=0;
    cout << (i > n ? "i greater than n" : "i less than n" )<<endl;
    cout << (i < n ? "n greater than i" : "n less than i") <<endl;
    return 0;
}