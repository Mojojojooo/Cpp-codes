// Programs to demo a basic use of pointers
#include <iostream>
using namespace std;

int main(){
    int a= 10;
    int *ptr; // declaration of pointer

    ptr = &a; // assigning the address to the pointer so that we can access the value using PTR

    cout <<  *ptr <<endl; // using pointer to print the value
    return 0;
}