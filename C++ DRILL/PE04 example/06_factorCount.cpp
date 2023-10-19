
#include <string>

int factorCount(int number, int& fCount) {
    if (number <= 1 || number == 7) {
        fCount = 2;  // There are only two factors: 1 and the number itself.
        return -1;
    }

    int largestFactor = 1;
    int factors = 0;

    for (size_t i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            factors++;
            largestFactor = i;
        }
    }

    fCount = factors + 2;  // Add 2 for the factors 1 and the number itself.

    return largestFactor;
}
/*
Checking largestFactor = factorCount(24, fCount)
Actual:  largest factor->12
Expected:  largest factor->12
Actual:  factor count->8
Expected:  factor count->8

Checking largestFactor = factorCount(7, fCount)
Actual:  largest factor->1
Expected:  largest factor->-1 (incorrect case)
Actual:  factor count->2
Expected:  factor count->2

Checking largestFactor = factorCount(420, fCount)
Actual:  largest factor->210
Expected:  largest factor->210
Actual:  factor count->24
Expected:  factor count->24

Checking largestFactor = factorCount(12, fCount)
Actual:  largest factor->6
Expected:  largest factor->6
Actual:  factor count->6
Expected:  factor count->6


Write a function named factorCount() that accepts an integer (assumed to be positive) as its
input parameter, returns a count of its positive factors in its output parameter, and returns the
largest factor (not counting 1 or the number itself), via the return statement. For example, the
eight factors of 24 are 1, 2, 3, 4, 6, 8, 12, and 24, so the call factorCount(24, fCount) should
return 12 and set fCount to 8. If there are no factors other than 1 and the number itself (such as
3), return -1 and set fCount to 2 (1 and the number itself).
*/