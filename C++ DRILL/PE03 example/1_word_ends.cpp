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
string word_ends(const string& str, const string& word)
{
    string result;
  // Add your code here
    int word_length = word.length();

    for (int i = 0; i < s.length(); ) {
    // 현재 위치 i에서 시작하여 문자열 s의 부분 문자열(word_length 길이)이
    // 대상 단어(word)와 같은지 확인합니다.
    if (s.substr(i, word_length) == word) 
    {
        // 대상 단어가 발견되면, 대상 단어 앞에 있는 문자를 결과(result)에 추가합니다.
        if (i > 0) 
        {
            result += s[i - 1];
        }
        // 대상 단어 뒤에 있는 문자를 결과(result)에 추가합니다.
        if (i + word_length < s.length()) 
        {
            result += s[i + word_length];
        }
        // 다음 검색 위치로 이동합니다. (대상 단어 길이만큼 이동)
        i += word_length;
    } 
    else 
    {
        // 대상 단어가 발견되지 않으면 다음 위치로 이동합니다.
        i++;
    }
}
이 주석은 해당 코드 블록이 무엇을 수행하는지 설명해줍니다. 코드가 루프를 사용하여 문자열을 탐색하고, 대상 단어의 등장 부분에서 앞과 뒤의 문자를 결과 문자열에 추가하며, 루프 변수 i를 업데이트하는 방법을 보여줍니다.






    return result;
}

/*
string word_ends(const string& str, const string& word)
{
    string result;
  // Add your code here
    if (str.find(word))
    {
        result = str[str.find(word)-1] + str[str.find(word) +1];
    }
    return result;
}
-> find function 없이 해보자 ! 
*/