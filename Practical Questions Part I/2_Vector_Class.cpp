#include <iostream>

using namespace std;

class Vector {
    private:
        float x, y;

    public:
        void input(){
            cout << "Enter x component: ";
            cin>>x;

            cout << "Enter y component: ";
            cin>>y;
        }

        void display(){
            cout << "(" << x << ", " << y << ")\n";
        }

        Vector add(const Vector &v2){
            Vector result;

            result.x = x + v2.x;
            result.y = y + v2.y;

            return result;
        }
};

int main(){
    Vector v1, v2, resultant;

    cout << "Enter components of 1st vector: \n";
    v1.input();
    cout << "\nEnter components of 2nd vector: \n";
    v2.input();
    
    resultant = v1.add(v2);

    cout << "\nVector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    cout << "Resulant Vector: ";
    resultant.display();

    return 0;
}