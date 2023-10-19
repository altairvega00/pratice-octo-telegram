#include <string>
using std::string;

/**
 *  Given an input string and a non-negative int n,
 *  we'll say that the front of the string is the first
 *  3 chars, or whatever is there if the string is less
 *  than length 3. Set result to n copies of the front
 */
string front_times(const string& str, int n)
{
    string result;
   // Your code goes here
   string finalstr = str.substr(0,3);
   while(n != 0)
   {
      result += finalstr;
      n--;
   }
    return result;
}