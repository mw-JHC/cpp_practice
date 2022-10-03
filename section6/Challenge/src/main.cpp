// Section 6
// Challenge

/*
  Frank's Carpet Cleaning Service
  charges 
    $30 per small room
    $60 per lange room
  Sales tax rate is 6%
  etimates are valied for 30 Days

  Prompt the user for the number of rooms they would like cleaned and provied an estimate such as:

  Estimate for carpet cleaning service:
  Number of small rooms: 3
  Number of large rooms: 1
  price per small room: $25
  price per large room: $35
  cost: $60
  Tax: $3.6
  =======================================================
  Total estimate: $116.6
  This estimate is valied for 30 days

*/

#include <iostream>

using namespace std;

int main(){

    int number_of_small_rooms {0};
    int number_of_large_rooms {0};
    const double price_per_small_room {25};
    const double price_per_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expriy {30};

    cout << "Hellow, welcome to Franks; Carpet Cleaning Service" << endl;

    cout << "\nHow many small rooms would you like cleaned?" << endl;
    cin >> number_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned?" << endl;
    cin >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small Rooms: " << number_of_small_rooms << endl;
    cout << "Number of large Rooms: " << number_of_large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms) << endl;
    cout << "Tax: $" << (price_per_small_room * number_of_small_rooms * sales_tax) + (price_per_large_room * number_of_large_rooms *sales_tax) << endl;
    cout << "======================================" << endl;
    cout << "Total estimate: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)
     + (price_per_small_room * number_of_small_rooms * sales_tax) + (price_per_large_room * number_of_large_rooms *sales_tax)<< endl;
    cout << "This estimate is valid for "<<  estimate_expriy <<" Days" << endl;

    cout << endl;

    return 0;
}