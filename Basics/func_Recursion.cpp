// Recurssion Funtions - A function that calls itself
 #include <iostream>
 using namespace std;

 int func_name(int func_var); // here as the value is passed a copy is stored in func_var and calculation is done

 int main(){
     int a;
     int func_value;
     int func_value2;
     cout << "Enter the value to be incremented:";
     cin >> a;  
     func_name(a);
     return 0;
 }

 int func_name(int func_var){ // the definition where the actual code for the function is written
     static int i=0;
     if(func_var == 0){
        cout << "Recursion complete" <<endl;
        cout << "Looped:" <<"\t"<< i <<"  times."<< endl; 
        return i;
    }else{
        cout<<"Recursion print" <<endl;
        i++;
        return func_name(func_var-1); // this return calls itself till the variable value reaches 0
    }
 };