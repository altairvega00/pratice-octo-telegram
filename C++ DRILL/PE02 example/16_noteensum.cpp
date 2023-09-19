#include <string>
using std::string;

/**
 *  Given 3 int values, a b c, set result to their sum. 
 *  However, if any of the values is a teen-in the range 
 *  13..19 inclusive- then that value counts as 0, 
 * 
 *  except 15 and 16 do not count as a teens. 
 *  You may write a separate helper function if you like. 
 *  Define the helper above the problem function. 
 */
 
int isitteenornot(int num)
{
   if (num == 15 && num == 16 )
   {
      return num;
   }
   else if ( num>=13 && num <= 19)
   {
      return num = 0;
   }
   else 
   {
      return num;
   }
}
 
int no_teen_sum(int a, int b, int c)
{
    int result;
     // Add your code here
     result = isitteenornot(a) + isitteenornot(b) +isitteenornot(c);
    
    return result;
}