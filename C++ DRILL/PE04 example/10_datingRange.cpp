   // Write your function here

/*
Write a function named datingRange() that accepts three parameters: an integer input
parameter for a person's age, and two integer output parameters for a minimum and maximum.
The function should fills the min/max integers with the person's xkcd "dating range" as
described in the following web comic strip:

Your minimum xkcd dating age is half your own age plus 7. Your maximum xkcd dating range
is your own age, minus 7, then doubled. For example, the call datingRange(48, min, max);
sets min to 31 and max to 82. You may assume that the age value passed is a non-negative
integer.
*/

void datingRange(int age, int& minimum, int& maximum)
{
    // minimum dating age = half of given agen + 7
    minimum = (age/2)+7;

    // maximum dating age = Given age - 7 and then double
    maximum = (age-7)*2;
}

