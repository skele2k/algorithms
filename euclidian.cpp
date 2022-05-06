#include <iostream>
#include <limits.h>

using namespace std;

// greatest common divisor
int gcd(int a, int b) {
    if (b == 0){
        return a;
    }

    return gcd(b, a%b);
}

int main(int argc, char ** argv) {
    if (argc != 3) {
        cout << "Please insert two input" << endl;
        return -1;
    } 
    // cout << argv[1] << " " << argv[2] << endl;
    char *p;
    long firstParameter = strtol(argv[1], &p, 10);
    long secondParameter = strtol(argv[2], &p, 10);

    // Check for errors: e.g., the string does not represent an integer
    // or the integer is larger than int
    if (errno != 0 || *p != '\0' || firstParameter > INT_MAX || firstParameter < INT_MIN) {
        // Put here the handling of the error, like exiting the program with
        // an error message
    } else {
        // No error
        cout << "GCD: "<< gcd(firstParameter, secondParameter) << endl;
    }
}