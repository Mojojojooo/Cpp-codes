// Taking a float input and printing it to console
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float a ;
    cout << "enter an floating:" ;
    cin >> a;
    // To manage the PRECISION we can use the function setprecision(value) before the variable. 
    cout << "Value of input is :" << setprecision(5) << a <<endl;

}