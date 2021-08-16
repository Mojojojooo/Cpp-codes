// Star pattern type one : Half pyramid
#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "Enter the pattern lenght:" <<endl;
    cin >> n;
    //patter type: Half pyramid
    // * 
    // **
    // ***
    // ****
    // *****
    // .......
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout << "\n";
    } 

    //Inverted half pyramid
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout << "\n";
    }
    return 0;
}