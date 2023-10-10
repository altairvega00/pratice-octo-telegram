int countX(const string& str)
{
    // 기저 사례: 빈 문자열일 때
    if (str.empty()) {
        return 0;
    }
    
    // 첫 번째 문자가 'x'인지 확인
    if (str[0] == 'x') {
        // 'x'를 찾았으므로 1을 더하고 나머지 문자열로 재귀 호출
        return 1 + countX(str.substr(1));
    } else {
        // 'x'가 아닌 경우 나머지 문자열로 재귀 호출
        return countX(str.substr(1));
    }
}
/*

THE COUNT X PROBLEM
Given a string, compute recursively (no loops) the number of lowercase 'x' chars in the string.
• countX("xxhixx") → 4
• countX("xhixhix") → 3
• countX("hi") → 0
*/