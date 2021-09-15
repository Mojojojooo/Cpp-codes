#include <iostream>
using namespace std;

class base{
    private:
    // Not accessable by anyone
    int i=10;
    protected:
    // accessable only by inherited
    int j=20;
    public:
    // accessible everywhere
    int k=30;
};

class derived : public base {
    // Public -> public Private -> Private Protected -> Protected
        public:
    derived() {
    cout << "J and K : " << j << " " <<k <<endl;

    }
    // cout << "J and K : " << j << " " <<k <<endl;
};

class derived2 : protected base {
    // Public -> Protected Private -> Private Protected -> Protected
    // cout << "J and K : " << j << " " <<k <<endl;
        public:
    derived2() {
    cout << "J and K : " << j << " " <<k <<endl;

    }
};

class derived3 : private base {
    // Public -> Private Private -> Private Protected -> Private
    // cout << "No value is accessible " <<endl;
        public:
    derived3() {
    // cout << "J and K : " << j << " " <<k <<endl;
    cout << "No value is accessible " <<endl;

    // but using grant access method

    base::j,k;

    cout << "using the grant option J and K : " << j << " " <<k <<endl;
    }
};

int main(){
    base a;
    derived b;
    derived2 c;
    derived3 d;
    return 0;
}