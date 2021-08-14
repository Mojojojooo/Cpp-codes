// Looping using pointer on an array 
#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7};
    int *ptr;
    ptr = a;

    for(int i=0;i<7;i++){
        cout << *(ptr+i) <<endl;
    }
    return 0;
}