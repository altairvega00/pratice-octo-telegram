string changeXY(const string& str)
{
    // 기저 사례: 빈 문자열일 때
    if (str.empty()) {
        return "";
    }

    // 문자열의 첫 번째 문자가 'x'인 경우 'y'로 변경하여 결과에 추가
    if (str[0] == 'x') {
        return "y" + changeXY(str.substr(1));
    } else {
        // 문자열의 첫 번째 문자가 'x'가 아닌 경우 그대로 결과에 추가
        return str[0] + changeXY(str.substr(1));
    }
}
/*11THE CHANGE X TO Y PROBLEM
Given a string, compute recursively (no loops) a new string where all the lowercase 'x' chars
have been changed to 'y' chars.
• changeXY("codex") → "codey"
• changeXY("xxhixx") → "yyhiyy"
• changeXY("xhixhix") → "yhiyhiy"*/