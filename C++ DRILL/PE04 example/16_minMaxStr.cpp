// Write your function here
/* Write a function named minMaxStr() that accepts a string input parameter and two integer
output parameters, min and max. Set min the ASCII value of the smallest alphabetical character
and max to the largest. Only consider alphabetical characters. The return statement should
return the real ratio of min to max. Make sure that the input string is not modified.*/

void minMaxStr(string s, int &min, int &max)
{
    min = (int)s[0];
    max = (int)s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (min > (int)s[i])
        {
            min = (int)s[i];
        }
        if (max < (int)s[i])
        {
            max = (int)s[i];
        }
    }
}
