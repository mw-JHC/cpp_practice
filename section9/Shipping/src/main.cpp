// Section 9
// Shipping

/*
    Shipping cost calculator

    Ask the user for package dimension in inches
    length, width, height thes schould be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    if Package volume is greater than 100 cubic inches there is a 10% surcharge
    if Package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>

using namespace std;

int main(){

    int length{}, width{}, height{};
    const double base_cost{2.50};

    const int tier1_threshold{100};
    const int tier2_threshold{500};

    int max_dimension_length {10};

    double tier1_surcharge {0.10};
    double tier2_surcharge {0.25};

    int package_volume {};

    cout << "Enter length, width and heigt seperated by space: ";
    cin >> length >> width >> height;


    if (length < max_dimension_length && width < max_dimension_length && height < max_dimension_length)
    {
        /* code */
        double package_cost {};
        package_cost = base_cost;

        package_volume = length * width * height;
        if (package_volume < tier1_threshold)
        {   
            cout << "Base cost"<< endl;
            cout << "\nThe cost is $" << package_cost << endl; 
        }
        else if (package_volume >= tier1_threshold && package_volume < tier2_threshold)
        {
            /* code */
            package_cost += package_cost * tier1_surcharge;
            cout << "Tier1 "<< endl;
            cout << "\nThe cost is $" << package_cost << endl;
        }
        else if (package_volume >= tier2_threshold){
            package_cost += package_cost * tier2_surcharge;
            cout << "Tier2"<< endl;
            cout << "\nThe cost is $" << package_cost << endl;
        }
        
        

    }
    
    else{
        cout << " Sorry, it is too big we can't ship it" << endl; 
    }
    

    cout << endl;
    return 0;
}