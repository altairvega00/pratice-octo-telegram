string pairStar(const string& str)
{
   if (str.length()< 2)
   {
      return str.substr(str.length()-1);
   }
   if(str.substr(0,1) == str.substr(1,1))
   {
      return str.substr(0,1) + "*" + pairStar(str.substr(1));// replace this with your code
   }
   else 
   {
      return str.substr(0,1) + pairStar(str.substr(1));
   }
}
/*
15THE PAIR STAR PROBLEM
Given a string, compute recursively a new string where identical chars that are adjacent in the
original string are separated from each other by a "*".
• pairStar("hello") → "hel*lo"
• pairStar("xxyy") → "x*xy*y"
• pairStar("aaaa") → "a*a*a*a"
*/
