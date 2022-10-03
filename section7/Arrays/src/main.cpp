// Arrays
#include <iostream>


using namespace std;

int main(){

    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    //cin >> vowels[5]; out of bounds- Don't do this!!! 

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7; // set the first element of the array in hi_temps to 100.7

    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    int test_score [5];// outputs are garbage values
    // int test score [5] {100, 90} //outputs are 100 ,90, 0, 0, 0  
    cout << "\nFirst socre at index 0: "<< test_score[0] << endl;
    cout << "Second socre at index 1: "<< test_score[1] << endl;
    cout << "Third socre at index 2: "<< test_score[2] << endl;
    cout << "Fourth socre at index 3: "<< test_score[3] << endl;
    cout << "Fifth socre at index 4: "<< test_score[4] << endl;
    

    cout <<"\nEnter 5 test scores: "<< endl;
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];

    cout << "\nthe updated array is: "<< endl;
    cout << "\nFirst socre at index 0: "<< test_score[0] << endl;
    cout << "Second socre at index 1: "<< test_score[1] << endl;
    cout << "Third socre at index 2: "<< test_score[2] << endl;
    cout << "Fourth socre at index 3: "<< test_score[3] << endl;
    cout << "Fifth socre at index 4: "<< test_score[4] << endl;

    cout <<"\nNotice what the value of the array name is : " << test_score <<endl; // output is the name of array adress

    cout << endl;
    return 0;
}