
// for binary operands

#include <iostream>

using namespace std;

class Time {
    private:
        int hr, min;

    public:
        void get_time(){
            cout << "\n--- Enter a Time ---\n";
            cout << "Enter hours: ";
            cin >> hr;
            cout << "Enter minutes: ";
            cin >> min;
        }

        Time operator+(Time rhs){
            Time sum;

            sum.min = min + rhs.min;
            sum.hr = hr + rhs.hr + sum.min/60;
            sum.min = sum.min%60;

            return sum;
        }

        void show_time(){
            cout << hr << " hours and " << min << " minutes\n";
        }
};

int main() {

    Time t1, t2;

    t1.get_time();
    t2.get_time();

    Time t3 = t1 + t2;

    t1.show_time();
    t2.show_time();
    cout << "\nSum of times: ";
    t3.show_time();

    return 0;
}