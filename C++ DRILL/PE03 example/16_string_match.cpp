#include <string>
using std::string;

/**
 *  Given 2 strings, a and b, set result to 
 *  the number of the positions where they contain 
 *  the same length 2 substring. So "xxcaazz" and "xxbaaz" 
 *  yields 3, since the "xx", "aa", and "az" substrings 
 *  appear in the same place in both strings.
 * • for input of "xxcaazz", "xxbaaz" → 3
   • for input of "abc", "abc" → 2
   • for input of "abc", "axc" → 0
   동일한 두개의 문자열이 존재하는지 확인  .
 */
int string_match(const string& a, const string& b)
{
    int result = -1;
  // Add your code here
   for(int i =0; i < a.length() ; i++)
   {
      for(int j =0; j < b.length() ; j++)
      {
         if (a.substr(i,2) == b.substr(j,2))
         {
            result++;
         }
      }

   }
    return result;
}