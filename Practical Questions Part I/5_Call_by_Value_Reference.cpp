
// The given program demonstrates the concept of Call by Value and Call by Reference by swapping the values  two numbers using suitable functions. 

#include <iostream>

using namespace std;

// function using Call by Value
void swap_by_value(int x, int y){
    int temp = x;
    x = y;
    y = temp;

    cout << "\nAfter swapping with call by value: \n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

}

// function using Call by Reference
void swap_by_ref(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x,y;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;

    cout << "\nBefore swapping: \n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    swap_by_value(x, y); // call by value

    cout << "\nValues of x and y in main() after swapping with Call by Value:\n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    cout << "\nBefore swapping: \n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    swap_by_ref(x, y); // call by reference

    cout << "\nAfter swapping with call by reference: \n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    cout << "\nValues of x and y in main() after swapping with Call by Reference:\n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";

    return 0;
}