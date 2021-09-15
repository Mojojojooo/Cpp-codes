#include <iostream>
using namespace std;

void funcOne(int i,int j){
    cout << "Overloading but varring the number of args" << endl;
    cout << "I and J :" << i << " "<<j << endl;
};

void funcOne(int i){
    cout << "Overloading but varring the number of args" << endl;
    cout << "I :" << i << endl;
};

void funcOne(double i,double j){
    cout << "Overloading but varring the type of args" << endl;
    cout << "I and J :" << i << " "<<j << endl;
};

int main(){

    cout << "Overloaded outputs" <<endl;
    funcOne(3,4);
    funcOne(5);
    funcOne(10.2,22.8);
    return 0;
}