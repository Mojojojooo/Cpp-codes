// Funtions - Basic use of it ( definition,prototype and call)
 #include <iostream>
 using namespace std;

 int func_name(int func_var); // function prototype where just the name and variables are declared and has not body

 int main(){
     int a;
     int func_value;

     cout << "Enter the value to be incremented:";
     cin >> a;  

    func_value = func_name(a); // Calling the fucntion to execute
    cout << "The value is:" << func_value << endl;
     return 0;
 }

 int func_name(int func_var){ // the definition where the actual code for the function is written
     
     func_var +=1;

     return func_var;

 };