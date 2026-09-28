
// for binary operands

#include <iostream>
#include <string>

using namespace std;

class MyStr {
private:
    string str;

public:
    MyStr(string s) {
        str = s;
    }

    string operator+(MyStr rhs) {
        return str + " " + rhs.str;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyStr s1("hello"), s2("world!");
    MyStr s3 = s1 + s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}