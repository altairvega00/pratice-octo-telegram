int count11(const string& str)
{
   // 문자열 길이가 2 미만이면 중단
   if (str.length() < 2) {
      return 0;
   }

   // 현재 문자와 다음 문자가 "11"인 경우
   if (str.substr(0, 2) == "11") {
      // "11" 부분 문자열을 건너뛰고 나머지 문자열에서 재귀 호출
      return 1 + count11(str.substr(2));
   }
   else {
      // 첫 번째 문자를 제거하고 나머지 문자열에서 재귀 호출
      return count11(str.substr(1));
   }
}


/*
19THE COUNT 11 PROBLEM
Given a string, compute recursively (no loops) the number of "11" substrings in the string. The
"11" substrings should not overlap.
• count11("11abc11") → 2
• count11("abc11x11x11") → 3
• count11("111") → 1
*/