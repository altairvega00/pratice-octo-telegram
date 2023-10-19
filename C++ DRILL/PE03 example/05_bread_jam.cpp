#include <string>
using std::string;

/**
 *  A sandwich is two pieces of bread with something 
 *  in between. Set result to the string that is between 
 *  the first and last appearance of "bread" in the given 
 *  string, or set it to the empty string "" if there are 
 *  not two pieces of bread. 
 */
string bread_jam(const string &str)
{
    string result;
    // • for input of "xxbreadjambreadyy" → "jam"
    // b : 2, bread 2 ~ 6
    for (int i = 0; i < str.length(); i++)
    {
        if (str.substr(i, 5) == "bread")
        {
           string newstr = str.substr(i + 5); // delete the str before the first "bread"
            for (int j = newstr.length()-1 ; j >0 ; j--) // 10, 10 > 6
            if(newstr.substr(j,5) == "bread") // j = 3
            {
                result += newstr.substr(0,j);
            }
        }
    }
    return result;
}