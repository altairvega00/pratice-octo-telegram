#include <string>
using std::string;

/**
 *  Given a string, count the number of times that 
 *  the substring consisting of the last two characters
 *  appears elsewhere in the string. If the input is
 *  hixxxhi", then the result is 1, since "hi" appears
 *  one other time in the string. The substrings may
 *  overlap (as example 3 below), but do not count the
 *  ending substring.
 * 
 * • for input of "hixxhi" → 1
   • for input of "xaxxaxaxx" → 1
   • for input of "axxxaaxx" → 2
*/
int last_two(const string& str)
{
   int result = 0;
   string checkstr = str.substr(str.length()-2,2);
  // Add your code here
   for(int i = 0; i< str.length() - 2 ;i++)
   {
      if(str.substr(i,2) == checkstr)
      {
         result++;
      }
   }
   return result;
}