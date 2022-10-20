// Section 9
// Switch Statement

/*
    Ask the user what grade they expect on an exam and 
    tell them what they need to score to get it.
*/

#include <iostream>

using namespace std;

int main() {

    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above" << endl;
        break;

    case 'b':
    case 'B':
        cout << "You need 80 - 89" << endl;
        break;
    
    case 'c':
    case 'C':
        cout << "You need a 70 - 79" << endl;
        break;
    
    case 'd':
    case 'D':
        cout << "You need a 60 - 69" << endl;
        break;
    
    case 'f':
    case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N)?";
            cin >> confirm;
            if (confirm == 'Y' || confirm == 'y'){
                cout << "OK, i guess you didn't study..." << endl;
            } 
            else if (confirm == 'N' || confirm == 'n'){
                cout << "Good - go study!" << endl;
            }
            else{
                cout << " illegal choice"<< endl;
            }
        break;
        }
        
    default:
        cout << "Sorry it is not valied grade" << endl;
        break;
    }


    cout << endl;
    return 0;
}