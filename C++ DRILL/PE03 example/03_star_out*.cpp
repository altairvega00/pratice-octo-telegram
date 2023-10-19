#include <string>
using std::string;

string star_out(const string &str)
{
    string result;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '*')
        {
            // Skip the '*' character
            result += "";
        }
        else if (i > 0 && str[i - 1] == '*')
        {
            // Skip one character to the left of '*'
            result += "";
        }
        else if (i < str.length() - 1 && str[i + 1] == '*')
        {
            // Skip one character to the right of '*'
            result += "";
        }
        else
        {
            result += str[i];
        }
    }

    return result;
}
