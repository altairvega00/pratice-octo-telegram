int countHi(const string& str)
{
   if (str.empty())
   {
      return 0;
   }
   if (str.substr(0,2) == "hi")
   {
      return 1 + countHi(str.substr(1));
   }
   else 
   {
      return countHi(str.substr(1));
   }
   
    // replace this with your code
}
/*10THE COUNT HI PROBLEM
Given a string, compute recursively (no loops) the number of times lowercase "hi" appears in
the string.
• countHi("xxhixx") → 1
• countHi("xhixhix") → 2
• countHi("hi") → 1*/