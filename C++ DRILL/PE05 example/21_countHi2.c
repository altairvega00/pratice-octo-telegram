int countHi2(const string& str)
{
   if (str.empty())
   {
      return 0; // replace this with your code
   }
   if (str.substr(0,3) == "xhi")
   {
      return countHi2(str.substr(3));
   }
   else
   {
      if (str.substr(0,2) == "hi")
      {
         return 1 + countHi2(str.substr(2));
      }
      else
      {
         return countHi2(str.substr(1));
      }
   }
}
/*
21THE COUNT HI 2 PROBLEM
Given a string, compute recursively the number of times lowercase "hi" appears in the string,
however do not count "hi" that have an 'x' immediately before them.
• countHi2("ahixhi") → 1
• countHi2("ahibhi") → 2
• countHi2("xhixhi") → 0
*/