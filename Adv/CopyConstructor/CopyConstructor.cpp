#include <iostream>
using namespace std;

class size{
    public:
     int i;
        int copyVal; // variable has to be declared globally
     size (int i){
         cout << "Size is : " << i <<endl;
         copyVal = i;
     }

     size (const size &a)
     {
         int j; 
         j = a.copyVal; // use of the coppied value
        cout << "Size in copy is : " << j<<endl;
     }

     ~size(){}
};

int main(){
    size obj(1);

    size obj1(obj);

    return 0;
}