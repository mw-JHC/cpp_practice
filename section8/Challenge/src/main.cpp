// Section 8
// Challenge

/*
    For this program I will be using US dollars and cents.
    Write a program that asks the user to enter the following:
    An integer representing the number of cents
    You may assume that the number of cents entered is greater than or equal to zero
    The program should then display how to provide that change to the user.
    In the US:
            1 dollar is 100 cents
            1 quarter is 25 cents
            1 dime is 10 cents
            1 nickel is 5 cents, and
            1 penny is 1 cent.
        Here is a sample run:
        Enter an amount in cents :  92
        You can provide this change as follows:
        dollars    : 0
        quarters : 3
        dimes     : 1
        nickels   : 1
        pennies  : 2
        Feel free to use your own currency system.
        Also, think of how you might solve the problem using the modulo operator.
        Have fun and test your program!!
*/

#include <iostream>

using namespace std;

int main(){
    
    // my solution
    // int input_cent {0};
    // int dollar {0}, quarters {0}, dimes {0}, nickels{0}, pennies{0};

    // cout << "Enter an amount in cents:" << endl;
    // cin >> input_cent;

    // cout << "You can provide this cahnge as follows: " << endl;

    // dollar = input_cent / 100;
    // quarters = (input_cent % 100) / 25;
    // dimes = (input_cent - 100 * dollar - 25 * quarters) / 10;
    // nickels = (input_cent - 100 * dollar - 25 * quarters - 10 * dimes) / 5; 
    // pennies = (input_cent - 100 * dollar - 25 * quarters - 10 * dimes - 5 * nickels);

    // cout << "dollars: " << dollar << endl;
    // cout << "quarters: " << quarters << endl;
    // cout << "dimes: " << dimes << endl;
    // cout << "nickels: " << nickels << endl;
    // cout << "pennies: " << pennies << endl;


    // solution 2 with minus operator
    // const int dollar_value {100};
    // const int quaters_value {25};
    // const int dime_value {10};
    // const int nickel_value{5};
    
    // int change_amount{};

    // cout << "Enter an amount in cents:" << endl;
    // cin >> change_amount;

    // int balance{},dollars{},quaters{},dimes{},nickels{},pennies{};

    // dollars = change_amount / dollar_value;
    // balance = change_amount - (dollars * dollar_value);

    // quaters= balance / quaters_value;
    // balance -= quaters * quaters_value;

    // dimes = balance / dime_value;
    // balance -= dimes * dime_value;

    // nickels = balance / nickel_value;
    // balance -= nickels * nickel_value;

    // pennies = balance;

    // cout << "dollars: " << dollars << endl;
    // cout << "quarters: " << quaters << endl;
    // cout << "dimes: " << dimes << endl;
    // cout << "nickels: " << nickels << endl;
    // cout << "pennies: " << pennies << endl;
    // cout << endl;

    // soultion 3 with mode operator
    const int dollar_value {100};
    const int quaters_value {25};
    const int dime_value {10};
    const int nickel_value{5};
    
    int change_amount{};

    cout << "Enter an amount in cents:" << endl;
    cin >> change_amount;

    int balance{},dollars{},quaters{},dimes{},nickels{},pennies{};

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;

    quaters = balance / quaters_value;
    balance %= quaters_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;


    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quaters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    cout << endl;

    return 0;
}