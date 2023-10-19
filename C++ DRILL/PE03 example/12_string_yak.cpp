#include <string>
using std::string;

/**
 *  Suppose the string "yak" is unlucky. Given a string, 
 *  set result to a version where all the "yak" are removed, 
 *  but the "a" can be any char. The "yak" strings will not overlap.
   • for input of "yakpak" → "pak"
   • for input of "pakyak" → "pak"
   • for input of "yak123ya" → "123ya"
 */
string string_yak(const string& str)
{
    string result;
  // Add your code here
   for(int i = 0; i < str.length() ; i++)
   {
      if (str.substr(i,1) == "y" && str.substr(i+2,1) == "k")
      {
         result += "";
         i +=2;
      }
      else 
      {
         result += str.substr(i,1);
      }
   }
    return result;
}