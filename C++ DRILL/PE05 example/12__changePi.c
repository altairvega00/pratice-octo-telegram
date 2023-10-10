string changePi(const string& str)
{
   if(str.empty())
   {
      return "";
   }
   if(str.substr(0,2) == "pi")
   {
      return "3.14" + changePi(str.substr(2));
   }
   else 
   {
      return str.substr(0,1) + changePi(str.substr(1));
   }
   //return ""; // replace this with your code
}

/*Given a string, compute recursively (no loops) a new string where all appearances of "pi" have
been replaced by "3.14".
• changePi("xpix") → "x3.14x"
• changePi("pipi") → "3.143.14"
• changePi("pip") → "3.14p"*/