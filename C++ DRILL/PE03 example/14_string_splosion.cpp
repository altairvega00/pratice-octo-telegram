#include <string>
using std::string;

/**
 *  Given a non-empty string like "Code" 
 *  set result to a string like "CCoCodCode".  
 * 
 * • for input of "Code" → "CCoCodCode"
   • for input of "abc" → "aababc"
   • for input of "ab" → "aab"
 */
string string_splosion(const string& str)
{
    string result;
  // Add your code here
   int strlen = str.length();
   for (int i = 0; i < strlen ;i++)
   {
      result += str.substr(0, i+1);
   }
    return result;
}