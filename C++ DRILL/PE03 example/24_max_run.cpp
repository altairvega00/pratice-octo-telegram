#include <string>
using std::string;

/**
 *  Given an input string, set result to the length of
 *  the largest "block" in the string. A block is a run
 *  of adjacent chars that are the same.
 *  Do not use any string functions except for substr(),
 *  at(), and size()
 * • for input of "hoopla" → 2
    • for input of "abbCCCddBBBxx" → 3
    • for input of "" → 0 .
 */
int max_run(const string& str)
{
    int result = 0;
    int max = 0;
    int c =1;

    for (int i =1 ; i < str.size() ; i++;)
    {
        if(str[i] != str[i-1])
        {
            if (c > max)
            {
                max =c;
            }
        c = 0;
        }
        c++;
    }
   return max;
}