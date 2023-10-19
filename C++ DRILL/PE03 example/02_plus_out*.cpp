#include <string>
using std::string;

/**
 *  Given a string and a non-empty word string, set result 
 *  to a version of the original string where all chars 
 *  have been replaced by pluses ("+"), except for appearances 
 *  of the word string which are preserved unchanged. 
 * 
• for input of "12xy34", "xy" → "++xy++"
• for input of "12xy34", "1" → "1+++++"
• for input of "12xy34xyabcxy", "xy" → "++xy++xy+++xy"
 */
string plus_out(const string& str, const string& word)
{
   string result = "";
   
   for(int i = 0; i < str.length() ;i++)
   {
      int wordlen = word.length();
      if(str.substr(i, wordlen) ==  word)
      {
         result += word;
         i += wordlen -1; //이부분이 지피티가 해결한 부분. i의 숫자를 ++로 넘기지말고, wordlen에 해당하는 전체부분을 건너뛰는 과정. 
      }
      else 
      {
         result += "+";
      }
   } 
   return result;
}