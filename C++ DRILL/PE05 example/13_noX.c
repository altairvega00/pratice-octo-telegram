string noX(const string& str)
{
   if (str.empty())
   {
      return "";
   }
   if(str[0] == 'x')
   {
      return noX(str.substr(1));
   }
   else
   {
      return str[0] + noX(str.substr(1));
   }
}
/*
13THE NO X PROBLEM
Given a string, compute recursively a new string where all the 'x' chars have been removed.
• noX("xaxb") → "ab"
• noX("abc") → "abc"
• noX("xx") → ""
*/
