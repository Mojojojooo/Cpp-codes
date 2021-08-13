// Funtions - Basic use of it ( definition,prototype and call)
 #include <iostream>
 using namespace std;

 int func_name(int func_var); // here as the value is passed a copy is stored in func_var and calculation is done

int func_name2(int *func_var2); // here just the reference is passed so the calulation is done on the actual value and not a copy 

 int main(){
     int a;
     int func_value;
     int func_value2;
     cout << "Enter the value to be incremented:";
     cin >> a;  

    func_value = func_name(a); // Calling the function to execute and passing the actual value
    func_value2 = func_name2(&a); // Using & operator just the reference/ address is passed
    cout << "The value is (pass by value):" << func_value << endl; 
    cout << "The value is (pass by reference):" << func_value2 << endl;
     return 0;
 }

 int func_name(int func_var){ // the definition where the actual code for the function is written
     
     func_var +=1;

     return func_var;

 };

  int func_name2(int *func_var2){ // to access the value at the referenced address * operator is used.
     
     *func_var2 -=1;

     return *func_var2;

 };