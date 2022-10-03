//Section 8
// Mixed Expressions

#include <iostream>

using namespace std;

int main(){

    int total {};
    int num1 {}, num2 {}, num3{};
    const int count {3};

    cout<< "Enter 3 integers separted by spaces: ";
    cin >> num1 >> num2>> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;
    // average =(double)total/count; Old-style
    cout<< "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    cout << endl;
    return 0;
}