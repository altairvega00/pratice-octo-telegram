   /*
   Write a function named gcd() that accepts two integers as input parameters and returns the
greatest common divisor of the two numbers as an output parameter. The function has no
return value. The greatest common divisor (GCD) of two integers, a and b, is the largest integer
that is a factor of both a and b. The GCD of any number and 1 is 1, and the GCD of any number
and 0 is that number.

One efficient way to compute the GCD of two numbers is to use Euclid's algorithm, which states
the following:
GCD(A, B) = GCD(B, A % B)
GCD(A, 0) = Absolute value of A
In other words, if you repeatedly take the remainder of A divided by B and then swap the two
values, eventually B will store 0 and A will store the greatest common divisor.
For example: gcd(24, 84, n) sets n to 12, gcd(105, 45, n) sets n to 15, and gcd(0, 8, n)
sets n to 8.
*/
void ged(int num1, int num2, int& outVal) {
    // Handle case where both inputs are 0
    if (num1 == 0 && num2 == 0) {
        outVal = 0;
        return;
    }
    // Take absolute values of input numbers
    int a = abs(num1);
    int b = abs(num2);
    // Apply Euclid's algorithm to compute GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // Store result in output parameter
    outVal = a;
}
