#include <iostream>
using namespace std;

class virbase{
    public:

    virtual void func(){
        cout << " Base function " << endl;
    }

};

class vird1: public virbase{
    public:

    void func(){
        cout << " vird1 function " << endl;
    }

};

class vird2: public virbase{
    public:

    void func(){
        cout << " vird2 function " << endl;
    }

};

int main(){
    virbase *p ,a;
    vird1 b;
    vird2 c;

    p = &a;
    p->func();

    p = &b;
    p->func();

    p = &c;
    p->func();

    return 0;
}