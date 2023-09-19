/**
 *  Given two int values, return whichever value is larger. 
 *  However, if the two values have the same remainder when 
 *  divided by 5, then the return the smaller value. 
 *  However, in all cases, if the two values are the same, 
 *  return 0.
 */
int max_mod_five(int a, int b)
{
    int result;
    // Add your code here
    int a_remain = a % 5;
    int b_remain = b % 5;

    if (a > b)
    {
        if (a_remain == b_remain)
        {
            result = b;
        }
        result = a;
    }
    else if (a < b)
    {
        if (a_remain == b_remain)
        {
            result = a;
        }
        result = b;
    }    
    else 
    {
        result = 0;
    }
    return result;
}