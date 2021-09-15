#include <iostream>
using namespace std;

class OpOverload{
    public:
    int i;
    int j;

    // OpOverload(){}

    OpOverload(int a,int b){
        i=a;
        j=b;
    }
    OpOverload operator+(OpOverload &obj2);
};


OpOverload OpOverload::operator+(OpOverload &obj2){
    OpOverload obj4(0,0);
    obj4.i = i + obj2.i;
    obj4.j = j + obj2.j;

    return obj4;
};

int main(){
    OpOverload obj1(1,2);
    OpOverload obj2(3,4);

    // OpOverload obj3;

    obj1 = obj1 + obj2;

    cout << obj1.i << " " << obj1.j <<endl;
    return 0;
}