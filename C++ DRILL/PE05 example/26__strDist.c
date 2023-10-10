int strDist(const string& str, const string& sub) {
   // 기저 사례: 문자열이 부분 문자열보다 짧으면 0 반환
   if (str.length() < sub.length()) {
      return 0;
   }

   // 문자열의 앞부분이 부분 문자열과 일치하지 않으면 재귀 호출
   if (str.substr(0, sub.length()) != sub) {
      return strDist(str.substr(1), sub);
   }

   // 문자열의 뒷부분이 부분 문자열과 일치하지 않으면 재귀 호출
   if (str.substr(str.length() - sub.length()) != sub) {
      return strDist(str.substr(0, str.length() - 1), sub);
   }

   // 이제 문자열의 앞뒤부분이 모두 부분 문자열과 일치하므로 가장 긴 부분 문자열을 찾음
   return str.length();
}

/*
26THE STR DIST PROBLEM
Given a string and a non-empty substring sub, compute recursively the largest substring which
starts and ends with sub and return its length.
• strDist("catcowcat", "cat") → 9
• strDist("catcowcat", "cow") → 3
• strDist("cccatcowcatxx", "cat") → 9
*/