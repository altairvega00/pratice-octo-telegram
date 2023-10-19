
/*
Write a function named digitRange() that accepts an integer as an input parameter and returns
the range of values of its digits in its output parameter. The function should return the original
number unchanged. The range is defined as 1 more than the difference between the largest and
smallest digit value. For example, the call digitRange(68437, range) would set range to 6
because the largest digit value is 8 and the smallest is 3, so 8 - 3 + 1 = 6. If the number
contains only one digit, set range to 1. Solve this problem without using a string.
*/
   // Write your function here

#include <iostream>
using namespace std;
// Define a function named digitRange that takes an integer as input and returns
// the range of values of its digits in its output parameter.
int digitRange(int number, int& range) // 이부분 통짜로 암기 !!!! 

 {
    // Initialize the minimum and maximum digit values to the last digit of the number.
    int minDigit = number % 10;
    int maxDigit = number % 10;
   int temp = number;
    // Loop through the number by extracting its digits one by one and updating
    // the minimum and maximum digit values accordingly.
    while (number > 0) {
        // Extract the last digit of the number using the modulus operator.
        int digit = number % 10;

        // Update the minimum and maximum digit values.
        minDigit = min(minDigit, digit); // 이부분 통짜로 암기 ! 둘중이 뭐가 더 작은 지 비교해서 작은거 저장 
        maxDigit = max(maxDigit, digit);

        // Remove the last digit from the number.
        number /= 10;
    }

    // Compute the range of values of the digits.
    range = (maxDigit - minDigit) + 1;

    // If the number contains only one digit, set the range to 1.
    if (range == 0) range = 1;
    return temp;
}


