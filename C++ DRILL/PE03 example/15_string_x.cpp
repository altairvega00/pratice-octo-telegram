#include <string>
using std::string;

/**
 *  Given a string, set result to a version 
 *  where all the "x" have been removed. Except an 
 *  "x" at the very start or end should not be removed.  
 * 
 * • for input of "xxHxix" → "xHix"
   • for input of "abxxxcd" → "abcd"
   • for input of "xabxxxcdx" → "xabcdx"
 */
string string_x(const string& str)
{
    string result;
    if(str.substr(0,1) == "x")
    {
       result += "x";
    }
    //string front = str.substr(0,1);
    //string back = str.substr(str.length()-1,1);
    int strlen = str.length();
    for(int i = 0; i < strlen-1; i++)
    {
        if(str.substr(i,1) == "x")
        {
          result += "";
       }
       else
       {
          result += str.substr(i,1);
       }
    }
    result += str.substr(strlen-1);
  // Add your code here
    return result;
}