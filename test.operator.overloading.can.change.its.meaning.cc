


/*
    In a class lecture, it was said that, while operator overloading, that is, while defining a operator function 
    of a class (or user-defined datatype), we cannot change the meaning of the operator.

    What it basically means is that we cannot do ADD operations in operator-() (the minus operator),
    or SUBSTRACTION in operator+() (the plus operator) and is similar for all operator.

    If we consider that the above statement is true, then the following code must show error:

        void operator+(int rhs) {
            a = a - rhs;
        }
        
        void operator-(int rhs) {
            a = a + rhs;
        }

    Here, 'a' is int variable of a class Num.

    BUT,
    When I tested this code, it didn't show any error (Neither syntax nor Semantic).

    The full code is at the bottom section with output.


    I am not saying the teacher is wrong.
    I think what he probably meant was, 
    even though the compiler supports it, we should not use it as it is a bad practice.
    It is probably just a CONVENTION to overload the correct operator rather than a strict rule of C++.

*/


// This code below is just for testing purpose
#include <iostream>

using namespace std;

class Num {
    
    public:
    
        int a; // this variable was made public to access directly for output
        
        // constructor to initialise the variable with value 10
        Num(){
            a = 10;    
        }
        
        // notice that the oparator is + but in defination it does -
        void operator+(int rhs) {
            a = a - rhs;
        }
        
        // notice that the oparator is - but in defination it does +
        void operator-(int rhs) {
            a = a + rhs;
        }
};

int main() {
    Num one, two;
    
   one + 5; // performs a - 5 even though + operator us used.
   two - 5; // performs a + 5 even though - operator us used.
    
    cout << "one: " << one.a << "\n";
    cout << "two: " << two.a << "\n";
    
    return 0;
}

/* Output:
        one: 5
        two: 15
*/