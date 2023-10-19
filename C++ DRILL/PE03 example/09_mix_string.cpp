#include <string>
using std::string;

/**
 *  Given two input strings, A and B, create a bigger 
 *  string made of the first char of A, the first char of B, 
 *  the second char of A, the second char of B, and so on. 
 *  Any leftover chars go at the end of the result. 
 */
string mix_string(const string& a, const string& b)
{
   string result;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   if(a.length() == b.length())
   {
      for(int i = 0; i < b.length() ; i++)
      {
         result += a.substr(i,1) + b.substr(i,1);
      }
   }
   else if(a.length() > b.length())
   {
      for(int i = 0; i < b.length() ; i++)
      {
         result += a.substr(i,1) + b.substr(i,1);
      }
      result += a.substr(b.length());
   }
   else if(a.length() < b.length())
   {
      for(int i = 0; i < a.length() ; i++)
      {
         result += a.substr(i,1) + b.substr(i,1);
      }
      result += b.substr(a.length());
   }
  // ---- YOUR CODE GOES ONLY ABOVE THIS LINE
   
   return result;
}