#include <string>
using std::string;

/**
 * https://codecheck.io/files/23020920524wlozhfq7de54mnwrpu7hhyso
 *  Given an input string, set result to a string where 
 *  every appearance of the lowercase word "is" has been 
 *  replaced with "is not". The word "is" should not be 
 *  immediately preceded or followed by a letter -- so 
 *  for example the "is" in "this" does not count.
 * 
 *  Do not use any string functions except for substr(), 
 *  at(), and size(). You may, however, use the <cctype>
 *  classification functions, such as isdigit() and isalpha().
 * • for input of "is test" → "is not test"
   • for input of "is-is" → "is not-is not"
   • for input of "This is right" → "This is not right"
 */
string is_not(const string& s)
{
   string result = "not done";

   // Add your code here
   
   return result;
}