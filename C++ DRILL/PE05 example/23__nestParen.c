/*
23 THE NEST PAREN PROBLEM
Given a string, return true if it is a nesting of zero or more pairs of parenthesis, like "(())" or
"((()))". Suggestion: check the first and last chars, and then recur on what's inside them.
• nestParen("(())") → true
• nestParen("((()))") → true
• nestParen("(((x))") → false
*/

bool nestParen(const string& str)
{
   // 기저 사례: 빈 문자열일 때
   if (str.empty())
   {
      return true; // 빈 문자열은 중첩된 괄호로 간주합니다.
   }

   char firstchar = str[0];
   char lastchar = str[str.length() - 1];

   // 첫 번째 문자와 마지막 문자가 각각 '('와 ')'인 경우
   if (firstchar == '(' && lastchar == ')')
   {
      // 첫 번째 문자와 마지막 문자를 제외한 부분 문자열을 다시 확인
      return nestParen(str.substr(1, str.length() - 2));
   }
   else
   {
      return false; // 중첩되지 않은 괄호가 있음
   }
}
