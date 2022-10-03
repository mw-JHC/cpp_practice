// Section 8
// AssignmentOperator

#include <iostream>

using namespace std;

int main(){

    int num1 {10};
    int num2 {20};
    
    num1 = 100;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    cout << endl;

    num1 = num2;
    cout << " num 1 is same as num 2" << endl; 
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    //chain Assignment
    num1 = num2 = 100;
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    //change date type
    //num1 = "Frank"; //error
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    


    cout<< endl;
    return 0;
}