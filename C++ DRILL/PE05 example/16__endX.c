string endX(const string& str)
{
   if(str.length() < 2)
   {
      return str.substr(str.length()-1);
   }
   if(str.substr(0,1) == "x")
   {
      return endX(str.substr(1)) + "x";
   }
   else
   return str.substr(0,1) + endX(str.substr(1));
   //return ""; // replace this with your code
}

/*16THE X TO END PROBLEM
Given a string, compute recursively a new string where all the lowercase 'x' chars have been
moved to the end of the string.
• endX("xxre") → "rexx"
• endX("xxhixx") → "hixxxx"
• endX("xhixhix") → "hihixxx"
*/