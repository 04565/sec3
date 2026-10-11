#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        int roll_number;
        float marks;
        string name;
    
    public:
        /*
            Note: Only 1 type of constructor is added following the question.
        */

    // default constructor
        Student() {
            cout << "=== Enter Student Details === \n";
            cout << "Enter Roll number: ";
            cin >> roll_number;

            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter total mark: ";
            cin >> marks;
        }

        void display() const {
            cout << "\n-------- Student details --------\n";
            cout << "Name: " << name << "\n";
            cout << "Roll number: " << roll_number << "\n";
            cout << "Mark: " << marks << "\n\n";
        }
};

int main() {
    
    Student st;
    st.display();

    return 0;
}