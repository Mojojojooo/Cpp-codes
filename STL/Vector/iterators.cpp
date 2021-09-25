#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> var(5);
    vector<int>::iterator p;

    cout << "Initial Size: " << var.size()<<endl;
    
    for(auto i=1;i<=10;i++){
        var[i] = i ; //var.push_back(i);
    }

    p = var.begin();
    // p = var.cbegin(); cannot be used as its a constant and any arithematic operations like line 20 cannot be done on it.
    cout << "After pushback size :" << var.size()<<endl;
    for(auto i=0;i<var.size();i++){
        cout << *(p + i) << "\t";
    }
    cout << "\n";
    for(auto i=var.rbegin();i<var.rend();i++){
        cout << *i << "\t";
    }
    cout << "\n";
    var.clear();
    return 0;
}