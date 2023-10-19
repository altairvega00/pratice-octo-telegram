
void quadratic(int a, int b, int c, double &root1, double &root2) {
    double d = b * b - 4 * a * c;
    d = pow(d, 0.5);
    root1 = (-b + d) / (2 * a);
    root2 = (-b - d) / (2 * a);
}

/*

Write a function named quadratic() that computes roots of quadratic equations. Recall that a
quadratic equation is one of the form, ax2 + bx + c = 0.
Your function accepts five parameters:

• The integer coefficients a, b, and c as two input parameters
• Two real number (double) output parameters root1 and root2.
Your function should compute the two integer roots of the quadratic equation and store them
into the two reference parameters. For example, the equation x2 - 3x - 4 = 0 has roots of x = 4
and x = -1, so the call quadratic(1, -3, -4, root1, root2); should set root1 to 4 and root2
to -1. You may assume that the function has two real roots.
Recall the quadratic formula is:

Testers

Running Tester.cpp

pass pass pass pass pass pass pass pass
Checking quadratic(1, 3, 2, root1, root2)
Actual:  root1->-1.000000
Expected:  root1->-1.000000
Actual:  root2->-2.000000
Expected:  root2->-2.000000

Checking quadratic(1, -7, 12, root1, root2)
Actual:  root1->4.000000
Expected:  root1->4.000000
Actual:  root2->3.000000
Expected:  root2->3.000000

Checking quadratic(1, -3, -4, root1, root2)
Actual:  root1->4.000000
Expected:  root1->4.000000
Actual:  root2->-1.000000
Expected:  root2->-1.000000

Checking quadratic(4, 10, 5, root1, root2)
Actual:  root1->-0.690983
Expected:  root1->-0.690983
Actual:  root2->-1.809017
Expected:  root2->-1.809017
Score

8/8
*/