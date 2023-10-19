#include <string>
using std::string;

/**
 *  Given a string and an int n, create a new string 
 *  made of the first n characters of the original 
 *  string, followed by the first n-1 characters of 
 *  the original string, and so on. You may assume 
 *  that n is between 0 and the length of the string, 
 *  inclusive (i.e. n >= 0 and n <= str.length())
 */
string repeat_front(const string& str, int n)
{
   string result = "";
   
   while(n != 0)
   {
      result += str.substr(0,n);
      n--;
   }
  // Add your code here
   
   return result;
}