#include <string>
using std::string;

/**
 *  Given a string and a non-empty word string, set result 
 *  to a version of the original string where all chars 
 *  have been replaced by pluses ("+"), except for appearances 
 *  of the word string which are preserved unchanged. 
 */
string plus_out(const string& str, const string& word)
{
   string result = "";
   for(int i = 0; i < str.length() ;i++)
    {
        if(str.substr(i,word.length()) != word )
        {
            result += "+"
        }
    }
   return result;
}