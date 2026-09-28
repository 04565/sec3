
#include <iostream>

using namespace std;

class Rectangle {
    private:
        float length, breadth;

    public:

    // function to set the length and breadth
        void set_data(float l, float b){
            length = l;
            breadth = b;
        }

    // functions to get area and perimeter
        float get_area(){
            return length*breadth;
        }

        float get_perimeter(){
            return (2*(length + breadth));
        }

};

int main() {

    float l,b;
    Rectangle rec;

    cout << "Enter the Length and Breadth of rectangle: " << endl;
    cin >> l >> b;

    if(l < 0 || b < 0) {
        cout << "\nInvalid Length or Breadth!\n";
        return 0;
    }

    rec.set_data(l,b);

    cout << "Perimeter of rectangle: " << rec.get_perimeter() << endl;
    cout << "Area of rectangle: " << rec.get_area() << endl;

    return 0;
}