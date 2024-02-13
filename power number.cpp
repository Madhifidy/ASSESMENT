//write a program that takes an integer as input and returns true if the input is a power of two
#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int n = num; 

    if (num > 0) {
        while (num % 2 == 0) {
            num /= 2;
        }

        if (num == 1) {
            cout << n << " true." << endl;
        } else {
            cout << n << " false." << endl;
        }
    } else {
        cout << n << " false." << endl; 
    }

    return 0;
}
