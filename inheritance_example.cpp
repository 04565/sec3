#include <iostream>

using namespace std;

// Created a base class A
// This class does not inherit any other class
class A {
    private:
        int a;
    public:
        // constrcutor to initialize object 
        A() {
            a = 1;
        }
}

// Class B inherits class A
// Example of Single inhertance
class B: public A {
    private:
        int b;
    public:
        // constrcutor to initialize object 
        B() {
            b = 2;
        }
}

// Class C inherits class B
// This is also an example of Single Inheritance
class C: public B {
    private:
        int c;
    public:
        // constrcutor to initialize object 
        C() {
            c = 3;
        }
}

/*
    In the code above, Class A is the base class, which is inherited by Class B (via Single inhertance).
    Similarly, Class B is inherited by Class C. Hence, class B is the base class for class C.

    The type of inheritance between these classes is MUltilevel inhertance.
    
    This is not just limited to 3 classes, and the chain can keep goiing.

    A -> B -> C -> ...

*/

// Class D inherits three classes (A, B, & C) i.e. more than one class is inherited
// This is an example of Multiple inheritance
class D: public A, public B, public C {
    private:
        int d;
    public:
        // constrcutor to initialize object 
        D() {
            d = 4;
        }
}

// more class delclarations

class E: public A {
    private:
        int e;
    public:
        // constrcutor to initialize object 
        E() {
            e = 5;
        }
}

class F: public A {
    private:
        int f;
    public:
        // constrcutor to initialize object 
        F() {
            f = 6;
        }
}

class G: public E {
    private:
        int g;
    public:
        // constrcutor to initialize object 
        G() {
            g = 7;
        }
}

/*
    Notice how Class A in inherited by more than one classes (B & E), and then some of the child classes (B & E) are then inherited by other classes (B is inherited by C & F, anf E is inherited by G)
    A hierarchy (or maybe a Fmaily Tree) is formed between these classes.

    Consider A as the parent. 
    It has 2 child classes B, E.
    Similarly, B has 2 child classes C & F.
    And E has 1 child class G.

               A
             /   \    
            B     E
           / \     \
          C   F     G

    These type of related classes has Hierarchial Inhertance between them.
*/




/*
    Since this file contains all types of inheritance between the classes,
    it is approproate to say that it contains Hybrid inheritance.
*/