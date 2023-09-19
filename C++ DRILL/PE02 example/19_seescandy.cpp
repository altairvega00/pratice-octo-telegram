#include <string>
using std::string;

/**
 *  We want to pack up a box of custom chocolate bars. 
 *  We have some small chocolates (1 gram each) and some 
 *  large chocolates (5 grams each). Each box will have a 
 *  goal. 
 * 
 * Set result to the number of small bars to use, assuming 
 *  we always use big bars before small bars. 
 * Set result to -1 if it can't be done. 
 */
int sees_candy(int small, int big, int goal)
{
    int result;
    int bbig = 5 * big;
    int remain = goal - bbig;
    
    if (remain == 0)
    { result = 0;}
    else if (remain <= small)
    {result = remain;}
    else 
    {result = -1;}
    return result;
}