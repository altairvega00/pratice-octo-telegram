#include <string>
using std::string;

/**
 *  Look for patterns like "nik" and "nak" in 
 *  the input string-in other words a substring, 
 *  length-3, starting with 'n' and ending with 'k'. 
 *  Set result to a string where for all such words, 
 *  the middle letter is gone, so "nikXnak" yields "nkXnk"
 */
string nik_nak(const string& str)
{
    string result;
  // Add your code here
   for (int i = 0; i < str.length() ; i++)
   {
      if(str.substr(i,1) == "n" && str.substr(i+2,1) == "k")
      {
         result += "nk";
         i += 2;
      }
      else 
      {
         result += str.substr(i,1);
      }
   }
    return result;
}