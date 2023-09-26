#include <string>
using std::string;

/**
 *  Given a string, look for a mirror image (backwards) 
 *  string at both the beginning and end of the given 
 *  string. In other words, zero or more characters at the 
 *  very beginning of the given string, and at the very end 
 *  of the string in reverse order (possibly overlapping). 
 *  For example, the string "abXYZba" has the mirror end "ab".
 */
string mirror_ends(const string& str)
{
   string result;
   // Add your code here
   string sen1;
   string sen2;

   int len = str.length();
   for(int i =0 ; i < len; i++)
   {
    sen1 += str[i];
    sen2 = "";

    for (int j = sen1.length()-1 ; j >= 0 ; j--)
    {
        sen2 = str[j] + sen2;
        if (sen2 == str.substr(len -i -1, len))
        {
            result = sen1; 
        }
    }
   } 
   
   return result;
}