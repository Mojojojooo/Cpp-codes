#include <iostream>
using namespace std;

class Overloaded{
    public:
    Overloaded(){
        cout << "Overloaded with no parameter "<<endl;
    };

    Overloaded(int i){
        cout << "One parameter" <<endl;
    };

    Overloaded(int i,int j){
        cout << "Two parameters" <<endl;
     };

     ~Overloaded(){
        cout << "Destructed " <<endl; 
     };
};

int main(){
    Overloaded obj;  // Obj names cannot be similar
    Overloaded obj1(3);
    Overloaded obj2(3,4);
    return 0;
}