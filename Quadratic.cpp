#include "std_lib_facilities.h"

void quadraticEq(double numA, double numB, double numC) {
    double result1, result2;
    double sqroot = (numB*numB) - (4*numA*numC);

    if (sqroot < 0) {
        cout << "The equation will not have real roots.";
    }
    else {
        result1 = ((0-numB) + sqrt(sqroot)) / (2*numA);
        result2 = ((0-numB) - sqrt(sqroot)) / (2*numA);

        cout << "The roots are " << result1 << " and " << result2;
    }
}

int main() {
    double numA, numB, numC;

    cout << "Enter the value for A: ";
    cin >> numA;

    cout << "Enter the value for B: ";
    cin >> numB;

    cout << "Enter the value for C: ";
    cin >> numC;

    try {
        quadraticEq(numA, numB, numC);
    } catch (exception& e) {
        return 0;
    }
}