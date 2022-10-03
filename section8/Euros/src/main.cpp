//section 8
//Euro to dollar

#include <iostream>

using namespace std;

int main() {
    const double usd_per_eur {1.19};
    double euros {0.0};
    double dollars {0.0};

    cout << "Welcome to the EUR to USD converter" <<endl;
    cout << "Enter the value in EUR: ";

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << euros << " euros is equivalent to " << dollars << " dollars " << endl;

    cout << endl;
    return 0;
}