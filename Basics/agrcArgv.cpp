// example to use Argc and Argv
#include <iostream>
#include <typeinfo>
using namespace std;
 
int main(int argc, char *argv[]){
    cout << "number of arguments are :" << argc << endl;

    cout << "The arg value are:"<<endl;
    for(int i=0; i<argc;i++){
    cout << argv[i] <<endl;
    }
    return 0;
}