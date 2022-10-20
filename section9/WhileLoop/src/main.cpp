#include <iostream>

using namespace std;

int main(){

    int num{};

    cout << "Enter a poistive integer 0 start the count down: ";
    cin >> num;

    while (num > 0)
    {
        /* code */
        cout << num << endl;
        --num;;
    }

    cout << "Blastoff!" << endl; 
    
    cout << "Enter a positive integer to count up to: ";
    cin >> num;
    int i {1};

    while (num >= i){
        cout << i << endl;
        i++;
    }

    int number{0};

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while(number >= 100){
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }

    cout << "Thanks!";


    bool done {false};
    int number2{0};

    while (!done){
        cout << "Enter an integer betwwen 1 and 5: ";
        cin >> number;

        if (number <= 1 || number >=5){
            cout << "Out of range, try again" << endl;
        }
        else{
            cout << "Thanks!" << endl;
            done = true;
        }
    }


    cout << endl;
    return 0;
}