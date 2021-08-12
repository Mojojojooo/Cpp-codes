// do - while loop

//executes the do part once before checking

#include <iostream>
using namespace std;

int main(){
    int n= 10;
    int i=0;
    
    do{
        cout << i <<endl;
        i++;
    }while(i<n);

    return 0;
}