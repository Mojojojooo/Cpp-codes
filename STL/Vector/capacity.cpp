#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> var(30);

    for(int i=0;i<20;i++){
        var[i] = i;
    }
        cout << "Content 2 : " ; 
    for(auto i=var.begin();i<var.end();i++){
        cout << *i << " " ;
    }

    cout << "Current Size:" << var.size() <<endl;
    cout << "MAx Size:" << var.max_size() <<endl;
    cout << "CAPACITY:" << var.capacity() <<endl;

    var.resize(20);
    cout << "Current Size:" << var.size() <<endl;

    cout << "Content 2 : " ; 
    for(auto i=var.begin();i<var.end();i++){
        cout << *i << " " ;
    }


    var.reserve(40);
    cout << "Current Size:" << var.size() <<endl;
    cout << "CAPACITY:" << var.capacity() <<endl;
    var.shrink_to_fit(); // Shrinks to 20 at only 20 elements and frees up next 20 which was reserved
    cout << "Current Size:" << var.size() <<endl;
    cout << "CAPACITY:" << var.capacity() <<endl;
    return 0;
}