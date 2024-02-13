//write a program that prints the number from 1 to 100.For multiple of 3,print"fizz",for multiple of 5,print "Buzz";and for number that for nu,ber that bare multiple of both 3 and 5,print "FizzBuzz".

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        bool isFizz = i % 3 == 0;
        bool isBuzz = i % 5 == 0;

        if (isFizz && isBuzz) {
            cout << "fizzbuzz" << endl;
        } else if (isFizz) {
            cout << "fizz" << endl;
        } else if (isBuzz) {
            cout << "buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}