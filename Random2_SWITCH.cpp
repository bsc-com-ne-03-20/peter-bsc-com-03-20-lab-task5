#include <iostream>
#include <random>
using namespace std;
int main() {

    // create a random  number device
    random_device rd;
    //  Initialise pseudo-random number generator 
    mt19937 gen(rd());

    //create uniform distribution between 0-11
    uniform_int_distribution<> dis(0, 11);
    // generate a random number of days until expiration
    int daysUntilExpiration = dis(gen);
    //randomly generated number of days output
    cout << "Random number of days until expiration: " << daysUntilExpiration << endl;

    //output message based on conditions.
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}
