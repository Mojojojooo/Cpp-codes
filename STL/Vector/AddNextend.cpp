#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    vector<char> var(10);

    for(int i=0;i<var.size();i++){
        var[i] = i + 'a';
    }

    for(int i=0;i<var.size();i++){
        cout << var[i]<< " ";
    }
    cout << "Current size " << var.size() <<endl;

    for(int i=0;i<10;i++){
        var.push_back(i+ 10 + 'a');
    }

    for(int i=0;i<var.size();i++){
        cout << var[i]<< " ";
    }
    cout << "Modified size " << var.size() <<endl;

    for(int i=0;i<var.size();i++){
        var[i] = toupper(var[i]);
    }

    for(int i=0;i<var.size();i++){
        cout << var[i]<< " ";
    }
    cout << "Modified size " << var.size() <<endl;

    return 0;
}