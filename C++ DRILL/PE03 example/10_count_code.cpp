#include <string>
using std::string;

/**
 *  Set result to the number of times that the 
 *  string "code" appears anywhere in the input 
 *  given string, except we'll accept any letter 
 *  for the 'd', so "cope" and "cooe" count.
   • for input of "aaacodebbb" → 1
   • for input of "codexxcode" → 2
   • for input of "cozexxcope" → 2
 */
int count_code(const string& str)
{
    int result = 0;
  // Add your code here
  for (int i = 0; i < str.length() ;i++)
   {
      if(str.substr(i,2) == "co" && str.substr(i+3,1) == "e")
      {
         result++;
      }
   }
    return result;
}