// Star pattern type two : FULL PYRAMIND
#include <iostream>
using namespace std;

int main(){
    int n=0;
    int k=0;
    cout << "Enter the pattern lenght:" <<endl;
    cin >> n;
    // Inverted full Pyramid
    for(int i=0;i<=n;i++){
            k=0;
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        while(k <= n-i){
                cout << " *" ;
                k++;
            }
        cout << "\n";
    }

    // Full Pyramid
    for(int i=n;i>0;i--){
            k=0;
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        while(k <= n-i){
                cout << " *" ;
                k++;
            }
        cout << "\n"; 
    }
    return 0;
}