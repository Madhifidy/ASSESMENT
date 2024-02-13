//write a program to print fibonacci sequence upto to 100
#include <iostream>

using namespace std;

int main() {
    int fisrtTerm = 0;
	int secondTerm = 1;
    int	nextTerm;

    cout << "Fibonacci Sequence Upto 100:" << endl;
    for (int i = 1; i <= 100; i++) {
        cout << nextTerm << " "<<endl;
        nextTerm = fisrtTerm  + secondTerm;
        fisrtTerm= secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;

    return 0;
}