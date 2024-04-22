#include <iostream>
#include <random>
//use of standard namespace
using namespace std;
//main function
int main() {
    //create a random device to seed the random number generator
    random_device rd;
    // Initialise pseudo-random number generator 
    mt19937 gen(rd());
    //create uniform distribution for random numbers between 0-11
    uniform_int_distribution<> dis(0, 11);
    // generate a random number of days until epiration.
    int daysUntilExpiration = dis(gen);
   //randomly generated number of days output.
    cout << "Random number of days until expiration: " << daysUntilExpiration << endl;
      //different scenarios and there output message.
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    }
    if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
    if (daysUntilExpiration > 1 && daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    }
    if (daysUntilExpiration > 5 && daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }
    if (daysUntilExpiration > 10) {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
