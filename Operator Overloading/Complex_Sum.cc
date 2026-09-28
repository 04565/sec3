
// for binary operands

#include <iostream>

using namespace std;

class Complex {
    private:
        int real, imag;
    
    public:
        void input(){
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imag;
        }

        Complex operator+(Complex rhs){
            Complex res;

            res.real = real + rhs.real;
            res.imag = imag + rhs.imag;

            return res;
        }
        
        void display(){
            cout << real << " + "<< imag << "i\n";
        }
};

int main(){

    Complex c1, c2;

    cout << "Enter a Complex number: " << endl;
    c1.input();
    cout << "\nEnter a Complex number: " << endl;
    c2.input();

    Complex res = c1 + c2;

    cout << "\nSum : ";
    res.display();

    return 0;
}