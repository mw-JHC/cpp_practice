//section 6
// constants

/*
  Frank's Carpet Cleaning Service
  charges $30 per room
  Sales tax rate is 6%
  etimates are valied for 30 Days

  Prompt the user for the number of rooms they would like cleaned and provied an estimate such as:

  Estimate for carpet cleaning service:
  Number of rooms:2 
  price per room: $30
  cost: $60
  Tax: $3.6
  =======================================================
  Total estimate: $63.6
  This estimate is valied for 30 days

  Pseudocode:
  Prompt the user to enter the number of rooms
  Display number of rooms
  Display price per room

  Display cost: (number of rooms * price per room)
  Display tax: number of rooms * price per room* tax rate
  Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
  Display estimate expiration tiem
*/

#include <iostream>

using namespace std;

int main(){

    int number_of_rooms {0};
    const double price_per_room {30};
    const double sales_tax {0.06};
    const int estimate_expriy {30};

    cout << "Hellow, welcome to Franks; Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?" << endl;

    cin >> number_of_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of Rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "======================================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
    cout << "This estimate is valid for "<<  estimate_expriy <<" Days" << endl;

    cout << endl;

    return 0;
}