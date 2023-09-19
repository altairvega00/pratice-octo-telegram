/**
 *  Return the sum of two 6-sided dice rolls, 
 *  each in the range 1..6. However, if no_doubles (the third parameter) 
 *  is true, and, if the two dice show the same value, increment one die 
 *  to the next value, wrapping around to 1 if its value was 6. 
 */
int no_doubles(int a, int b, bool has_doubles)
{
    int result;
    // Add your code here
   if (has_doubles)
    {
       if ( a == b)
       { 
          result = 1 + a + b;
       }
      else
      {
         result = a + b ;
      }
    }
    else
    { 
       result = a +b;
       
    } 
    return result;
}