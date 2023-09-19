#include <string>
using std::string;
/**
 *  Given 3 int values, a b c, set result to their sum. 
 *  However, if one of the values is the same as another 
 *  of the values, it does not count towards the sum. 
 */

int lone_sum(int a, int b, int c)
{
    int result = 0;  // Initialize result to 0

    if (a != b && a != c) {
        result += a;  // Add 'a' to result if it's not duplicated
    }

    if (b != a && b != c) {
        result += b;  // Add 'b' to result if it's not duplicated
    }

    if (c != a && c != b) {
        result += c;  // Add 'c' to result if it's not duplicated
    }

    return result;
}