// Section 8
/*

    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    prefix ++num
    postfix num++

    Don't overuse this operator!
    ALERT!! Never use it twice for the same variable in the same statement

*/

#include <iostream>

using namespace std;

int main(){

    int counter {10};
    int result {0};

    //Example 1 - simple increment
    cout << "Counter: " << counter << endl; //10

    counter = counter + 1;
    cout << "Counter: " << counter << endl; // 11

    counter++;
    cout << "Counter: " << counter << endl; // 12

    ++counter;
    cout << "Counter: " << counter << endl; // 13


    //Example 2 - preincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = ++counter; //Note the pre increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;


    //Example 3 - postincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = counter++; //Note the post increment
    cout << "Counter: " << counter << endl;// after using counter variable counter = counter + 1;
    cout << "Result: " << result << endl;

    //Example 4 
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = ++counter + 10; //Note the pre increment result = (counter + 1) + 10;
    cout << "Counter: " << counter << endl;// after using counter variable counter = counter + 1;
    cout << "Result: " << result << endl;


    //Example 5 
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;
    result = counter++ + 10; //Note the post increment result = (counter) + 10;
    cout << "Counter: " << counter << endl;// after using counter variable counter = counter + 1;
    cout << "Result: " << result << endl;

    cout<<endl;
    return 0;
}