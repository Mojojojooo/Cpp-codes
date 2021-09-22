#include <iostream>
#include <vector>

using namespace std;

class counter{
    public:
    int val;

    counter(int x) { val = x;
    // cout << val << " ";
    };

    int out() {return val;};
};

int main(){
    vector<counter> var;

    for(int i=0;i<10;i++){
        var.push_back(counter(i));
    };

    for(int i=0;i<var.size();i++){
        cout << var[i].out() << " ";
    };

    return 0;
}