//section8
//Relational Operator

#include <iostream>

using namespace std;

int main(){

    int num1 {}, num2 {};

    cout << boolalpha;
    cout << "Enter 2 integers sperated by a space: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    const int lower {10};
    const int upper {20};

    cout << "\nEnter an integer that is greater than " << lower << endl;
    cin >>num1;
    cout << num1 << " > " << lower << " : " << (num1 > lower) << endl;

    cout << "\nEnter an integer that is less than or equl to " << upper << " : ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper ) << endl;


    cout << endl;
    return 0; 
}