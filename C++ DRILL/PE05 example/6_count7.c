int count7(int n)
{
   // Base case: If n is 0, there are no more digits to check.
   if (n == 0)
   {
      return 0;
   }
   
   // Check the rightmost digit.
   int rightmostDigit = n % 10;
   
   // Initialize numberOf7 to 0.
   int numberOf7 = 0;
   
   // If the rightmost digit is 7, increment numberOf7 by 1.
   if (rightmostDigit == 7)
   {
      numberOf7 = 1;
   }
   
   // Recursively call count7 for the remaining digits (remove the rightmost digit).
   int countWithoutRightmost = count7(n / 10);
   
   // Return the sum of numberOf7 and the count without the rightmost digit.
   return numberOf7 + countWithoutRightmost;
}
