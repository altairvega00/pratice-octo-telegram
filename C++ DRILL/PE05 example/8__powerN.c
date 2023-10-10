/**
 * 이 문제는 재귀 함수를 사용하여 주어진 n의 거듭제곱을 계산하는 것입니다. 
 * 주어진 정수 n을 exponent번만큼 곱해야 합니다.
*/

int powerN(int base, int exponent)
{
   // 기저 사례: 지수가 0인 경우
   if (exponent == 0)
   {
      return 1; // 어떤 수의 0 승은 항상 1입니다.
   }
   else
   {
      // base를 exponent - 1번 곱한 값과 base를 곱합니다.
      return base * powerN(base, exponent - 1);
   }
}
