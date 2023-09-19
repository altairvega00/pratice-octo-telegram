#include <string>
using std::string;

/**
 *  Given 3 ints, a b c, set result to the sum of their 
 *  "rounded" values. For this problem, we'll round an 
 *  int value up to the next multiple of 10 if its rightmost 
 *  digit is 5 or more, so 15 rounds up to 20. Alternately, 
 *  round down to the previous multiple of 10 if its rightmost 
 *  digit is less than 5, so 12 rounds down to 10. 
 *  To avoid code repetition, you may write a separate helper 
 *  function but that is not required. The helper should appear 
 *  before the tested function. 
 */
int round_to_nearest_10(int num)
{
    int remainder = num % 10;
    if (remainder >= 5) {
        // Round up to the next multiple of 10
        return num + (10 - remainder);
    } else {
        // Round down to the previous multiple of 10
        return num - remainder;
    }
}
/* if num = 16, reaminder is 6. 
its bigger than 5 so it'll return 16 + 4 
( automatically become multiples of 10)*/

int round_sum(int a, int b, int c)
{
   int result;
    int rounded_a = round_to_nearest_10(a);
    int rounded_b = round_to_nearest_10(b);
    int rounded_c = round_to_nearest_10(c);

     result = rounded_a + rounded_b + rounded_c;


   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   // Add your code here
   
   return result;
}