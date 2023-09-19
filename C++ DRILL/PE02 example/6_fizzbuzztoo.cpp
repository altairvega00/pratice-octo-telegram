#include <string>
using namespace std;
/**
 *  Given an int n, return the number followed by "!". 
 *  So the int 6 returns "6!". Except if the number is 
 *  divisible by 3 use "Fizz" instead of the number, 
 *  and if the number is divisible by 5 use "Buzz", 
 *  and if divisible by both 3 and 5, use "FizzBuzz". 
 *  You can use to_string(n) to convert n into a string 
 *  so you can concatenate. 
 */
string fizz_buzz_too(int n)
{
    string result;
    // Add your code here
    if (n % 3 == 0 && n % 5 == 0)
    {
       result = "FizzBuzz!";
    }
    else if ( n % 3 == 0)
    {
       result = "Fizz!";
    }
    else if (n % 5 == 0)
    {
       result =  "Buzz!";
    }
    else 
    {
       result = to_string(n) + "!";
    }
    return result;
}