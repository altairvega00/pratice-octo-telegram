
bool strCopies(const string& str, const string& sub, int n) {
   // 기저 사례: 문자열 길이가 부분 문자열 길이보다 짧으면 부분 문자열이 n번 나타날 수 없음
   if (str.length() < sub.length()) {
      return false;
   }

   // 부분 문자열과 문자열의 앞 부분이 같은 경우
   if (str.substr(0, sub.length()) == sub) {
      // n이 1 이상인 경우 부분 문자열을 하나 찾았으므로 n을 1 감소시키고 나머지 문자열에서 재귀 호출
      if (n > 1) {
         return strCopies(str.substr(1), sub, n - 1);
      } else {
         // n이 1인 경우 이제까지 n번 부분 문자열을 찾았으므로 true 반환
         return true;
      }
   } else {
      // 부분 문자열이 일치하지 않는 경우 문자열의 다음 부분에서 재귀 호출
      return strCopies(str.substr(1), sub, n);
   }
}
/*
25THE STR COPIES PROBLEM
Given a string and a non-empty substring sub, compute recursively if at least n copies of sub
appear in the string somewhere, possibly with overlapping. N will be non-negative.
• strCopies("catcowcat", "cat", 2) → true
• strCopies("catcowcat", "cow", 2) → false
• strCopies("catcowcat", "cow", 1) → true
*/