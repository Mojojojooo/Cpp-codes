#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> var(10,5);
    cout << "Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;

    var.assign(5,10);
    cout << "Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;

    cout << "Inserting 22 to the end "<<endl;
    var.push_back(22);
    cout << "Current Size: " << var.size() << "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;
    cout << "Popping end element "<< endl;
    var.pop_back();
    cout << "Current Size: " << var.size()<< "\t";
    
    cout << "Inserting at 4th pos"<<endl;
    var.insert((var.begin()+4),55);
    cout << "Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;
    cout << "Removing at 4th pos"<<endl;
    var.erase((var.begin()+4));
    cout << "Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;

    cout << "emplace at 4th pos"<<endl;
    var.emplace((var.begin()+4),55);
    cout << "Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;cout << "Inserting at 4th pos"<<endl;
    var.emplace_back(55);
    cout << "Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;


    var.clear();
    cout << "Cleared: Current Size: " << var.size()<< "\t";
    for(int i=0;i<var.size();i++){
        cout << var[i] << " ";
    }
    cout << "\n" ;
    return 0;
}
