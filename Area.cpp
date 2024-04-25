#include <iostream>
#include <cmath>

using namespace std;

// Function for calculating areas
float triangleArea(float base, float height);
float rectangleArea(float length, float width);
float squareArea(float side);

int main() {
    int choice;
    float base, height, length, width, side;
    bool quit = false;
  // selecting your choice
    while (!quit) {
        cout << "Select the shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";

        // loop to infinity until quite choice is entered
        do {
            cout << "Enter your choice (1-4): ";
            cin >> choice;

            if (choice < 1 || choice > 4) {
                cout << "Invalid choice! Please enter a number between 1 and 4.\n";
            }
        } while (choice < 1 || choice > 4);

        switch(choice) {
            case 1:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << triangleArea(base, height) << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << rectangleArea(length, width) << endl;
                break;
            case 3:
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << squareArea(side) << endl;
                break;
            case 4:
                cout << "Exiting the program.\n";
                quit = true;
                break;
        }
    }

    return 0;
}

// Function to calculate the area of a triangle
float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
float rectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the area of a square
float squareArea(float side) {
    return side * side;
}
