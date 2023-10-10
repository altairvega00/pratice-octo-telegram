int count8(int n)
{
   // 기저 사례: n이 0일 때
   if (n == 0)
   {
      return 0;
   }
   
   // 현재 숫자가 8인지 확인
   if (n % 10 == 8)
   {
      // 다음 숫자가 8이면 두 번 세기
      if ((n / 10) % 10 == 8)
      {
         return 2 + count8(n / 10);
      }
      else
      {
         return 1 + count8(n / 10);
      }
   }
   else
   {
      // 현재 숫자가 8이 아닌 경우 다음 숫자로 이동
      return count8(n / 10);
   }
}
