/*
20 THE STRING CLEAN PROBLEM
Given a string, return recursively a "cleaned" string where adjacent chars that are the same have
been reduced to a single char. So "yyzzza" yields "yza".
• stringClean("yyzzza") → "yza"
• stringClean("abbbcdd") → "abcd"
• stringClean("Hello") → "Helo"
*/

string stringClean(const string& str)
{
    // 기저 사례: 빈 문자열이거나 문자열의 길이가 1일 때
    if (str.empty() || str.length() == 1) {
        return str;
    }

    char firstChar = str[0];
    string remaining = stringClean(str.substr(1));

    // 현재 문자와 다음 문자를 비교하여 중복 문자를 제거
    if (firstChar != remaining[0]) {
        return firstChar + remaining;
    } else {
        return remaining;
    }
}
