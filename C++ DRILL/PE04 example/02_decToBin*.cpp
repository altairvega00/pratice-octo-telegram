/**
 * 2 THE DECIMAL TO BINARY PROBLEM
Write a function named decToBin() that accepts an integer parameter whose digits are meant to
represent decimal (base-10) digits, and converts that integer to a representation of binary
(base-2). The function should return the integer value before it was converted. For example,
given this code:
int a = 43;
int b = decToBin(a);
cout << "a->" << a << ", b->" << b << endl;
The output is: a->101011, b->43
Constraints: Do not use a string in your solution. Also do not use any built-in base conversion
functions from the system libraries. You must program this by "hand".
*/
#include <iostream>

int decToBin(int& n) {
    int binary = 0;
    int base = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10;
    }

    return binary;
}
