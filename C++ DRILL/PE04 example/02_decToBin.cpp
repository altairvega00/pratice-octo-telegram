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
/*
Running Tester.cpp

pass pass pass pass pass pass pass pass
Checking decimal = decToBin(5)
Actual:  returned decimal->5
Expected:  returned decimal->5
Actual:  parameter binary->101
Expected:  parameter binary->101

Checking decimal = decToBin(7)
Actual:  returned decimal->7
Expected:  returned decimal->7
Actual:  parameter binary->111
Expected:  parameter binary->111

Checking decimal = decToBin(42)
Actual:  returned decimal->42
Expected:  returned decimal->42
Actual:  parameter binary->101010
Expected:  parameter binary->101010

Checking decimal = decToBin(511)
Actual:  returned decimal->511
Expected:  returned decimal->511
Actual:  parameter binary->111111111
Expected:  parameter binary->111111111
Score

8/8
*/
#include <iostream>

int decToBin(int& n) 
{
    int binary = 0;
    int base = 1;
    int temp = 0;
   temp = n; 
    while (n > 0) {
        int remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10;
    }
      
      n = binary;
      binary = temp;
      
    return temp;
}
