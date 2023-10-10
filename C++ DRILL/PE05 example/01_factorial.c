#include <string>
using std::string;

int factorial(int n)
{   if(n != 0) 
   {
      return n * factorial(n-1);
      // 이 코드에서, n = 5라면 n =0 이 아니니까 return 5*factorial (4) 가 되겠지 ..? 
      //여기서 ...계속 가서 결국에 return 5*4*3*2* factorial(1) 의 형태가 최종적으로 나옴. 
      //그러면 팩토리얼 1-1 은 0 이니가 마지막 값은 또 1이 나옴. 그렇게 되면 최종적으로 5! 의 형태가 나옴 . 
   }
   return 1; // replace this with your code
}