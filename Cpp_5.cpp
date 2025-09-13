//Name: Sameer Yasin
//PRN: 24070123092
//Division: B1
//Exp-13

//Operator Overloading
//Program-5

#include<iostream>
using namespace std;

class Number {
    public:
    int value;

    Number(int v=0) {
        value = v;
    }

    // Overloading + operator
    Number operator + (const Number &n) {
        return Number(value + n.value);
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(5), n2(10);
    Number n3 = n1 + n2;   // Uses overloaded + operator

    cout << "n1 = "; n1.display();
    cout << "n2 = "; n2.display();
    cout << "Sum = "; n3.display();

    return 0;
}


/*OUTPUTS
n1 = 5
n2 = 10
Sum = 15
*/
