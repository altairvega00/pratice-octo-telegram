#include <string>
using std::string;

/**
 *  Given a string and a non-empty word string,
 *  set result to a string made of each char
 *  just before and just after every appearance
 *  of the word in the string. Ignore cases where
 *  there is no char before or after the word, and
 *  a char may be included twice if it is between two
 *  words.
 *
 * • for input of "abcXY123XYijk", "XY" → "c13i"
    • for input of "XY123XY", "XY" → "13"
    • for input of "XY1XY", "XY" → "11"
 */
string word_ends(const string &str, const string &word)
{
    string result;
    // Add your code here
    for (int i = 0; i < str.length(); i++)
    {
        if (str.substr(i, 2) == word)
        {
            if (i == 0)
            {
                result += str.substr(i + 2, 1);
            }
            else
            {
                result += str.substr(i - 1, 1) + str.substr(i + 2, 1);
            }
        }
    }
    return result;
}
