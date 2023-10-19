   // Write your function here

/*
Write a function named swapDigitPairs() that accepts a positive integer n as an input-output
parameter which is changed to a new value similar to n's but with each pair of digits swapped in
order. For example:

This returns 482597 but changes n to 845269. Notice that the 9 and 6 are swapped, as are the 2
and 5, and the 4 and 8. If the number contains an odd number of digits, leave the leftmost digit
in its original place. For example:

This converts n into 1325476. Solve this problem without using a string.*/
int swapDigitPairs(int n) {
    if (n < 10) {
        return n;
    } else {
        int num = n % 100;
        num = (num % 10) * 10 + (num / 10);
        return swapDigitPairs(n / 100) * 100 + num;
    }
}

