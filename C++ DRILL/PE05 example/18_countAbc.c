int countAbc(const string& str)
{
   if (str.length() < 3)
   {
      return 0;
   }
   if (str.substr(0,3) == "abc" || str.substr(0,3) == "aba")
   {
      return 1 + countAbc(str.substr(1));
   }
   else 
   {
      return countAbc(str.substr(1));
   }
   //return 0; // replace this with your code
}
/*
18THE COUNT ABC PROBLEM
Count recursively the total number of "abc" and "aba" substrings that appear in the given string.
• countAbc("abc") → 1
• countAbc("abcxxabc") → 2
• countAbc("abaxxaba") → 2
*/