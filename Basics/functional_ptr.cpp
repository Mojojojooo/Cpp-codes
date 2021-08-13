#include <iostream>
using namespace std;

int func(int a){
    return a;
}

int main(){
    int a=8;
    int c=0;
    int (*ptr)(int);
    ptr = &func;

    c = (*ptr)(a);
    cout << c << endl;
}