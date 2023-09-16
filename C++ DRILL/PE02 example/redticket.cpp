/**
 *  You have a red lottery ticket showing ints a, b, 
 *  and c, each of which is 0, 1, or 2. If they 
 *  are all the value 2, the payout is 10. 
 *  Otherwise if they are all the same, the 
 *  payout is 5. Otherwise so long as both b and 
 *  c are different from a, the payout is 1. 
 *  Otherwise the payout is 0. 
 */
#include <iostream>

int red_ticket(int a, int b, int c);

int main() {
    int a, b, c;
    std::cout << "Enter three integers (a, b, c): ";
    std::cin >> a >> b >> c;

    int payout = red_ticket(a, b, c);

    std::cout << "Payout: " << payout << std::endl;

    return 0;
}

int red_ticket(int a, int b, int c)
{
    int payout;
   // Add your code here
   if ( a == 2 && b == 2 && c == 2)
   {
    payout = 10;
   } 
   else if ( a == b && b == c)
   {
    payout = 5;
   }
   else if ( a != b && a != c)
   {
    payout = 1;
   }
   else 
   {
    payout = 0;
   }
    return payout;
}