int strCount(const string& str, const string& sub)
{
   int sublen = sub.length();
   if(str.empty())
   {
      return 0;
   }
   if(str.substr(0, sublen) == sub)
   {
      return 1+ strCount(str.substr(sublen-1), sub);
   }
   else 
   {
      return strCount(str.substr(1), sub);
   }
   // replace this with your code
}
/*
24THE STR COUNT PROBLEM
Given a string and a non-empty substring sub, compute recursively the number of times that
sub appears in the string, without the sub strings overlapping.
• strCount("catcowcat", "cat") → 2
• strCount("catcowcat", "cow") → 1
• strCount("catcowcat", "dog") → 0
*/