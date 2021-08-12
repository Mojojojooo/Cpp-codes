// Program to demo a switch stmt

#include <iostream>
using namespace std;

int main(){
    int a;
    char b;

    cout << "enter your choice :" <<endl; // int choice
    cin >> a;

    cout << "enter a char choice: " <<endl; // char choice
    cin >> b;

    //switch(a) // a/b the choice making variable
    switch(b)
    {
        // for a
        // case 1: cout <<"1 case executed";
        //         break; // to break out of the case
        // case 2: cout <<"2 case executed";
        //         break; // to break out of the case
        // case 3: cout <<"3 case executed";
        //         break; // to break out of the case


        // for b
        case 'a': cout <<"a case executed";
                break; // to break out of the case
        case 'b': cout <<"b case executed";
                break; // to break out of the case
        case 'c': cout <<"c case executed";
                break; // to break out of the case

        default: cout <<"no case executed";
    }


    return 0;
}