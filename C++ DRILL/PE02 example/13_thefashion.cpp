#include <string>
using std::string;

/**
 *  You and your date are trying to get a table at a 
 *  restaurant. The first input ("you") is the stylishness 
 *  of your clothes, in the range 0..10, and the second 
 *  ("date") is the stylishness of your date's clothes. 
 * 
 *  The result getting the table is encoded as "no", 
 *  "maybe", or "yes". 
 * 
 * If either of you is very stylish, 
 *  8 or more, then the result is yes.
 * 
 * With the exception 
 *  that if either of you has style of 2 or less, then 
 *  the result is no.
 * 
 * Otherwise the result is maybe. 
 */
string make_reservation(int you, int date)
{
    string reservation;
     // Add your code here
     if (you <=2 || date <=2)
     {
        reservation = "no";
     }
     else if (you >=8 || date >=8)
     {
        reservation = "yes";
     }
     
     else 
     {
        reservation = "maybe";
     }
    
    return reservation;
}