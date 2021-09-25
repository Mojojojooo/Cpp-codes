#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> var;

    for(int i=0;i<20;i++){
        var.push_back(i);
    }
        cout << "Content : " ; 
    for(auto i=var.begin();i<var.end();i++){
        cout << *i << " " ;
    }


     cout << "Using name[pos] : v[8] : " << var[8] << endl;
     cout << "Using .at()  " << var.at(8) << endl;
     cout << "Using .front() : " << var.front() << endl;
     cout << "Using .back : " << var.back() << endl;
     cout << "Using .data() returns the first position: " << var[*(var.data()+2)]<<endl;
     
    return 0;
}