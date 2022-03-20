//
// Created by xxp on 2022/3/19.
//

#include <iostream>

long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    using namespace std;
    int n;
    cout << "Enter an integer number: ";
    while (!(cin >> n)) {
        cin.clear();
        while (cin.get() != '\n') {
        }
        cout << "Please enter an integer number: ";
    }
    if (n < 0) {
        cout << "Negative number don't have factorial." << endl;
        exit(1);
    }

    long f = factorial(n);
    cout << "The factorial of " << n << " is " << f << endl;
    return 0;
}