// funtion which returns a pointer
#include <iostream>
using namespace std;

int* func(int *b)
{
    static int c=0;
    c = *b;
    return &c;
}

int main(){
    int b=9;
    int *ptr;

    ptr = func(&b);
    cout << *ptr <<endl;
    return 0;

}