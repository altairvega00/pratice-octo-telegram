int countPairs(const string& str)
{
    // 기본 사례: 문자열이 3글자 미만인 경우에는 쌍이 없을 것입니다.
    if (str.size() < 3) {
        return 0;
    }

    // 첫 번째 문자와 세 번째 문자가 같고 두 번째 문자가 다른지 확인합니다.
    if (str[0] == str[2] && str[0] != str[1]) {
        // 그렇다면, 우리는 하나의 쌍을 찾았습니다. 나머지 부분 문자열에서 계속합니다.
        return 1 + countPairs(str.substr(1)); // 이 쌍을 세고 나머지 문자열에서 계속합니다.
    } else {
        // 그렇지 않으면, 문자열을 한 글자 앞으로 이동하고 계속 확인합니다.
        return countPairs(str.substr(1));
    }
}
/*
We'll say that a "pair" in a string is two instances of a char separated by a char. So "AxA" the A's
make a pair. Pair's can overlap, so "AxAxA" contains 3 pairs -- 2 for A and 1 for x. Recursively
compute the number of pairs in the given string.
• countPairs("axa") → 1
• countPairs("axax") → 2
• countPairs("axbx") → 1"
*/