#include <string>
using std::string;

/*
https://codecheck.io/files/23030320438iehks5sezscbbkmxjd45x3f1
Write a function named crazyCaps() that accepts a string as an input-output parameter and
changes that string to have its capitalization altered such that the characters at even indexes
are all in lowercase and odd indexes are all in uppercase. For example, if a
variable s stores "Hey!! THERE!", then the call of crazyCaps(s); should change s to
store "hEy!! tHeRe!". The function should return the original (unmodified) string.
Do not use any string functions from the standard library other than size() and at().
Remember that you can find the difference between upper and lowercase characters by
subtracting 'A' from 'a'. Do not use the topper() or tolower() macros from cctype.
*/

string crazyCaps(string& s)
{
    size_t slen = s.size();

    for (size_t i = 0; i < slen; i++)
    {
        char c = s.at(i);

        if (i % 2 == 0)
        {
            if (c >= 'A' && c <= 'Z')
            {
                s.at(i) = c + ('a' - 'A'); // Convert to lowercase for even indexes
            }
        }
        else
        {
            if (c >= 'a' && c <= 'z')
            {
                s.at(i) = c - ('a' - 'A'); // Convert to uppercase for odd indexes
            }
        }
    }

    return s;
}

