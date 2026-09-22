#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        int roll_number;
        float marks;
        string name;
    
    public:

    // default constructor
        Student() {
            cout << "=== Enter Student Details === \n";
            cout << "Enter Roll number: ";
            cin >> roll_number;

            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter mark: ";
            cin >> marks;
        }

    // parameterised constructors

        Student(int roll, string nm) {
            roll_number = roll;
            name = nm;
            marks = 0.0;
        }

        Student(int rn, string nme, float mark)  {
            roll_number = rn;
            name = nme;
            marks = mark;
        }

        void display() const {
            cout << "\n-------- Student details --------\n";
            cout << "Name: " << name << "\n";
            cout << "Roll number: " << roll_number << "\n";
            cout << "Mark: " << marks << "\n\n";
        }
};

int main() {

    Student st1(123, "User 1", 67.67);
    Student st2(123, "User 2");
    Student st3;

    st1.display();
    st2.display();
    st3.display();
}